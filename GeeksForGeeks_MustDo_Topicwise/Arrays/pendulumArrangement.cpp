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
	    int a[n], temp[n];

	    for(int i=0; i<n; i++){
	        cin >> a[i];
	        temp[i] = a[i];
	    }
	    
	    sort(temp, temp+n);

	    int mid = ((n%2==0) ? (n/2) - 1 : n/2);
	    a[mid] = temp[0];

	    int flag=0, k=1;
	    
	    for(int i=1; i<n; i++){
	        if(flag==0){
	            a[mid+k] = temp[i];
	            flag=1;
	        }
	        else{
	            a[mid-k] = temp[i];
	            flag=0;
	        }
	        
	        if(i%2==0){
	            k++;
	        }
	    }
	    
	    for(int i=0; i<n; i++)
	        cout << a[i] << " ";
	    cout << endl;
	}
	return 0;
}