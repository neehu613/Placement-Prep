int Solution::maxSubArray(const vector<int> &a) {
    int currMax = a[0], globMax = a[0];
    for(int i=1; i<a.size(); i++){
        currMax = max(a[i], a[i]+currMax);
        globMax = max(currMax, globMax);
    }
    return globMax;
}

