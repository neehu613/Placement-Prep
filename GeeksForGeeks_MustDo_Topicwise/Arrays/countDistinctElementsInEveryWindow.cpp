#include <bits/stdc++.h>
using namespace std;
void countDistinct(int [], int , int );
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		countDistinct(a,k,n);cout<<endl;
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete below method */
void countDistinct(int a[], int k, int n)
{
    //Your code here
    unordered_set<int> s;
    for(int i=0; i<=n-k; i++){
        for(int j=i; j<k+i; j++){
            s.insert(a[j]);
        }
        cout << s.size() << " ";
        s.clear();
    }
}