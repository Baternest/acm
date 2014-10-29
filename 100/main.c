#include <stdio.h>

long triple_and_one_cycle(long input)
{
	long cycle = 1;

	while (input != 1)
	{
		if (input % 2 == 0)
			input = input / 2;
		else
			input = input * 3 + 1;
			
		cycle += 1;
	}
	
	return cycle;
}

int main(int argc, char** argv)
{
	long number1, number2;
	long result, max_cycle;
	long start, end;

	while (scanf("%ld %ld", &number1, &number2) == 2)
	{	
		max_cycle = 0;
		
		if (number1 > number2)
		{
			start = number2;
			end = number1;	
		}
		else
		{
			start = number1;
			end = number2;	
		}	
	
		long i = 0;	
		for (i = start; i <= end; i++)
		{  
		 	result = triple_and_one_cycle(i);
		 	if (result > max_cycle)
		 		max_cycle = result;
	 	}
	 		
	 	printf("%ld %ld %ld\n", number1, number2, max_cycle);
	}
	 	
 	return 0;
}
