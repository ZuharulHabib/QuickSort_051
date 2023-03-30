#include <iostream>
using namespace std;


int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang element array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
	}

	cout << "\n..................." << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n..................." << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
//Swaps the element at index x with the element at index y
void swap(int x, int y)
{
	int temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high)
		return;

	//Partition the list into two parts:
	//one containing elements less that or equal to pivot
	//Outher conntainning ellements greather that pivot

	pivot = arr[low];

	i = low + 1;
	j = high;


	while (i <= j)
	{
		//search for an element greather than pivot
		while ((arr[i] <= pivot) && (i <= high))
		{
			i++;
			cmp_count++;
		}
		cmp_count++;
		//search for an element less than or equal to pivot
		while ((arr[j] > pivot) && (j >= low))
		{
			j--;
			cmp_count++;
		}
		cmp_count++;


		if (i < j) // if the grather element is on the left of the element
		{
			//swap the element at index i whit the element at index j
			swap(i, j);
			mov_count++;
		}
	}
	//j now containt the index of the last element in the sorted
	if (low, j);
	{
		///move the pivot to its correct posisition in the list
		swap(low, j);
		mov_count++;
	}
	//sort the list on the left of privot using quick soert
	q_short(low, j - 1);

	//sort the on right of pivot using quick short
	q_short(j + 1, high);


}