#include <stdio.h>
#include <locale.h>


int main(){
//Variaveis
    int largura = 4;
    int altura = 6;
    int area;

//C�lculo de area
    area = largura * altura;

//Os prints
    printf("A largura �: %d\n", largura, setlocale(LC_ALL, "Portuguese") );
    printf("A altura �; %d\n", altura);
    printf("O valor da area �: %d", area);
    return 0;

}
