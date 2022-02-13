#include "sort.h"
/**
 * merge_sort - Divide and conquer algorithm(bottom-up)
 * @array: Pointing to array to sort
 * @size: Length of the array
 *
 * Return: Nothing
 */
void merge_sort(int *array, size_t size)
{
	size_t lleft = 0, lright = 0, i = 0;
	int *half1 = NULL, *half2 = NULL;

	if (size <= 1)
		return;

	lleft = size / 2;
	lright = (size % 2) ? (size + 1) / 2 : size / 2;

	half1 = memory(lleft);
	for (i = 0; i < lleft; i++)
		*(half1 + i) = *(array + i);
	half2 = memory(lright);
	for (i = 0; i < lright; i++)
		*(half2 + i) = *(array + i + lleft);

	merge_sort(half1, lleft);
	merge_sort(half2, lright);

	merge(half1, half2, array);
}
/**
 * merge - I will sort the elements of halves
 * and join them in the array
 * @half1: Left half to sort
 * @half2: Right half to sort
 * @arr: Array in which the halves will be joined
 *
 * Return: Nothing
 */
void merge(int *half1, int *half2, int *arr)
{
	int i1 = 0, i2 = 0, i3 = 0;
	int len1 = 0, len2 = 0;
	int value1 = 0, value2 = 0;

	len1 = len(half1);
	len2 = len(half2);
	while (i1 < len1 && i2 < len2)
	{
		value1 = half1[i1];
		value2 = half2[i2];
		if (value1 < value2)
		{
			arr[i3] = value1;
			i3++;
			i1++;
		}
		else
		{
			arr[i3] = value2;
			i3++;
			i2++;
		}
	}
	while (i1 < len1)
	{
		arr[i3] = half1[i1];
		i3++;
		i1++;
	}
	while (i2 < len2)
	{
		arr[i3] = half2[i2];
		i3++;
		i2++;
	}
	show(arr, half1, half2, len1, len2);
}
/**
 * show - Print with format
 * @arr: Array
 * @half1: Left half
 * @half2: Right half
 * @len1: Length of the half1
 * @len2: Length of the half2
 */
void show(int *arr, int *half1, int *half2, int len1, int len2)
{
	printf("Mergin...\n");
	printf("[left]: ");
	print_array(half1, len1);
	printf("[right]: ");
	print_array(half2, len2);
	printf("[Done]: ");
	print_array(arr, len1 + len2);
}
/**
 * len - Function that calculate the length of an array
 * @list: structure(array)
 *
 * Return: length of the array
 */
size_t len(int *list)
{
	size_t i = 0;

	while (*(list + i))
		i++;

	return (i);
}
/**
 * memory - Reservation memory
 * @size: Space in memory
 *
 * Return: Nothing
 */
int *memory(size_t size)
{
	return (malloc(sizeof(int) * size));
}
