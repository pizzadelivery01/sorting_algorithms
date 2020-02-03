#include "sort.h"
#include <stdbool.h>
#include <stdio.h>

/**
 * bubble_sort - soriting algorithm that brings biggest to top
 * array: pionter to array head
 * size: elements in array
 * return: nothing
 */

void bubble_sort(int *array, size_t size)
{

  size_t i, j;
  bool swapped;
  for (i = 0; i < (size-1); i++)
    {
      swapped = false;
      for (j = 0; j < (size-i)-1; j++)
	{
	  if (array[j] > array[j+1])
	    {
	      swap(&array[j], &array[j+1]);
	      print_array(array, size);
	      swapped = true;
	    }
	}
      if (swapped == false)
	break;
    }
}
