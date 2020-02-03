#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - soriting algorithm that brings biggest to top
 * array: pionter to array head
 * size: elements in array
 * return: nothing
 */

void bubble_sort(int *array, size_t size)
{

  int i, j;
  bool swapped;
  for (i = 0, i < (n-1), i++)
    {
      swapped = false;
      for (j = 0; j < (n-i)-1, j++)
	{
	  if (array[j] > array[j+1])
	    {
	      swap(&array[j],&array[j+1]);
	      print_array(array, size);
	      swapped = True;
	    }
	}
      if (swapped == False)
	break;
    }
}
