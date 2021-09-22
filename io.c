#include <stdio.h>
int main()
{
    int testInteger;
    float num1;
    printf("Enter an integer: ");
    scanf("%d", &testInteger);  
  
  
    printf("\nEnter a Floating-point Number: ");
    scanf("%f", &num1);

    printf("testInteger = %d\n", testInteger);
    printf("num1 = %f", num1);
    return 0;
}
