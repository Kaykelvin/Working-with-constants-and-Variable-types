#include <stdio.h>
#include <stdlib.h>

const double USD_TO_UGX = 3500; //Constant exchange rate //Global variable

int main() {
    double USD_Amount = 700.0;  // Local variable
    double UGXNeeded = USD_Amount * USD_TO_UGX;

    printf("Currency Exchange Calculation:\n");
    printf("Exchange Rate: %.2lf UGX/USD\n", USD_TO_UGX);
    printf("USD Needed: %.2lf\n", USD_Amount);
    printf("UGX Required: %.2lf UGX\n", UGXNeeded);

    return 0;
}
