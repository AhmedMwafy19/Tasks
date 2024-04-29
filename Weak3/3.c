#include <stdio.h>
#include <stdlib.h>
#include "admin.h"
#include "user.h"

struct information *id_check(int num){
  struct information *p;
	p=head;
	while (p!= NULL)
	{
		if (p->id==num)
		{
			return p;
		}
		p=p->np;
	}
	return NULL;}
int main()
{   int a=0;
    printf("Enter 1 for Admin mode and 0 for User mode\n");
    scanf("%d",&a);
    if(a==1)
        admin();
    else if(a==0)
       user();
   else printf("Invalid Input\n");
   main();
return 0;
}

