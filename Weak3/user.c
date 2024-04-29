
void user(){
int num=0,a=0;
struct information *p;
    printf("Enter id\n");
    scanf("%d",&num);
     p=id_check(num);
    if(p!=NULL){
printf("To view patient record enter 1 and to view today's reservations enter 0\n");
scanf("%d",&a);
if(a==0)
    view_r();
else if (a==1)
    view_p();
else printf("\nInvalid input");}
else printf("\ninvalid id");



}
void view_r(){ int i;
          printf("The First Date from 2PM T0 2:30PM number is 1 \n"
                 "The Second Date From 2:30PM To 3PM number is 2 \n"
                 "The Third Date From 3PM To 3:30PM number is 3\n"
                 "The Fourth Date From 3:30PM To 4PM number is 4 \n"
                 "The Fifth Date From 4PM To 4:30PM number is 5 \n");

         for(i=0;i<5;i++){
             if (arr[i]!=NULL)
                printf("The paitent Reservation Number : %d is resreved/n",arr[i]->date);
}
}
void view_p(){
    struct information *p;
	int i,num;
	printf("To Display Paitenet File Please Enter The Paitent ID : ");
	scanf("%d",&num);
	if (id_check(num)!=NULL)
	{
		p=id_check(num);
		printf("The Paitent ID Is : %d\n",p->id);
		printf("The Paitent Age Is : %d\n",p->age);
		printf("The Paitent Gender Is : %c\n",p->gender);
		printf("The Paitent Name is :  %s\n",p->name);
		printf("The Paitent Date Is : %d\n",p->date);
	}
	else
	{
		printf("Not Registered \n");
	}
}
