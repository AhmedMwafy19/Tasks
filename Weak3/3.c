#include <stdio.h>
#include <stdlib.h>

#define password 1234
#define n 5
 struct information{
char *name;
int age;
char *gender;
int date;
int id;
struct information *np;
};
struct information *head={NULL};
struct information *tail={NULL};
struct information *arr[5]={NULL};//for reservation
void admin(void);
void user();
void add();
void edit();
void reserve();
void cancel();
void view_r();
void view_p();
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
return 0;
}
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
void admin(void){int s,a=0;
printf("Enter the password\n");
scanf("%d",&s);
if(s!=password){
        printf("Wrong !");
        exit(1);}
printf("Enter 1 to add a new record and 2 to edit patient record and 3 to reserve a slot with the doctor and 4 to cancel reservation\n");
scanf("%d",&a);
switch (a){
case 1:
 add();
    break;
case 2:
edit();
  break;
case 3:
reserve();
  break;
case 4:
cancel();
  break;
default:
    printf("Invalid Input");
}}
void add(){ struct information *p;
int num=0;
p=(struct information*)malloc(sizeof(struct information));
if(p==NULL){
    printf("Memory Not Avaialble");
    exit(1);
}
else{

    printf("Enter id\n");
    scanf("%d",&num);
    if(id_check(num)==NULL)
    {    p->id=num;
        printf("Patient ID is %d\n",p->id);
scanf("Patients Age is %d",&(p->age));
        scanf("Patients Name is %s\n",p->name);

        scanf("Patients Age is %s",p->gender);
       if(head==NULL)
			{
				head = p;
				tail = p;
				p->np=NULL;
			}
			else
			{
				tail->np=p;
				tail=p;
				tail->np=NULL;
			}
    }
    else{printf("ID already exists");
    exit(1);}
}


}

void edit(){
  int num=0;
  struct information *p;
    printf("Enter id\n");
    scanf("%d",&num);
     p=id_check(num);
    if(p!=NULL){
   scanf("The new name is %s",p->name);
   scanf("The new age is %d",&(p->age));
   scanf("The edited gender is %s",p->gender);
    }
    else
    printf("Invalid ID");
}
void reserve(){
    int num=0,time=0,i;
  struct information *ptr;
     printf("Enter id\n");
    scanf("%d",&num);
     ptr=id_check(num);
    if(ptr!=NULL){
		printf("The First Date from 2PM T0 2:30PM To Choice Enter  1 \n");
		printf("The Second Date From 2:30PM To 3PM To Choice Enter 2 \n");
		printf("The Third Date From 3PM To 3:30PM To Choice Enter  3 \n");
		printf("The Fourth Date From 3:30PM To 4PM To Choice Enter 4 \n");
		printf("The Fifth Date From 4PM To 4:30PM To Choice Enter  5 \n");
		scanf("%d",&time);
		if(time==1){
            if(arr[0]==NULL){
                  ptr->date=time;
                arr[0]=ptr;
            }
		else printf("Already reserved");
		}
		else if(time==2){
            if(arr[1]==NULL){
                    ptr->date=time;
                arr[1]=ptr;
            }
		else printf("Already reserved");
		}

		else if(time==3){
            if(arr[2]==NULL){
                    ptr->date=time;
                arr[2]=ptr;
            }
		else printf("Already reserved");
		}
		else if(time==4){
            if(arr[3]==NULL){
                    ptr->date=time;
                arr[3]=ptr;
            }
		else printf("Already reserved");
		}
       else if(time==5){
            if(arr[4]==NULL){
                    ptr->date=time;
                arr[4]=ptr;
            }
		else printf("Already reserved");
       }
		else{
		    printf("NOT Valid");}

} else printf("\ninvalid id");
for(i=0;i<5;i++){
             if (arr[i]!=NULL)
                printf("The paitent Reservation Number : %d is resreved\n",arr[i]->date);
}
}
void cancel(){
    int num=0,m=0,a=0,i=0;
      struct information *ptr;
     printf("Enter id\n");
    scanf("%d",&num);
     ptr=id_check(num);
      if(ptr!=NULL){
        printf("The First Date from 2PM T0 2:30PM number is 1 \n"
                 "The Second Date From 2:30PM To 3PM number is 2 \n"
                 "The Third Date From 3PM To 3:30PM number is 3\n"
                 "The Fourth Date From 3:30PM To 4PM number is 4 \n"
                 "The Fifth Date From 4PM To 4:30PM number is 5 \n"
                 "Pick the number of your reservation that you want to cancel\n");
      scanf("%d",&a);
        for(i=0;i<5;i++){
            if(ptr->date!=NULL){
                arr[i]=NULL;
                m++;
            }
        }

        if(m==0) printf("\nThis time wasn't reserved");
        else printf("\nIt has been canceled successfully");

      }
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
