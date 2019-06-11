#include<bits/stdc++.h>
using namespace std;

void bubblesort(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[j]<=a[i]){
				swap(a[i],a[j]);
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];

	bubblesort(a, n);

	for(int i=0; i<n; i++)
		cout << a[i] << " ";
	cout << endl;

	return 0;
}