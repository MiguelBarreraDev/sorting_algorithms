#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Macros */
#define _uu_ __attribute__((unused))

/* Structure provided */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Functions provided */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void handle(int *array, int start, int end, size_t size);
size_t partition(int *array, int start, int end, size_t size);

/* Functions Added */
void merge(int *half1, int *half2, int len1, int len2, int *arr);
int *memory(size_t size);
void show(int *arr, int *half1, int *half2, int len1, int len2);

#endif
