/* This is a C program written by Nadia Morrow 
for the CS 1310 V. This is the Program 6 assignment.
This program will take input from the user and translate
the english to pig latin.
Start Date: 11/09/20
Last Modified: 11/09/20
*/

#include <stdio.h>
#include <string.h>

//function to translate the word to pig latin
void translate (char pword[])
{
	int vowelIndex = 0;
	int i;
	while ((pword[vowelIndex] != 'a') && (pword[vowelIndex] != 'e') && (pword[vowelIndex] != 'i') && (pword[vowelIndex] != 'o') && (pword[vowelIndex] != 'u') && (pword[vowelIndex] != 'A') && (pword[vowelIndex] != 'E') 
	&& (pword[vowelIndex] != 'I') && (pword[vowelIndex] != 'O') && (pword[vowelIndex] != 'U') && (pword[vowelIndex] != '\0'))
	{
		vowelIndex ++;
	}
	if ((vowelIndex == 0) || (pword[vowelIndex] == '\0'))
	{
		printf("%s", pword);
		printf("way ");
	}
	else
	{
		for (i = vowelIndex; i < strlen(pword); i++)
		{
			printf("%c", pword[i]);
		}
		for (i = 0; i < vowelIndex; i++)
		{
			printf("%c", pword[i]);
		}	
		printf("ay ");
	}
}

void main(void)
{
	char sentence[81];
	char* pword;
	printf("Enter the sentence to translate to pig latin or END to terminate program: ");
	gets(sentence);
	while (strcmp(sentence, "END") != 0)
	{
		pword = strtok(sentence, " ");
		//printf("%s \n", pword);
		while (pword != NULL)
		{
			translate(pword);
			pword = strtok(NULL, " ");
		}
	
		printf("\nEnter a new sentence or END to teminate: ");
		gets(sentence);
    }
}
