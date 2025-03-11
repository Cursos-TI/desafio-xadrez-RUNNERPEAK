#include <stdio.h>

void mover_torre(int movtorre) {
    if (movtorre > 0 ){
        printf("A torre foi para a direita.\n");
        mover_torre(movtorre - 1);
    }
}



void mover_bispo(int movbispo, int escolhabispo) {
   if (movbispo > 0){
    if (escolhabispo == 1){
        printf("O bispo se moveu para cima e para direita (diagonal).\n");
    }else if (escolhabispo == 2){
        printf("O bispo se moveu para cima e para esquerda (diagonal).\n");
    }
    mover_bispo(movbispo - 1, escolhabispo);
}
}



void mover_rainha(int movrainha){
    if(movrainha > 0){
        printf("A rainha se moveu para a esquerda.\n"); 
        mover_rainha(movrainha - 1);
    }
}



void mover_cavalo(int movcavalo){

    for(int cavalo = 0; cavalo < 2; cavalo++){
        printf("A cavalo se moveu para: cima.\n"); 
    }
    if (movcavalo == 1){
        printf("O cavalo se moveu para: esquerda.\n");
    }else if (movcavalo == 2){
        printf("O cavalo se moveu para: direita.\n");
    }    
    }



int main() {

    //VARIÁVEIS REPRESENTANDO OS MOVIMENTOS DAS PEÇAS DE XADREZ
    int movtorre, movbispo, movrainha, movcavalo;

    //VARIAVEL QUE PERMITIRÁ O USUÁRIO ESCOLHER SE O CAVALO IRÁ PARA A ESQUERDA OU DIREITA
    int escolha, escolhabispo;


    printf("Digite quantas casas você deseja mover a torre para a direita: \n");
    scanf("%d", &movtorre);
    mover_torre(movtorre);



    printf("\nQuantas casas você deseja mover o bispo?\n");
    scanf("%d", &movbispo);
    printf("E para diagonal direita(1) ou esquerda(2)?\n");
    scanf("%d", &escolhabispo);
    mover_bispo(movbispo, escolhabispo);



    printf("\nDigite quantas casas você deseja que a rainha se mova para a esquerda: \n");
    scanf("%d", &movrainha);
    mover_rainha(movrainha);



    printf("\nO cavalo se move em L, você quer que ele vá para esquerda(1) ou direita(2)?\n");
    scanf("%d", &escolha);
    mover_cavalo(escolha);
       

    return 0;
}
