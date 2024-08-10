#include "search_algos.h"

/**
 * print_array - prints integer array
 * @array: pointer to array of integers
 * @left: beginning index to be printed
 * @right: final index to be printed
 *
 * Return: void
 */

void print_array(int *array, size_t left, size_t right)
{
       size_t i;

       printf("Searching in array: ");
       for (i = left; i <= right; i++)
       {
              if (i != left)
              {
                     printf(", ");
              }
              printf("%d", array[i]);
       }
       printf("\n");
}
