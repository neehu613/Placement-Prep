#include<bits/stdc++.h>
using namespace std;

int findPivot(int a[], int low, int high){
	int pivot = a[high];
	int j=low;

	for(int i=low; i<high; i++){
		if(a[i]<pivot){
			swap(a[i], a[j]);
			j++;
		}
	}
	swap(a[high], a[j]);
	return j;
}

void quicksort(int a[], int low, int high){
	if(low < high){
		int p = findPivot(a, low, high);
		quicksort(a, low, p-1);
		quicksort(a, p+1, high);
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];

	quicksort(a, 0, n-1);

	for(int i=0; i<n; i++)
		cout << a[i] << " ";
	cout << endl;

	return 0;
}