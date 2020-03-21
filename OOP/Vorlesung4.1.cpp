#include <iostream>
#include <stdio.h>
template <typename T>

T array(T arr[20], int start, int end, T begin=0)
{
	T s = begin;
	for (int i = start; i <= end; i++)
		s += arr[i];
	return s;
}

int main(void)
{
	int arr[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 , 13, 14, 15, 16, 17, 18, 19 };
	printf("%d ", array(arr, 1, 9, 33));
	return 0;
}