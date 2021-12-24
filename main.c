#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num1;
    printf("Enter a Decimal Number : ");
    scanf("%d", &num1);
    printf("%d Bitwise NOT is = %d", num1, ~num1+1);
    getch();
    return 0;
}
