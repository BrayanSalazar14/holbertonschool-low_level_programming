#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
  char *string;

  string = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

  if (string == NULL)
  {
    return (NULL);
  }

  strcpy(string, s1);
  
  strcat(string, s2);

  return string;
  
}
