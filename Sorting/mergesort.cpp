#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int low, int mid, int high){
	int temp[high-low+1];
	int i=low, j=mid+1, k=0;

	while(i<=mid && j<=high){
		if(a[i]<=a[j]){
			temp[k] = a[i];
			i++;
			k++;
		}
		else{
			temp[k] = a[j];
			j++;
			k++;
		}
	}

	while(i<=mid){
		temp[k] = a[i];
		k++;
		i++;
	}

	while(j<=high){
		temp[k] = a[j];
		j++;
		k++;
	}

	for(int i=low; i<=high; i++)
		a[i] = temp[i-low];

}

void mergesort(int a[], int low, int high){
	if(low<high){
		int mid = (low+high)/2;
		mergesort(a, low, mid);
		mergesort(a, mid+1, high);
		merge(a, low, mid, high);
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n];
	
	for(int i=0; i<n; i++)
		cin >> a[i];

	mergesort(a, 0, n-1);

	for(int i=0; i<n; i++)
		cout << a[i] << " ";
	cout << endl;

	return 0;
}