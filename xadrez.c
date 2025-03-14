#include <stdio.h>


//FUNÇÃO RECURSIVA PARA MOVIMENTAR A TORRE
void mover_torre(int movtorre) {
    if (movtorre > 0 ){ //VERIFICA SE HÁ MOVIMENTOS A SER FEITO
        printf("A torre foi para a direita.\n"); //MOSTRA O MOVIMENTO DA TORRE
        mover_torre(movtorre - 1); // CHAMA A FUNÇÃO RECURSIVA
    }
}


//FUNÇÃO RECURSIVA PARA MOVIMENTAR O BISPO
void mover_bispo(int movbispo, int escolhabispo) {
   if (movbispo > 0){ //VERIFICA SE HÁ MOVIMENTOS A SER FEITO
    if (escolhabispo == 1) {
        for (int vert = 1; vert <= movbispo; vert++) {  //LOOP VERTICAL 
        printf("O bispo se moveu para cima.\n"); // MOSTRA O MOVIMENTO PARA CIMA
        for (int hor = 1; hor <= 1; hor++) {  //LOOP HORIZONTAL 
        printf("O bispo se moveu para a direita.\n"); // MOSTRA O MOVIMENTO PARA DIREITA
            }
        }
    } else if (escolhabispo == 2) { 
        for (int vert = 1; vert <= movbispo; vert++) { //LOOP VERTICAL
        printf("O bispo se moveu para cima.\n"); // MOSTRA O MOVIMENTO PARA CIMA
        for (int hor = 1; hor <= 1; hor++) { //LOOP HORIZONTAL
        printf("O bispo se moveu para a esquerda.\n"); // MOSTRA O MOVIMENTO PARA ESQUERDA
            }
        }
    }
}
}



//FUNÇÃO RECURSIVA PARA MOVIMENTAR A RAINHA 
void mover_rainha(int movrainha){
    if(movrainha > 0){ //VERIFICA SE HÁ MOVIMENTOS A SER FEITO
        printf("A rainha se moveu para a esquerda.\n"); //MOSTRA A MOVIMENTAÇÃO DA RAINHA
        mover_rainha(movrainha - 1); //CHAMA A FUNÇÃO RECURSIVA
    }
}


//FUNÇÃO RECURSIVA PARA MOVIMENTAR O CAVALO
void mover_cavalo(int movcavalo){

    for(int cavalo = 0; cavalo < 2; cavalo++){ //LOOP PARA DUAS CASAS PARA CIMA
        printf("A cavalo se moveu para: cima.\n"); 
    }
    if (movcavalo == 1){ //MOVIMENTAÇÃO PARA A ESQUERDA
        printf("O cavalo se moveu para: esquerda.\n");
    }else if (movcavalo == 2){ //MOVIMENTAÇÃO PARA A DIREITA
        printf("O cavalo se moveu para: direita.\n");
    }    
    }



int main() {

    //VARIÁVEIS REPRESENTANDO OS MOVIMENTOS DAS PEÇAS DE XADREZ
    int movtorre, movbispo, movrainha, movcavalo;

    //VARIAVEL QUE PERMITIRÁ O USUÁRIO FAZER ESCOLHAS
    int escolha, escolhabispo;


    //SOLICITA O NÚMERO DE CASAS QUE O USUÁRIO DESEJA MOVER A TORRE
    printf("Digite quantas casas você deseja mover a torre para a direita: \n");
    scanf("%d", &movtorre);
    mover_torre(movtorre); //CHAMA A FUNÇÃO PARA MOVER A TORRE



    //SOLICITA O NÚMERO DE CASAS QUE O USUÁRIO DESEJA MOVER O BISPO
    printf("\nQuantas casas você deseja mover o bispo?\n");
    scanf("%d", &movbispo);
    //SOLICITA PARA QUAL LADO ELE DESEJA MOVER O BISPO
    printf("E para diagonal direita(1) ou esquerda(2)?\n");
    scanf("%d", &escolhabispo);
    mover_bispo(movbispo, escolhabispo); //CHAMA A FUNÇÃO PARA MOVER O BISPO



    //SOLICITA O NÚMERO DE CASAS QUE O USUÁRIO DESEJA MOVER A RAINHA
    printf("\nDigite quantas casas você deseja que a rainha se mova para a esquerda: \n");
    scanf("%d", &movrainha);
    mover_rainha(movrainha); //CHAMA A FUNÇÃO PARA MOVER A RAINHA



    //SOLICITA PARA QUAL LADO O USUÁRIO QUER MOVER O CAVALO
    printf("\nO cavalo se move em L, você quer que ele vá para esquerda(1) ou direita(2)?\n");
    scanf("%d", &escolha);
    mover_cavalo(escolha); //CHAMA A FUNÇÃO PARA MOVER O CAVALO
      
    
    return 0;
}
