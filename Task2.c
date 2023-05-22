/*************************************************************************************
Напишите на C программу, преобразующую входную строку из формата camelCase в snake_case.
***************************************************************************************/
#include <stdio.h>
#include <ctype.h>
#include <inttypes.h>

#define MAX_LEN_STR 10000
 
char *camelCase_to_snake_case(const char *camelCase, char *snake_case)
{
	snake_case[0] = '\0';
	int pointer_camelCase = 0;
	int pointer_snake_case = 0;
	//char previous_ch = camelCase[pointer_camelCase];
	char current_ch = camelCase[pointer_camelCase];
	while (current_ch != '\0')
	{
		if(isupper(current_ch))
		{
			snake_case[pointer_snake_case++] =  '_';
			snake_case[pointer_snake_case++] =  tolower(current_ch);
		}
		else
		{
			snake_case[pointer_snake_case++] =  current_ch;
		}

		current_ch = camelCase[++pointer_camelCase];
	}
	
	snake_case[pointer_snake_case] = '\0';

	return snake_case;
}


int main(void)
{
	char input_str[MAX_LEN_STR] = "\0";
	char output_str[MAX_LEN_STR*2] = "\0";

	scanf("%s", input_str);
	//printf("%s\n", input_str);

	printf("%s\n", camelCase_to_snake_case(input_str, output_str));

	return 0;
}




