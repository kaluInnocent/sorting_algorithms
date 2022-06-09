#include "sort.h"

/**
* bubble_sort - function implements bubble sort
* @array: The array of integers to be sorted
* @size: The length of the array
* Return: Nothing
*/
void bubble_sort(int *array, size_t size)
{
	int flag = 0;
	size_t n = size, i;
	int temp;

	if (array == NULL || size < 2)
		return;

	while (flag == 0)
	{
		flag = 1;
		for (i = 0; i < n - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				flag = 0;
			}
		}
		n--;
	}
}
