#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n,a;
    printf("enter 2 numbers : ");
    scanf("%f%f",&n,&a);
    printf("(%.2f + %.2f)=%.2f\n",n,a,n+a);
    printf("(%.2f - %.2f)=%.2f\n",n,a,n-a);
    printf("(%.2f * %.2f)=%.2f\n",n,a,n*a);
    printf("(%.2f / %.2f)=%.2f\n",n,a,n/a);
    return 0;
}
