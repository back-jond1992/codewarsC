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