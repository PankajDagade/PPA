#include <stdio.h>

int main(void)
{
	int no= 10;
	int *p= &no;
	int **q= &p;
	int ***r= &q;
	int ****s= &r;
	int *****x= &s;
	int ******y= &x;
	int *******z= &y;

	printf("%d \n", p);
	printf("%d \n", *p);
	printf("%d \n", *r);
	printf("%d \n", **q);
	printf("%d \n", ****z);
	printf("%d \n", *****y);
	printf("%d \n", *****x);
	//printf("%d \n", ****r);
	printf("%d \n", &(***y));
	printf("%d \n", &(**q));
	printf("%d \n", *(&(*p)));
	printf("%d \n", *(&no));

	return 0;
}