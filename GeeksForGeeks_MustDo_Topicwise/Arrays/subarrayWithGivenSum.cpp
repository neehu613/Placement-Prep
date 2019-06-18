#include<bits/stdc++.h>
using namespace std;


/*
//To handle negative numbers in the array

void printSubarrayWithGivenSum(long int a[], long int n, long int sum){
	long int currSum = 0;

	unordered_map<long int, long int> myMap;	//<element, index>

	for(long int i=0; i<n; i++){
		currSum += a[i];

		if(currSum == sum){
			//cout << "Subarray range : (0, " << i << ")\n";
			cout << "0 " << i << endl;
			return;  
		}

		if(myMap.find(currSum-sum) != myMap.end()){
			//cout << "Subarray range : (" << myMap[currSum-sum] + 1 << ", " << i << ")\n";
			cout << myMap[currSum-sum] + 1 << " " << i << endl;
			return;
		}

		myMap[currSum] = i;
	}
	cout << "-1\n";
}
*/

//For non negative numbers
void printSubarrayWithGivenSum(long int a[], long int n, long int sum){
	long int low = 0;
	int flag = 0;
	long int currSum = a[0];
	for(long int i=1; i<=n; i++){
		
		while(currSum > sum && low<i){
			currSum -= a[low];
			low++;
		}
		if(currSum==sum){
			cout << low+1 << " " << i << endl;
			flag=1;
			break;
		}
		currSum += a[i];
	}
	if(flag == 0)
		cout << "-1\n";
}


int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		long int n;
		cin >> n;
		long int s;
		cin >> s;
		long int a[n];
		for(long int i=0; i<n; i++)
			cin >> a[i];

		printSubarrayWithGivenSum(a, n, s);
	}
	return 0;
}
