vector<int> Solution::plusOne(vector<int> &a) {
    vector<int> res;
    int n = a.size();
    int carry = 0;
    if(a[n-1]+1 == 10){
        res.push_back(0);
        carry = 1;
    }
    else{
        res.push_back(a[n-1]+1);
    }
    
    for(int i=n-2; i>=0; i--){
        int s = a[i] + carry;
        if(s == 10){
            s = 0;
            carry = 1;
        }
        else
            carry = 0;
    
        res.push_back(s);
    }
    if(carry == 1)
        res.push_back(1);
        
    reverse(res.begin(), res.end());
    vector<int> :: iterator i;
    for(i=res.begin(); i!=res.end(); i++){
        if(*i == 0)
            res.erase(i--);
        else
            break;
    }
    return res;
}
