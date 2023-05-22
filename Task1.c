/*************************************************************************************
Напишите на C программу, возвращающую результат логической операции "AND" всех чисел ,
 входящих в диапазон [a,b].(т.е.  result = a AND (a+1) AND ... AND (b-1) AND b) 
0 <= a <= b <= 231 - 1
***************************************************************************************/


#include <stdio.h>
#include <inttypes.h>

uint32_t and_sequences(uint32_t a, uint32_t b)
{
	uint32_t result = a;
    
    // if (a ==  2147483647u)
	// {
	// 	return 0;
	// }

	uint32_t i = ++a;
	for(; i <= b; i++)
	{
		result = result & i;
	}
		
	return result;
}

int main(void)
{
	uint32_t a, b;
	
	scanf("%"SCNu32, &a);
	//printf("a = %li\n", a);
	scanf("%"SCNu32, &b);
	//printf("b = %li\n", b);

	printf("%"PRIu32"\n", and_sequences(a, b));
	
	return 0;
}