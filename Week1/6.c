#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,sum=0;
    printf("Enter a Number\n");
    scanf("%d",&a);

    for(i=0;i<=a;i++)
        sum=sum+i;
    printf("The summation of natural numbers of %d is %d",a,sum);

    return 0;
}
