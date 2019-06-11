#include<bits/stdc++.h>
using namespace std;

void selectionsort(int a[], int n){
	for(int i=0; i<n; i++){
		int min_index = i;
		for(int j=i; j<n; j++){
			if(a[j] < a[min_index]){
				min_index = j;
			}
		}
		swap(a[i], a[min_index]);
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];

	selectionsort(a, n);

	for(int i=0; i<n; i++)
		cout << a[i] << " ";
	cout << endl;

	return 0;
}