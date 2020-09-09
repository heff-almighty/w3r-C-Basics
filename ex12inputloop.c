#include <stdio.h>
#include <cs50.h>


int main(void)

{
	char id = get_char("Input 10 digit ID number: \n");

		if(id <= 9 || id >= 11)
		{
			printf("Incorret input. Please use a 10 digit sequence. \n");
		}

    float hours= get_int("Input total number of hours worked: \n");

    float salary = get_int("Input your hourly rate as per your contract: \n");

    float wages = (hours*salary);

    printf("Employee No: %d\n", id);

    printf("This month you earned %.2f\n", wages);
}
