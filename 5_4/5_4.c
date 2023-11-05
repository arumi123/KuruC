#include<stdio.h>

int main(void){

	int value1;
	double value2;

	value1 = 3;
	value2 = 3.1415;

	printf("%5d\n",value1);
	printf("%05d\n",value1);

	printf("%f\n",value2);
	printf("%6.2f\n",value2);
	printf("123456\n");

	return 0;

}

