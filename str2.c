#include <stdio.h>
#include <string.h>
struct Student {
	int sap;
	char name[50];   //blueprint
	float marks ;
};
int main()
{
  struct Student student1;
  student1.sap=100234;
  strcpy(student1.name, "Sam");
  student1.marks=93;

  printf("SAP id :%d\n",student1.sap);
  printf("Name :%s\n",student1.name);
  printf("marks :%.2f\n",student1.marks);
}