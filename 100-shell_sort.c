#include "sort.h"
/**
 * shell_sort - Sorts elements that are fat apart from each
 * @array: Structure to sort
 * @size: Length of the array
 *
 * Return: Nothing
 */

void shell_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, n = 1, tmp = 0;

	if (!array || size < 2)
		return;

	while (n < size / 3)
		n = (n * 3) + 1;

	while (n >= 1)
	{
		while (i < n)
		{
			j = i;
			while (j < size && j + n < size)
			{
				if (array[j] > array[j + n])
				{
					tmp = array[j];
					array[j] = array[j + n];
					array[j + n] = tmp;
					sort_reverse(array, (int)j, (int)n);
				}
				j += n;
			}
			i++;
		}
		print_array(array, size);
		i = 0;
		n = (n - 1) / 3;
	}

}
/**
 * sort_reverse - Sort an element in the array
 * @array: structure to sort
 * @j: index of the element to sort
 * @n: Value of the gap between the elements of the array
 *
 * Return: Nothing
 */
void sort_reverse(int *array, int j, int n)
{
	int tmp = 0;

	while ((j - n) > 0)
	{
		if (array[j - n] > array[j])
		{

			tmp = array[j];
			array[j] = array[j - n];
			array[j - n] = tmp;
		}
		j -= n;
	}
}
