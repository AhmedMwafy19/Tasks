#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
struct information{
char name[30];
int age;
char gender[7];
int date;
int id;
struct information *np;
};
struct information *head={NULL};
struct information *tail={NULL};
struct information *arr[5]={NULL};//for reservation



#endif // LIST_H_INCLUDED
