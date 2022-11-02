#include<stdio.h>
#include<String.h>
#pragma pack(1)

struct Demo
{
	int iValue;
	float fValue;
	char cName[20];
	double dValue;
};

int main(){
	
	struct Demo obj1;
	
	obj1.iValue = 11;
	obj1.fValue = 10.4;
  strcpy(obj1.cName,"Pankaj");
  obj1.dValue = 25.25;
	
	printf("%d",sizeof(obj1));
	
	return 0;
}
