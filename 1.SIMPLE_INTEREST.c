#include <stdio.h>
#include <stdlib.h>

double principal = 20000;  // Global variable
double time = 3;            // Global variable
const double Interest_Rate = 0.15;  // Global variable

int main() {
    double SimpleInterest = principal * time * Interest_Rate; //Local variable

    printf("Simple Interest Calculation:\n");
    printf("Principal: %.2lf UGX\n", principal);
    printf("Time: %.2lf years\n", time);
    printf("Interest Rate: %.2lf%%\n", Interest_Rate * 100);
    printf("Simple Interest: %.2lf UGX\n", SimpleInterest);

    return 0;
}
