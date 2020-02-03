#include "sort.h"

/**
 * swap - swaps to nodes
 * node1: first node
 * node2: second node
 * return: nothing
 */

void swap(int *node1, int *node2)
{
  int temp;

  
  temp = *node1;
  *node1 = *node2;
  *node2 = temp;
}
