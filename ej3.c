#include <stdio.h> // se necesita para utilizar las funciones printf y scanf
#include <stdlib.h> // se necesita para utilizar funciones que generen numeros aleatorios, se usa rand y srand

#define MAX_SIZE 10

/*
 * Se utiliza la funcion de findLargestSquare al considerar el codigo base proporcionado
 * Se usa dos for, los cuales estan anidados para hacer una iteracion a cada celda
 * En el propio bucle, intenta agrandar un cuadrado desde las celdad que valgan 1
 * Se busca verificar si todas las celdas dentro del cuadrado son 1
 * Una vez que se hace la verificacion se recibe el tamano del cuadrado mas grande que se encontro
*/
int findLargestSquare(int matrix[][MAX_SIZE], int size) {
    int maxSize = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] == 1) {
                int currentSize = 1;
                while (i + currentSize < size && j + currentSize < size) {
                    int valid = 1;
                    for (int k = i; k <= i + currentSize; k++) {
                        for (int l = j; l <= j + currentSize; l++) {
                            if (matrix[k][l] != 1) {
                                valid = 0;
                                break;
                            }
                        }
                        if (!valid) break;
                    }
                    if (valid) {
                        currentSize++;
                    } else {
                        break;
                    }
                }
                if (currentSize > maxSize) {
                    maxSize = currentSize;
                }
            }
        }
    }
    return maxSize;
}

/*
 * printMatrix para imprimir la matriz
 * uso de los for para iterar en cada celda de la matriz
*/

void printMatrix(int matrix[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
