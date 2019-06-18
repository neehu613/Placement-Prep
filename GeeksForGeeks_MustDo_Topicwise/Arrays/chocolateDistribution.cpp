#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0; i<n; i++)
	        cin >> a[i];
	    int k;
	    cin >> k;
	   
	    sort(a, a+n);
	    
	    if(n==k){
	        cout << a[n-1]-a[0] << endl;
	    }
	    else{
	        int diff = INT_MAX;
    	    for(int i=0; i<=n-k; i++){
    	        if(a[i+k-1] - a[i] < diff){
    	            diff = a[i+k-1] - a[i];
    	        }
    	    }
    	    cout << diff << endl;
	    }
	}
	return 0;
}