// Vowel Count

#include <stddef.h>
#include <string.h>

size_t get_count(const char *s)
{
  
  int length = strlen(s);
  int counter = 0;
  
  for(int i = 0; i < length; i++) {
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
      counter ++;
    }
  }
  
  return counter;
}

// Disemvowel Trolls

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *disemvowel(const char *str)
{
  
  int length = strlen(str);

  char *result = malloc(length* sizeof(char) + 1); 
  
  int counter = 0;
  
  for(int i = 0; i < length; i++) {
    if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
      result[counter] = str[i];
      counter ++;
    } 
  }
  
  result[counter] = '\0';
  
  return result;
}