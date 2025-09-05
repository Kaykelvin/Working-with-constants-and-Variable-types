#include <stdio.h>
#include <stdlib.h>


const double Tax_Rate = 0.20; //Global variable

int main() {
    double price = 100000;  // Local variable
    double totalCost = price + (Tax_Rate * price);

    printf("Total Cost with Tax:\n");
    printf("Price: %.2lf UGX\n", price);
    printf("Tax Rate: %.2lf%%\n", Tax_Rate * 100);
    printf("Total Cost: %.2lf UGX\n", totalCost);

    return 0;
}
