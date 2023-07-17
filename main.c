#include <stdio.h>

int main(void) {

  int array_values[10] = { 0, 1, 4, 9, 16 }; // Initialize array_values[0] - array_values[4]
  int i;

  // Initialize array_values[5] - array_values[9]
  for (i = 5; i < 10; i++)
    array_values[i] = i * i;

  // Print the contents of array_values[0] - array_values[9]
  for ( int i = 0; i < 10; i++ ) 
    printf ("array_values[%i] = %i\n", i, array_values[i]);
  
  return 0;
}