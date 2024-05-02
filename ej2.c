#include <stdio.h> //agregar ya que se quiere usar printf y scanf

int factorial  (int n)  {
    int  i =  1;
    while (n > 1) {
    	i = i * n;
    	n = n - 1; //hay que quitar el int porque se esta creando una variable n dentro del bucle, esto hace que n no se actualice
    }
    return  i;
}

int main(int argc, char *argv[]) {
    int numero; //se necesita para guardar lo que digite el usuario
    printf("Ingrese un número para calcular su factorial: ");//aqui se le pide al usuario el numero que se va a guardar en lo anterior
    scanf("%d", &numero); //leyendo el numero
    
    int resultado = factorial(numero); //aqui se usa la parte de factorial que se corrigio para luego guardar el resultado en la variable "resultado"
    printf("%d! = %d\n", numero, resultado); //se imprime el calculo
    
    return 0;
}
