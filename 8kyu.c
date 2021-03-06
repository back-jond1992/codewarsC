// Even or Odd?

const char * even_or_odd(int number) {
  
  return number % 2 == 0 ? "Even" : "Odd";
      
}

// Multiply

int multiply(int a, int b) {
  return a * b;
}

//Sum of Positive

int positive_sum(const int *values, size_t count) {
  
  int result = 0;
     
  for(int i = 0; i < count; i++) {
    if(values[i] > 0) {
       result += values[i];
    }
  }
  
   return result;
}

// Return negative

int makeNegative(int num)
{
  return num <= 0 ? num : 0 - num;
}

// Opposite num

float opposite(float num) {
  return -num;
}

// Remove First and Last

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* remove_char(char* dst, const char* src)
{
  
    int length = strlen(src);

    char result[length];
      
    int counter = 0;  
      
    for(int i = 1; i < length - 1; i++) {
      result[counter] = src[i];
      counter++;
    }
  
    strcpy(dst, result);
  
    dst[length -2 ] = '\0';
  
    return dst;
}

// Reversed String 

#include <string.h>
#include <stdio.h>

char *strrev (char *string)
{
  int length = strlen(string);
  
  char reversed[length];
  
  int counter = 0;
  
  for (int i = length - 1; i >= 0; i--) {
    reversed[counter] = string[i];
    counter ++;
  }
  
  strcpy(string, reversed);
  
  string[length] = '\0';
  
  return string;
}

// Convert boolean values to strings 'Yes' or 'No'

#include <stdio.h>

const char *bool_to_word (int value) {
  
  return value == 0 ? "No" : "Yes";
  
}