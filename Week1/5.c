#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter 3 Number\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c)
        printf("The largest is %d",a);
    else if(b>=c&&b>=a)
        printf("The largest is %d",b);
    else
        printf("The largest is %d",c);

    return 0;
}
