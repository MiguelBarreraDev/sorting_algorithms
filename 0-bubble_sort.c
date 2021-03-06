#include "sort.h"
/**
 * bubble_sort - Compares adjacent elements and swaps then if
 * the are in the wrong order
 * @array: Input structure
 * @size: Length of the array(input)
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0, tmp = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0 ; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
