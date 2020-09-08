#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)

{
	int h = get_int("Input Height: ");
    int w = get_int("Input Width: ");
    int p = 2*(h + w);
   	printf("Perimeter of the rectangle = %d inches\n", p);

	int a = (h * w);
	printf("Area of the rectangle = %d square inches\n", a);

return(0);
}
