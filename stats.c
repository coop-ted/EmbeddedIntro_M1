/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Cooper Tedstrom's module 1 assignment >
 *
 * <Add Extended Description Here>
 *
 * @author <Cooper Tedstrom>
 * @date <02/01/2026>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE 40

int main(void) {

  int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                    114, 88,   45,  76, 123,  87,  25,  23,
                    200, 122, 150, 90,   92,  87, 177, 244,
                    201,   6,  12,  60,   8,   2,   5,  67,
                      7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */

  //print the original array
  printf("%d is the first element of the test array.\n", test[0]);

  printf("Original Array:\n");

  print_array(test, SIZE);

  //sort the array, create a new array to hold the sorted values
  sort_array(test, SIZE);
  
  //print the sorted array
  printf("Sorted Array:\n");
  print_array(test, SIZE);

  //print statistics
  printf("Array Statistics:\n");
  print_statistics(test, SIZE);

  return 0;
}

/* Add other Implementation File Code Here */
