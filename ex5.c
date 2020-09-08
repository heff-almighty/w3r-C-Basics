#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

//Ask user for input chars
//print out inputted chars in reverse

int main(void)
{
    char a = get_char("Input first charachter: ");
    char b = get_char("Input second charachter: ");
    char c = get_char("Input third charachter: ");

    printf("%c", c);
    printf("%c", b);
    printf("%c\n", a);
}
