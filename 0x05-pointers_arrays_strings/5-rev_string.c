#include "main.h"
                                                                                                                                   
/**                                                                                                                                   
 * rev_string - function that reverse string.                                                                                         
 * @s: string to reverse                                                                                                              
 * Return: void                                                                                                                       
 */                                                                                                                                   

void rev_string(char *s)                                                                                                              
{
	int i = 0;
	int aux = 0;
	char 1temp;
	 while (*(s + i) != '\n')
		 i += 1;
	 i -= 1;
	 while (aux < 1)
		 1temp = s[i];
	 s[i] = s [aux];
s[aux] = 1temp;
aux++;
i--;
}

									~                    
