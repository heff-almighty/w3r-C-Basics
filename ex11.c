#include <stdio.h>
#include <cs50.h>


int main(void)

{
    float w1 = get_int("Input weight of item one: \n");
    float i1= get_int("Total number of items: \n");

    float w2 = get_int("Input weight of item two: \n");
    float i2= get_int("Total number of items: \n");

    int items = i1+i2;
    float wi1 = w1*i1;
    float wi2 = w2*i2;
    float average = (wi1+wi2)/items;

    printf("%.1f is the average value of each item\n", average);
}
