#include <stdio.h>

int main()
{
    // esto es un comentario
    /*
        comentario
        \n nueva linea
        \t tab, espacio
        \" poner comillas en el texto
        \\ poner backslash
        
    */
    /*
    printf ("hola mundo\n");
    printf ("hola mundo 2\n");
    printf ("1\t2\t3\t4\t5\n6\t7\t8\t9\t10");
    printf ("\n\"esto es en serio\"");
    */
    int x;// declaracion
    x = 1; // inicializacion
    int y = 2; 
    float flotante = 2.05;
    char letra = 'a';
    char nombre[] = "Carlos"; //tecnicamente no existen los strings, ya que esos son objetos, por lo que se ocupan arrays
    printf ("%d %d",x,y); //%d se utiliza para indicar la posicion de una variable int en un texto
    printf ("\n%s",nombre);//%S se utiliza para strings
    printf ("\n%c", letra);//%c se utiliza para caracteres
    printf ("\n%f",flotante); //%f se utiliza para floats
    return 0;
}
