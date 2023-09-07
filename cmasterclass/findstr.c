#include <stdio.h>
#include <string.h>

/**
 *main - find sentence with keywords
 *Return 0 (Success)
 */

/*Declear a global variable to be globly accessible to all functions*/

char sentence[] [100] = {
	"strstr function finds strings within a string",
	"strcmp compares to strings and returns zero if match is found",
	"strlen finds the lenght of a given string",
	"strcpy copies string from source string to destination string",
	"strchar finds characters within a string",
	"strcat concatenates to given strings",
};

/*Function declearation*/

void match_str(char *);

int main(void)
{
	char search_word[30];
	printf("Search for info on some of the string.h functions\n");
	printf("Enter keword(s): ");
	scanf("%9s", search_word);
	match_str(search_word);
	return (0);
}


/**
 *match_str - find a match of the string input in the sentence array
 *@search_word: user string input
 *
*/

void match_str(char search_word[])
{
	char *value;
	int i;
	int status = 0;

	for (i = 0; i < 6; i++)
	{
		value = strstr(sentence[i], search_word);

		if (value)
		{
			printf(">%s\n" , sentence[i]);
			  status = 1;
		}
	}
	if (!status)
		printf("There is no match for \"%s\"\n", search_word);
}
