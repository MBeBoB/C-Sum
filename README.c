# C-Sum
Simple Start
#include <stdio.h>
int main (void) {
	int num1, num2, num3;
	double avg;
	printf ("Enter first number: ");
	scanf ("%i", &num1);
	printf ("Enter second number: ");
	scanf ("%i", &num2);
	printf ("Enter third number: ");
	scanf ("%i", &num3);
	avg = (double) (num1 + num2 +num3)/3 ;
	printf ("Average = %.2f", avg);
	return 0;    
}
