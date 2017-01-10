# Chuleta de comandos post-instalación de FreeBSD

* Instalar el editor de texto nano para mayor comodidad al tocar archivos de configuración, etc...

	Accedemos como superusuario con *su* e introducimos el siguiente comando:
	
	```pkg install nano```

El sistema nos advertira de que el gestor de paquetes no esta instalado y si queremos que lo
descargue y lo instale por nosotros, una vez instalado, nos preguntara si queremos instalar nano.

*  Instalando bash y cambiando la shell por defecto de los usuarios

	Accedemos al superusuario con *su* e introducimos el siguiente comando:
	
	```pkg install bash```

Bash requiere de fdescfs, y que este montado en /dev/fd. Para que lo monte automaticamente
hacemos echo de esta linea a /etc/fstab:

```echo "fdesc /dev/fd     fdescfs     rw  0   0" >> /etc/fstab```

Para hacer de bash la shell por defecto en el sistema, podemos hacer uso de dos variaciones
del mismo comando:

```chsh -s /usr/local/bin/bash usuario 
chsh -s bash```

* Integrar sudo en el sistema

Instalamos sudo desde los ports:
``cd /usr/ports/security/sudo 
make install clean``

La configuracion de sudo se encuentra en la ruta /usr/local/etc/sudoers.default, que moveremos
a /usr/local/etc/sudoers para adquirir sus valores por defecto.

Se descomentaran dos lineas del fichero sudoers, la que permite que los usuarios pertenecientes
al grupo wheel y sudo puedan ejecutar con sudo cualquier comando.

* Entorno grafico MATE

Se instala MATE junto con el display manager SLIM.

Para instalar MATE, haremos uso del siguiente comando:
```pkg install xf86-video-fbdev mate-desktop mate xorg```

Y añadimos las siguientes lineas al archivo /etc/rc.conf:

```moused_enable="YES"
dbus_enable="YES"
hald_enable="YES"```

Podemos probar que el entorno funcione bien con el comando:

```xinit mate-session```

Instalamos SLIM, ya que MATE no posee de un display manager por si mismo como
GNOME o KDE.

```pkg install slim```

Agregamos la siguiente línea en el archivo /etc/rc.conf:

```slim_enable="YES"```

Agregamos la siguiente línea al archivo .xinitrc en el directorio home del usuario.

```exec mate-session```

* Poner entorno en español

Editamos .login_conf y añadimos estas lineas:

```me:
:charset=ISO-8859-15:
:lang=es_ES.ISO8859-15:
:tc=default:```

Editamos .profile y añadimos estas lineas:

``LANG=es_ES.ISO8859-15; export LANG
MM_CHARSET=ISO-8859-15; export MM_CHARSET``

Editamos .xinitrc y añadimos estas lineas:

``LANG=es_ES.ISO8859-15; export LANG
setenv LANG es_ES.ISO8859-15``

* Aplicaciones utiles (ofimatica, video...)

```pkg install vlc libreoffice xarchiver rar unrar p7zip filezilla epdfview gimp xfburn ristrerro gtk-murrine``

