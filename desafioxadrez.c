#include <stdio.h>

int main() {

    int b=1, r=1;

    //Movimento da Torre: 5 casas para a direita
    for (int i=1; i<6; i++){
        printf("Torre a direita (x%d)\n", i);
    }

    //Movimento do Bispo: 5 casas na diagonal acima e à direita
    while (b<6)
    {
        printf("Bispo acima, a direita (x%d)\n",b);
        b++;
    }
    
    //Movimento da Rainha: 8 casas para a esquerda
    do
    {
        printf("Rainha a esquerda (x%d)\n",r);
        r++;
    } while (r<9);
    
    printf("Fim de jogo!\n");

    return 0;
}