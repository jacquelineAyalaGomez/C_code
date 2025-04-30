#include <stdio.h>
/*
Tax Rate:   Income Bracket:
12%         $0       - $9,275
17%         $9,275   - $37,650
27%         $37,650  - $91,150
30%         $91,150  - $190,150
35%         $190,150 - up
*/
float tax(int income){
    float tax_due;
    if((income >= 0) && (income < 9275)){
        tax_due = income * 0.12;
        return tax_due;
    }else if((income >= 9275) && (income < 37650)){
        tax_due = income * 0.17;
        return tax_due;
    }else if((income >= 37650) && (income < 91150)){
        tax_due = income * 0.27;
        return tax_due;
    }else if((income >= 91150) && (income < 190150)){
        tax_due = income * 0.30;
        return tax_due;
    }else{
        tax_due = income * 0.35;
        return tax_due;
    }
}

/*
Dependent(s):   Credit:
1               $450
2               $900
3               $1,350
4               $1,800
5               $2,250
*/
int credit(int dependent){
    if(dependent == 0){
        return 0;
    }else if(dependent == 1){
        return 450;
    }else if(dependent == 2){
        return 900;
    }else if(dependent == 3){
        return 1350;
    }else if(dependent == 4){
        return 1800;
    }else if(dependent == 5){
        return 2250;
    }else{
        return 2250;
    }
}

int main(){

    int income;
    printf("Enter income: ");
    scanf("%d", &income);

    float tax_due = tax(income);
    printf("Tax due: %.2f", tax_due);

    int dependent; 
    printf("\nEnter the number of dependents (0 for none): ");
    scanf("%d", &dependent);
    
    int credit_dep = credit(dependent);
    printf("Tax credit: %d", credit_dep);

    float total = tax_due - credit_dep;
    printf("\nAdjusted Tax: %.2f", total);

    return 0;
}
