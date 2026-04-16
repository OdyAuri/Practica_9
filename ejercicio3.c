#include <stdio.h>
int main () 
{
    char *ap, c = 'a'; // Se declara el apuntador ap de tipo alfanumérico
    // * es un apuntador
    ap = &c; //Se le asigna al apuntador la dirección de memoria de la variable c 
    // el gatito se usa en los caracteres que no se imprimen pero si estan en el codigo
    printf("Carácter: %c\n",*ap); 
    //Se imprime el contenido de la variable a la que apunta el apuntador ap 
    printf("Código ASCII: %d\n",*ap); /*Se imprime el código ASCII del carácter
    ‘a’ */
    printf("Dirección de memoria: %d\n",ap);/*Se imprime la dirección de
    memoria que almacena el apuntador*/
    return 0; 
}
