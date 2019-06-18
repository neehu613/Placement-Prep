#include<bits/stdc++.h>
using namespace std;

bool myComp(int a, int b){
	if(a>b)
		return true;
	return false;
}

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
	    
	    vector<int> even, odd;
	    
	    for(int i=0; i<n; i++){
	        if((a[i]%2)==0){
	            even.push_back(a[i]);
	        }
	        else{
	            odd.push_back(a[i]);
    	    }
	    }
	    
	    vector<int> :: iterator i, j;
	    
	    sort(odd.begin(), odd.end(), myComp);
	    sort(even.begin(), even.end());
	    
	    
	    for(i=odd.begin(); i!=odd.end(); i++)
	        cout << (*i) << " ";
	        
	    for(j=even.begin(); j!=even.end(); j++)
	        cout << (*j) << " ";
	    cout << endl;
	}
	return 0;
}