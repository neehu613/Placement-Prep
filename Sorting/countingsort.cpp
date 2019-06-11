#include<bits/stdc++.h>
using namespace std;

void countingsort(int a[], int n){
	int freqTable[100] = {0};
	for(int i=0; i<n; i++){
		freqTable[a[i]]++; 
	}
	for(int i=1; i<100; i++){
		freqTable[i] += freqTable[i-1];
	}
	int n1 = freqTable[99];
	int arr[n1];

	for(int i=0; i<n; i++){
		freqTable[a[i]]--;
		arr[freqTable[a[i]]] = a[i];
	}

	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << endl;

}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];

	countingsort(a, n);
	
	return 0;
}