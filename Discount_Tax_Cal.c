#include <stdio.h>
#include <windows.h>

int main()
{
    float orig_pr, disc_pr, disc_amt, disc_val, tax, vat, total_pay;

    system("color 1F");
    printf("==== Discount Calculator ==== \n\n");
    printf("Input Original Price: ");
    scanf("%f", &orig_pr);
    printf("Discount Percentage: ");
    scanf("%f", &disc_val);

    disc_amt = orig_pr * (disc_val/100);
    disc_pr = orig_pr - disc_amt;

    printf("===================");

    printf("\nOriginal Price: %.2f", orig_pr);
    printf("\nDiscounted Amount: %.2f", disc_amt);
    printf("\nDiscount Price: %.2f", disc_pr);

    printf("\n\n===================");

    vat = disc_pr * 0.12;
    tax = disc_pr - vat;
    total_pay = vat + tax;

    printf("\nTaxable Amount: %.2f", tax);
    printf("\nVAT: %.2f", vat);
    printf("\nDiscount Price: %.2f\n\n", total_pay);


    system("pause");

    return 0;


}
