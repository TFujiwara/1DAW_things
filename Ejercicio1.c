#include <stdio.h>
// El archivo de cabecera de la biblioteca estándar de C limits.h
// Se utiliza para establecer mediante constantes ciertas propiedades de las variables de tipo entero,
// propiedades como por ejemplo la definición de su rango.
// http://www.tutorialspoint.com/c_standard_library/limits_h.htm
// http://tigcc.ticalc.org/doc/limits.html
#include <limits.h>
//
// El archivo de cabecera de la biblioteca estándar de C float.h
// Se utiliza para establecer mediante constantes ciertas propiedades de las variables de tipo float,
// propiedades como por ejemplo la definición de su rango. FLT_MIN,FLT_MAX
#include <float.h>

int main()
{
  printf("Storage size for double : %f \n", (double) sizeof(double)); //Devuelve el tamaño en bytes del tipo entero (int).
  printf("Storage size for char : %d \n", (char) sizeof(char)); //Devuelve el tamaño en bytes del tipo entero (int).
  printf("Storage size for float : %f \n", (float) sizeof(float)); //Devuelve el tamaño en bytes del tipo entero (int).
  printf("Storage size for short int: %d \n", (short int) sizeof( short int)); //Devuelve el tamaño en bytes del tipo entero (int).
  printf("Storage size for long : %ld \n", (long) sizeof(long)); //Devuelve el tamaño en bytes del tipo entero (int).
  printf("Storage size for int : %d \n", (int) sizeof(int)); //Devuelve el tamaño en bytes del tipo entero (int).
  printf("Storage size for unsigned int : %d \n", (unsigned int) sizeof( unsigned int)); //Devuelve el tamaño en bytes del tipo entero (int).
  printf("\n\n\n");
  printf ("Mínimo y máximo valor del tipo de datos int valor= %d\t\t%d\n",INT_MIN,INT_MAX);
  printf ("Mínimo y máximo valor del tipo de datos float valor= %f\t\t%f\n",FLT_MIN,FLT_MAX);
  printf ("Mínimo y máximo valor del tipo de datos char valor= %d\t\t%d\n",CHAR_MIN,CHAR_MAX);
  printf ("Mínimo y máximo valor del tipo de datos short valor= %d\t\t%d\n",SHRT_MIN,SHRT_MAX);
  printf ("Mínimo y máximo valor del tipo de datos long valor= %ld\t\t%ld\n",LONG_MIN,LONG_MAX);
  printf ("Mínimo y máximo valor del tipo de datos unsigned long sin signo valor= \t\t%ld\n",ULONG_MAX);
return 0;

}

//
//Referencias para códigos de foramtos en la función printf
//https://msdn.microsoft.com/es-es/library/aa291517(v=vs.71).aspx
//http://es.cppreference.com/w/cpp/io/c/printf_format
