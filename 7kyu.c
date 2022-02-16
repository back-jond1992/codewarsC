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