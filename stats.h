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
 * @file <stats.h> 
 * @brief <This doc contains declarations and documentation for the functions from the stats.c file. >
 *
 * <Add Extended Description Here>
 *
 * @author <Cooper Tedstrom>
 * @date <02/01/2026>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
int print_statistics(int array[], int size);
int print_array(int array[], int size);
int find_median(int array[], int size);
int find_mean(int array[], int size);
int find_maximum(int array[], int size );
int find_minimum(int array[], int size);
int sort_array(int array[], int size);
/* Add Your Declarations and Function Comments here */ 
int print_statistics(int array[], int size)//Prints the statistics of an array including minimum, maximum, mean, and median
{
    printf("Statistics:\n");
    printf("Minimum: %d\n", find_minimum(array, size));
    printf("Maximum: %d\n", find_maximum(array, size));
    printf("Mean: %d\n", find_mean(array, size));
    printf("Median: %d\n", find_median(array, size));
    return 0;
}
int print_array(int array[], int size)//Prints the array to the screen given an array and it's length
{
    printf("Array: \n");
    for(int i = 0; i < size; i++)
    {
        printf("%d is the %dth element of the array\n", array[i], i+1);
    }
    printf("\n");
    return 0;
}
int find_median(int array[], int size)//Finds the median value of an array given an array and it's length
{
    printf("Finding Median...\n");
    array = sort_array(array, size);
    int median = 0;
    if (size % 2 == 0) //if the size is even
    {
        median = (array[(size/2) - 1] + array[size/2]) / 2;//average the two middle values
        return median;
    }
    else //if the size is odd
    {
        median = array[size/2];
        return median;
    }
}
int find_mean(int array[], int size)//Finds the mean value of an array given an array and it's length
{
    printf("Finding Mean...\n");
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum/size;
}
int find_maximum(int array[], int size )//Finds the maximum value of an array given an array and it's length
{
    printf("Finding Maximum...\n");
    int max = array[0];
    for(int i = 1; i < size; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}
int find_minimum(int array[], int size)//Finds the minimum value of an array given an array and it's length
{
    printf("Finding Minimum...\n");
    int min = array[0];
    for(int i = 1; i < size; i++)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}
int sort_array(int array[], int size)//Given an array and it's length, sorts the array from largest to smallest value
{
    printf("Sorting Array...\n");
    int temp = 0;
    for(int i = 0; i < size-1; i++)
    {
        for(int j = 0; j < size-i-1; j++)
        {
            if(array[j] < array[j+1]) //swap if the current value is less than the next value
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    return array;
}


#endif /* __STATS_H__ */
