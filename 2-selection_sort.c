#include "sort.h"
/**
 * selection_sort - Select the smallest elements and place them
 * in an ordered manner
 * @array: Structure to sort
 * @size: Length of the array
 *
 * Return: NULL
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, index_menor = 0;
	int tmp = 0;

	for (i = 0; i < size; i++)
	{
		index_menor = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[index_menor])
				index_menor = j;
		}

		if (index_menor != i)
		{
			tmp = array[i];
			array[i] = array[index_menor];
			array[index_menor] = tmp;
			print_array(array, size);
		}
	}
}
