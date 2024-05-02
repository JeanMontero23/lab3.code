#include <stdio.h> //para poder usar printf

int main() {
    int n = 100; //se quiere que solo sean 100 numeros
    int triangular = 0; //aqui se quiere que triangular comience desde cero porque hay que abarcar todos los numeros triangulares desde el "inicio"

    printf("Los primeros 100 números triangulares son:\n");//printf para que se vea el mensaje seguido de los 100 primeros numeros triangulares

    for (int i = 1; i <= n; ++i) { //se usa for para hacer bucle, se inicia en 1 hasta i=n. Ademas a "i" se le suma uno por cada iteracion
        triangular += i; //se suma el valor de i a triangular por cada iteracion
        printf("%d ", triangular); //triangular es entero con signo
    }

    printf("\n"); //cuando acaba el bucle se imprime un nuevo caracter en otra linea

    return 0;
}
