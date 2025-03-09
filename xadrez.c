#include <stdio.h>

int main() {
    
    //VARIÁVEIS PARA INICIAR O CÓDIGO, REPRESENTANDO AS PEÇAS E QUANTAS CASAS VÃO SE MOVER
    int torre, bispo, rainha, cavalo;
    int movtorre, movbispo, movrainha, movcavalo;

    //PEDE AO USUÁRIO DIGITAR QUANTAS CASA ELE DESEJA QUE A TORRE SE MOVE ( LENDO A ENTRANDO, E IMPRIMINDO O RESULTADO )
    printf("Digite quantas casas você deseja mover a torre para a direita: \n");
    scanf("%d", &movtorre);

    //A VARIÁVEL "torre" ESTÁ SETADA EM 0, LOGO SERÁ SOMADO COM O VALOR QUE O USUÁRIO DER ENTRADA REPRESENTADO PELO "movtorre"
    for(torre = 0; torre < movtorre; torre++){
    printf("A torre foi para a direita.\n");
    }




    //PEDE AO USUÁRIO QUANTAS CASA ELE DESEJA QUE O BISPO SE MOVA ( LÊ, E IMPRIME O RESULTADO)
    printf("\nDigite quantas casas você deseja mover o bispo: \n");
    scanf("%d", &movbispo);

     //A VARIÁVEL "bispo" ESTÁ SETADA EM 0, LOGO SERÁ SOMADO COM O VALOR QUE O USUÁRIO DER ENTRADA REPRESENTADO PELO "movbispo"
    bispo = 0;
    while(bispo < movbispo){
        printf("O bispo se moveu para cima e para direita (diagonal).\n");    
        bispo++;
    }



    //PEDE AO USUARIO QUANTAS VEZES A RAINHA IRÁ SE MOVAR PARA A ESQUERDA.
    printf("\nDigite quantas casas você deseja que a rainha se mova para a esquerda: \n");
    scanf("%d", &movrainha);

    //A VARIÁVEL "rainha" ESTÁ SETADA EM 0, LOGO SERÁ SOMADO COM O VALOR QUE O USUÁRIO DER ENTRADA REPRESENTADO PELO "movrainha"
    rainha = 0;
    do
    {
        printf("A rainha se moveu para a esquerda.\n"); 
        rainha++;  
    } while (rainha < movrainha);



    //VARIAVEL PARA O USUÁRIO ESCOLHER SE O CAVALO IRÁ PARA A ESQUERDA OU DIREITA
    int escolha;
    movcavalo = 0;

    printf("\nO cavalo se move em L, você quer que ele vá para esquerda(1) ou direita(2) ?\n");
    scanf("%d", &escolha);


    //"movcavalo" SETADA EM 0, ENTÃO ENQUANTO FOR 0, SERÁ EXECUTADO O CÓDIGO IMPRIMINDO QUE O CAVALO FOI PARA CIMA DUAS VEZES.
    while (movcavalo == 0){
    
        for(cavalo = 0; cavalo < 2; cavalo++){
        printf("A cavalo se moveu para: cima.\n");
    }

    //SE O USUÁRIO ESCOLHER 1, IRÁ IMPRIMIR QUE ELE FOI PARA A ESQUERDA.
    while(escolha == 1){
        printf("O cavalo se moveu para: esquerda.\n");
        break;
    }

    //SE O USUÁRIO ESCOLHER 2, IRÁ IMPRIMIR QUE ELE FOI PARA A DIREITA.
    while(escolha == 2){
        printf("O cavalo se moveu para: direita.\n");
        break;
    }
    movcavalo++;



}
       

    
    
    


    






    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
