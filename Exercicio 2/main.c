#include <stdio.h>
#include <stdlib.h>

void main(){
    int a, b, auxiliar, i, n;

    a = 0;
    b = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

   //Calcula a sequ�ncia Fibonacci e verifica se n�mero inserido � igual.
    for(i = 0; i < n; i++) {

        auxiliar = a + b;
        a = b;
        b = auxiliar;

        if(n == b)
            break;
    }

    //Verifica se o n�mero inserido � compativel com algum da tabela Fibonacci e mostra o resultado.
    if(n == b || n == 0)
        printf("Numero %i pertence a seguencia Fibonacci.", n);

    else
        printf("Numero %i nao pertence a seguencia Fibonacci.", n);

}
