#include<stdio.h>        
struct complex           
{
	double real,imag;     
};
int main()
{
	struct complex x,y,c;
	printf("enter the value of x and y for first complex number: ");
	scanf("%lf%lf",&x.real, &x.imag);
	printf("enter the value of x and y for second complex number: ");
	scanf("%lf%lf",&y.real, &y.imag);
	c.real=x.real-y.real;     
	c.imag=x.imag-y.imag;     
	printf("Subtraction of complex numbers: %.2lf%+.2lfi",c.real,c.imag);
	return 0;
}