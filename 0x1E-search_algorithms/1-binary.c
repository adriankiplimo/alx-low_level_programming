#include "search_algos.h"


/**
* binary_search - searches for a value in a sorted
* array of integers using the Binary search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
*
* Return: index where found or -1
*/
int binary_search(int *array, size_t size, int value)
{
int left, right, mid;

if (array == NULL)
return (-1);
left = 0;
right = size - 1;
while (left <= right)
{
print_array(array, left, right);
mid = (left + right) / 2;
if (array[mid] > value)
right = mid - 1;
else if (array[mid] < value)
left = mid + 1;
else
return (mid);
}
return (-1);
}


/**
 * print_array - print array
 * @array: array
 * @left: starting print
 * @right: ending print
 */

void print_array(int *array, int left, int right)
{
int i;

printf("Searching in array: ");
for (i = left; i < right; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);
}
