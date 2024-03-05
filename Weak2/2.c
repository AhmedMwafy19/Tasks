#include <stdio.h>
#include <stdlib.h>
#define size 20
struct member{
char name[size];
char password[size];
char Fullname[size];
char level[size];
char joiningtime[size];
char generation[size];
char teamlevel[size];
char department[size];
};
struct member arr[size]={{"1234","1111","AhmedMwafy","lv100","2024","Ronin","A1","MTE"},{"4321","2222","anyname","lv100","2024","Ronin","A1","MTE"}};
void login();
void data(int n);
void motivation();
void success(int n);
int main()
{
    login();
    return 0;
}

void login(){
    char id[size];
    char password[size];
printf("Enter Your ID\n");
scanf("%s",id);
printf("Enter Your Password\n");
scanf("%s",password);

for(int i=0;i<size;i++){

    if(strcmp(id,arr[i].name)==0&&strcmp(password,arr[i].password)==0){
        success(i);
        break;
    }
else {
    printf("Wrong Data");
    break;
}
}


}

void success(int n){
printf("Welcome In Momentum %s",arr[n].Fullname);
data(n);
}


void data(int n){
printf(" Your Data is \n %s \n %s \n %s \n %s \n %s \n",arr[n].level ,arr[n].joiningtime ,arr[n].generation ,arr[n].teamlevel ,arr[n].department);

motivation();
}
void motivation(){
printf("2nta gamed wallahi");

}
