#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)

{
	int r = get_int("Input Radius: ");
    float p = 3.14;
    int c = 2*p*r;
   	printf("Circumference of the circle = %d inches\n", c);

	int a = p*r*r;
	printf("Area of the rectangle = %d square inches\n", a);

return(0);
}
