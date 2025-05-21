#include <stdio.h>
#include <stdlib.h>

const double Discount_Percentage = 0.10; //Fixed percentage price //Global variable

int main() {

    double originalPrice = 50000;  // Local variable
    double discountedPrice = (Discount_Percentage * originalPrice);

    printf("Discounted Price Calculation:\n");
    printf("Original Price: %.2lf UGX\n", originalPrice);
    printf("Discount: %.2lf%%\n", Discount_Percentage * 100);
    printf("Discounted Price: %.2lf UGX\n", discountedPrice);

    return 0;
}

