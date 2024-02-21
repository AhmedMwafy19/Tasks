#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,fact=1;
    printf("Enter a number \n");
    scanf("%d",&n);
    if(n%2==0)
        printf("Number is even\n");
    else
        printf("Number is odd\n");

    for(i=1;i<=n;i++)
        fact=fact*i;
    printf("Factorial of %d is %d",n,fact);
    return 0;
}
