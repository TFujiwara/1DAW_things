#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
int main(int argc, char **argv) {
  //Creamos las variables a usar
  int desfichorigen,desfichdestino;
  static int tam_buff = 512;
  const char* buffer[tam_buff];
  int bytesleidos;
    if (argc != 3){
      //Si la variable argc no es igual a 3 (2 argumentos), saldrá de la aplicación mostrando un error
    printf("Faltan parametros.\nLos parametros que puedes pasar son: fichero a leer y fichero a escribir.\n", argv[0]);
    exit(EXIT_FAILURE);
      } else{
        //Si los dos parametros se han introducido, se continua con la ejecucion
    desfichorigen = open(argv[1], O_RDONLY);
    desfichdestino = open(argv[2], O_WRONLY|O_CREAT, 0644);
    if(desfichorigen == -1 || desfichdestino == -1){
      //Si hay algún error en la apertura de ficheros, devolverá un error y saldrá del programa
      printf("Error al abrir el fichero, saliendo del programa.\n");
      close(desfichorigen);
      close(desfichdestino);
      exit(EXIT_FAILURE);
    } else {
      //Lectura del fichero origen y escritura al fichero destino, si el anterior condicional no se cumple
      while((bytesleidos = read(desfichorigen,buffer,sizeof(buffer)))>0){
        write(desfichdestino,buffer,bytesleidos);
        printf("Bytes leidos: %i bytes\n",bytesleidos );
      }sizeof(buffer);
    }
  }
  close(desfichorigen);
  close(desfichdestino);
  exit(1);
}
