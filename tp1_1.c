#include <stdlib.h>
int main(){
    int x = 10;
    int *px;
    px = &x;
    printf("contendio de la vrble con el puntero:%d\n", *px);
    printf("direccion de memoria del puntero%d\n", &(*px));
    printf("direccion de memoria de la vrble:%d\n", &x);
    printf("direccion memoria del puntero:%d\n", &px);
    printf("tamanio de la memoria:%d\n", sizeof(int));


}