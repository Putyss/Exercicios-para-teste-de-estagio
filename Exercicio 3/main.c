#include <stdio.h>
#include <stdlib.h>

void main(){
    int i, dia = 0, dias_acima_media;
    float soma = 0, media, ValorDoDia[30];
    float menor, maior = 0;

    //Parametros de valores indicado pelo exercicio.
    ValorDoDia[0] = 22174.1664;

    ValorDoDia[1] = 24537.6698;

    ValorDoDia[2] = 26139.6134;

    ValorDoDia[3] = 0.0;

    ValorDoDia[4] = 0.0;

    ValorDoDia[5] = 26742.6612;

    ValorDoDia[6] = 0.0;

    ValorDoDia[7] = 42889.2258;

    ValorDoDia[8] = 46251.174;

    ValorDoDia[9] = 11191.4722;

    ValorDoDia[10] = 0.0;

    ValorDoDia[11] = 0.0;

    ValorDoDia[12] = 3847.4823;

    ValorDoDia[13] = 373.7838;

    ValorDoDia[14] = 2659.7563;

    ValorDoDia[15] = 48924.2448;

    ValorDoDia[16] = 18419.2614;

    ValorDoDia[17] = 0.0;

    ValorDoDia[18] = 0.0;

    ValorDoDia[19] = 35240.1826;

    ValorDoDia[20] = 43829.1667;

    ValorDoDia[21] = 18235.6852;

    ValorDoDia[22] = 4355.0662;

    ValorDoDia[23] = 13327.1025;

    ValorDoDia[24] = 0.0;

    ValorDoDia[25] = 0.0;

    ValorDoDia[26] = 25681.8318;

    ValorDoDia[27] = 1718.1221;

    ValorDoDia[28] = 13220.495;

    ValorDoDia[29] = 8414.61;

    menor = ValorDoDia[0];

    //Calculo para fazer a soma total, achar o menor e o maior dia de faturamento.
    //E a quantidade de dias comfaturamento maior que 0.
    for(i = 0; i < 30; i++){
        soma = soma + ValorDoDia[i];

        if(ValorDoDia[i] > maior)
            maior = ValorDoDia[i];

        if(ValorDoDia[i] < menor && ValorDoDia[i] != 0)
            menor = ValorDoDia[i];

        if(ValorDoDia[i] > 0)
            dia++;
    }

    //Calculo da média com base nos dias que faturamento foi maior que 0.
    media = soma / dia;

    //Calculo dos dias que faturamento foi maior que a média.
    for(i = 0; i <= dia; i++){
        if(ValorDoDia[i] > media)
            dias_acima_media++;
    }

    printf("O menor valor de faturamento do mes foi de: %.2f.\n", menor);
    printf("O maior valor de faturamento do mes foi de: %.2f.\n", maior);
    printf("O numero de dias que valor do faturamento exedeu a media mensal: %i.\n", dias_acima_media);

}
