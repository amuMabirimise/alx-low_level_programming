#include <string.h>
#include <ctype.h>
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 * Return: A pointer to the changed string.
 */
#include <ctype.h>
#include <string.h>

char *cap_string(char *str)
{
	int len = strlen(str);
	int i;

	if (len > 0 && islower(str[0]))
	{
	str[0] = toupper(str[0]);
	}

	for (i = 1; i < len; i++)
	{
	if (isspace(str[i - 1]) || str[i - 1] == ',' ||
	str[i - 1] == ';' || str[i - 1] == '.' ||
	str[i - 1] == '!' || str[i - 1] == '?' ||
	str[i - 1] == '"' || str[i - 1] == '(' ||
	str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}') {
	if (islower(str[i]))
	{
	str[i] = toupper(str[i]);
	}
	}
	}

	return (str);
}
