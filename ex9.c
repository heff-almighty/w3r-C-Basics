#include <stdio.h>
#include <cs50.h>


int main(void)

{
    int a = get_int("Input first intiger: \n");
    int b = get_int("Input second intiger: \n");

    int sum = (a+b);
    printf("The sum of the inputs provided is %d\n", sum);
}
