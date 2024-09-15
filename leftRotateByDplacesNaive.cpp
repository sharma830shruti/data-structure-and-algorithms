void lRotateOne(int arr[], int n)
{
	int temp = arr[0];

	for(int i = 1; i < n; i++)
	{
		arr[i - 1] = arr[i];
	}

	arr[n - 1] = temp;
}

void leftRotate(int arr[], int d, int n)
{
	for(int i = 0; i < d; i++)
	{
		lRotateOne(arr, n);
	}
}
    
