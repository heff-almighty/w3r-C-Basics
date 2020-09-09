#include <stdio.h>
#include <cs50.h>


int main(void)

{
    int num_chars=10;
    int id=1;
    while (id <= num_chars)
		{
			printf("Enter 10 digit employee ID number: \n");
			scanf("%d", &id);
		}

    int hours = get_int("Input total number of hours worked: \n");

    int salary = get_int("Input your hourly rate as per your contract: \n");

    float wages = (hours*salary);

    printf("Employee No: %d\n", id);

    printf("This month you earned %.2f\n", wages);
}
