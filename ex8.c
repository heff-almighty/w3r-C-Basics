#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int days = get_int("Input total number of days: ");

//count total days and convert to years and then move remainder to be counted as weeks
    int years = days/365;
//take the remainder and convert to weeks
    int weeks = (days%365)/7;
//take the remainder and connvert to days
    int days2 = days-((years*365)+(weeks*7));

    printf("Years %d\n", years);
    printf("Weeks %d\n", weeks);
    printf("Days %d\n", days2);
}
