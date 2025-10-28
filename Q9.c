#include <stdio.h>
#include <math.h>

int main() 
{
    double principal, rate, time, simpleInterest, compoundInterest;

    printf("Enter Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter Time (in years): ");
    scanf("%lf", &time);

    simpleInterest = (principal * rate * time) / 100.0;

    compoundInterest = principal * pow((1.0 + rate / 100.0), time) - principal;

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}