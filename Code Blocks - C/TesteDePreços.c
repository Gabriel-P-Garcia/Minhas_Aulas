#include <stdio.h>
#include <locale.h>

int main(){
//Itens, pre�os e pre�o total no final
    int itens = 50;
        float costPerItem = 9.99;
        float totalCost = itens * costPerItem;
    char currency[] = "R$";

//Prints
    printf("N�mero de itens: %d\n", itens, setlocale(LC_ALL, "Portuguese"));
        printf("Custo por item: %s %.2f\n", currency, costPerItem);
        printf("Custo total: %s %.2f\n", currency, totalCost);
    return 0;

}
