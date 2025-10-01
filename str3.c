#include <stdio.h>
#include <string.h>
struct Student {
	int sap;
	char name[50];   //blueprint
	float marks ;
};
int main()
{
  struct Student student1,student2,student3;
  student1.sap=100234;
  strcpy(student1.name, "Sam");
  student1.marks=93;

  student2.sap=100222;
  strcpy(student2.name, "Samy");
  student2.marks=62;

  student3.sap=100001;
  strcpy(student3.name, "Sameer");
  student3.marks=78;
 printf("Name :%s\n",student1.name);
 printf("Name :%s\n",student2.name);
 printf("Name :%s\n",student3.name); }