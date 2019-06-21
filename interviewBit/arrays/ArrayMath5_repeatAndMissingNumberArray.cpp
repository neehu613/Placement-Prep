vector<int> Solution::repeatedNumber(const vector<int> &a) {
    / *************** O(n) solution but memory != O(1) ***************** /
    
    
    int n = a.size();
    vector<int> res;
    unordered_set<int> set;
    for(int i=0; i<n; i++){
        if(set.find(a[i]) != set.end())
            res.push_back(a[i]);
        set.insert(a[i]);
    }
    
    unordered_set<int> :: iterator i;
    int sum1=0, sum2= (n*(n+1))/2;
    for(i=set.begin(); i!=set.end(); i++){
        sum1 += (*i);
    }

    res.push_back(sum2-sum1);
    return res;
    
    / ******************************************************************** /
    
    
    
    long long sum = 0;
     long long squareSum = 0;
     long long temp;
     for (int i = 0; i < V.size(); i++) {
         temp = V[i];
         sum += temp;
         sum -= (i + 1);
         squareSum += (temp * temp);
         squareSum -= ((long long)(i + 1) * (long long)(i + 1));
     }
     // sum = A - B
     // squareSum = A^2 - B^2 = (A - B)(A + B)
     // squareSum / sum = A + B
     squareSum /= sum;

     // Now we have A + B and A - B. Lets figure out A and B now. 
     int A = (int) ((sum + squareSum) / 2);
     int B = squareSum - A;

     vector<int> ret;
     ret.push_back(A);
     ret.push_back(B);
     return ret;
    
    
}
