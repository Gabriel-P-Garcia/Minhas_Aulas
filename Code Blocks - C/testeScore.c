#include <stdio.h>
#include <locale.h>

int main(){
//Score m�ximo (variavel)
    const int MAXSCORE = 500; //const vai fazer esse score imut�vel

//O score do usu�rio
    int userScore = 423;

/*Bora calcular o percentual do score do usu�rio em rela��o ao score
m�ximo, lembrando de usar o (float) depois do igual pra divis�o ficar certa*/
    float percentage = (float) userScore / MAXSCORE * 100.0;

//Agora o print
    printf("O percentual do usu�rio �: %.2f", percentage, setlocale(LC_ALL, "Portuguese"));

return 0;


}
