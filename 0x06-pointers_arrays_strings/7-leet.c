#include "main.h"
#include <stdio.h>

/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *str)
{
	  char *ptr;
	  char leet_str[strlen(str) + 1];
	      for (ptr = str; *ptr != '\0'; ptr++)
	      {
		      leet_str[ptr - str] = *ptr;
		      if (*ptr == 'a' || *ptr == 'A')
			      leet_str[ptr - str] = '4';
		      for (int i = 0; i < 2; i++)
		      {
			      if (*ptr == 'e' || *ptr == 'E')
				      leet_str[ptr - str] = '3';
			      if (*ptr == 'o' || *ptr == 'O')
				      leet_str[ptr - str] = '0';
			      if (*ptr == 't' || *ptr == 'T')
				      leet_str[ptr - str] = '7';
			      if (*ptr == 'l' || *ptr == 'L')
				      leet_str[ptr - str] = '1';
		      }
	      }
	      leet_str[ptr - str] = '\0';
	      strcpy(str, leet_str);
	      return str;
}

