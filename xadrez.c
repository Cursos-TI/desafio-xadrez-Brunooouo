#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Mover para Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int i) {
    for (int i = 1; i <= 5; i++) {  
            printf("Cima, Direita\n");
        }
    }


void moverRainha(int casas) {
    if (casas > 0) {
        printf("Mover para Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverCavalo() {
    // Duas vezes pra cima
    for (int i = 1; i <= 2; i++) {
        printf("Cima\n");
    }

    // Uma vez pra direita
    printf("Direita\n");
}

    

int main() {
    int opcao;

    printf("Digite qual peça quer movimentar: \n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("Escolha uma das opções: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            moverTorre(5);
            break;
        case 2:
            moverBispo(5);
            break;
        case 3:
            moverRainha(8);
            break;
        case 4:
            moverCavalo();
            break;
        default:
            printf("Você selecionou uma opção inválida. Tente novamente!\n");
            break;
    }

    return 0;
}