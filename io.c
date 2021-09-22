#include <stdio.h>
int main()
{
    int testInteger;
    float num1;
    
    printf("Enter an integer: ");
    scanf("%d", &testInteger); //inputting integer to variable testInteger 
  
  
    printf("\nEnter a Floating-point Number: ");
    scanf("%f", &num1); //inputting float to variable num1

    printf("testInteger = %d\n", testInteger);
    printf("num1 = %f", num1);
    return 0;
}
