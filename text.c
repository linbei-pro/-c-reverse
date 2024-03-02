
#include<stdio.h>

void reverse(int arr[], int lift, int right)
{
	int temp = arr[lift];
	arr[lift] = arr[right];
	arr[right] = temp;
}

int main() {

	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
	int nums = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < nums; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("=============\n");
	reverse(arr, 0, nums-1);

	for (int i = 0; i < nums; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}