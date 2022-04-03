#include <stdio.h>
int checkout(int totalProfit, int totalCost){
    return totalProfit - totalCost;
};



int main(){
    int ingresos, gastos, result;
    printf("Ingresos:");
    scanf("%d",&ingresos);
    printf("Gastos: ");
    scanf("%d",&gastos);
    result = checkout(ingresos,gastos);
    printf("Metrics = %d\n", result);
    return 0;
}
