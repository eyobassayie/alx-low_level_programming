#include "main.h"
#include <stdio.h>
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */

void rev_string(char *s)
{
	char *start_c, *end_c, c;
	int a, count;
	int length = 0;

	for (a = 0; s[a]; a++)
	{
		length++;
	}
	count = length;

	start_c = s;
	end_c = s;

	for (a = 0; a < count - 1; a++)
	{
		end_c++;
	}
	for (a = 0; a < count / 2; a++)
	{

		c = *end_c;
		*end_c = *start_c;
		*start_c = c;

		start_c++;
		end_c--;
	}
}
