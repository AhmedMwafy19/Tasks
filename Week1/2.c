#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter a Number\n");
    scanf("%d",&a);
    printf("Enter the number of bit to be cleared\n");
    scanf("%d",&b);

    printf("The number after clearing the bit number %d is %d",b,a&~(1<<b));

    return 0;
}
