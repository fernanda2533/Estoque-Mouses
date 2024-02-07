#include <stdio.h> 
// Exercício// 
// A tarefa é realizar o teste de cerca de 200 mouses que se encontram em uma empresa //
// e, a partir disso, fazer um levantamento do estado de cada um deles. Requisitou-se então //
// que fosse feito um programa para registrar este levantamento. O programa deverá receber um //
// número (indeterminado de entradas - temos um loop), cada uma contendo: //
// um número de identificação do mouse e o tipo de defeito, sendo: //
// - necessita da esfera; //
// - necessita de limpeza; //
// - necessita troca do cabo ou conector; //
// - quebrado ou  inutilziado. //
// Uma identificação igual a zero encerra o programa. Ao final, o programa deverá emitir o seguinte relatório: //
// Quantidade de mouses: 15 // 
//  Situação                              Quantidade    Percentual// 
// 1-necessita da esfera                     5            33,3%   // 
// 2-necessita de limpeza                    3            20,0%  // 
// 3-necessita troca do cabo ou conector     5            33,3% //
// 4-quebrado ou inutilizado                 2            13,3%// 

int main(){

    // Entrada de variaveis //

    int contador_mouses_total = 0, contador_sit_1 = 0, contador_sit_2 = 0,
    contador_sit_3 = 0, contador_sit_4 = 0, identificacao, defeito;
    

    // Entrada de dados // 
    printf("Informe a identificacao: ");
    scanf("%d", &identificacao);

    while(identificacao != 0){
        printf("1 - Necessita de esfera. \n");
        printf("2 - Necessita de limpeza. \n");
        printf("3 - Necessita de troca do cabo ou conector \n");
        printf("4 - Quebrado ou inutilizado. \n");
        printf("Informe o tipo de defeito: \n");
        scanf("%d", &defeito);
        //Processamento//
        if(defeito == 1){
            contador_sit_1 = contador_sit_1 + 1;
        }
        if(defeito == 2){
            contador_sit_2 = contador_sit_2 + 1;
        }
        if(defeito == 3){
            contador_sit_3 = contador_sit_3 +1;
        }
        if(defeito == 4){
            contador_sit_4 = contador_sit_4 +1;
        }
        contador_mouses_total = contador_mouses_total + 1;
        // Entrada de dados // 
        printf("Informe a identificacao: ");
        scanf("%d", &identificacao);
     
    } 
    // Declaramos variaveis do tipo float para convertermos o valor das //
    // quantidades em porcentagens % //
    float p1, p2, p3, p4; // (float) cast - converte a variavel em quesão, anteriormente declarada como inteiro, em float, para ser feita a operação.//
    p1 = ((float)contador_sit_1 / (float)contador_mouses_total * 100.0); 
    p2 = ((float)contador_sit_2 / (float)contador_mouses_total * 100.0); 
    p3 = ((float)contador_sit_3 / (float)contador_mouses_total * 100.0); 
    p4 = ((float)contador_sit_4 / (float)contador_mouses_total * 100.0); 

    printf("Quantidade de Mouses %d \n\n", contador_mouses_total);
    printf("Situacao \t\t\t\t\tQuantidade \t\tPercentual\n");
    printf("1- Necessita de esfera \t\t\t\t%d \t\t\t%.2f%%\n", contador_sit_1, p1);
    printf("2- Necessita de limpeza \t\t\t%d \t\t\t%.2f%%\n", contador_sit_2, p2);
    printf("3- Necessita de troca de cabo ou conector\t%d \t\t\t%.2f%%\n", contador_sit_3, p3);
    printf("4- Quebrado ou inutilizado \t\t\t%d \t\t\t%.2f%%\n", contador_sit_4, p4);
    
return 0;
} 