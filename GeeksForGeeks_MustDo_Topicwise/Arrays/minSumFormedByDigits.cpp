#include<bits/stdc++.h>
#include<string.h>
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
	    
	    sort(a, a+n);
	    string num1 = "", num2 = "";
	    for(int i=0, j=1, count=0; count <n/2 ; i+=2, j+=2,count++){

	        num1 += to_string(a[i]);
	        num2 += to_string(a[j]);
	    }
		if(n%2==1)
			num1 += to_string(a[n-1]);	 
		
	    cout << stoi(num1)+stoi(num2) << endl;
	}
	return 0;
}