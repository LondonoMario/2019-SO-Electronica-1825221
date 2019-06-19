# Tarea 01 sistemas operativos

En este repositorio se encuentra la tarea 01 en la que se modificaron los siguientes codigos como se pedia en la guia:

## mem.c:

En el archivo mem.c se ejecuto el comando sudo sh -c "echp 0 > /proc/sys/kernel/randomize_va_space" para desactivar la generacion de direcciones random de la memoria, con esto se logra que el programa con dos ejecuciones tome una sola direccion de la memoria la variable p

## threads.c

En el archivo threads.c se crea una "puerta" que anade un orden a la ejecucion del programa evitando que los hilos de ejecucion tomen valores "repetidos" y que al final den como resultado un valor 'raro'. Cada hilo al momento de entrar a la funcion cierra esta puerta impidiendo que el otro entre hasta que el primero acabe su ejecucion, cuando este acaba, abre la puerta para dar paso al segundo hilo y asi consecutivamente hasta que obtiene el resultado final y se destruye la puerta para evitar posibles errores de devolucion de datos.
 
## io.c

En el archivo io.c se crea un condicional para saber si un archivo *preferentemente de texto* existe o no, si dicho archivo existe mediante un ciclo mostrara en pantalla lo contenido en este archivo, luego mediante una funcion de recursividad mostrara el contenido de  texto del archivo en sentido contrario.
