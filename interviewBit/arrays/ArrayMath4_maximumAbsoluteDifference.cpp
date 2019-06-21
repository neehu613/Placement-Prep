int Solution::maxArr(vector<int> &a) {
    vector<int> v1, v2;
    int n = a.size();
    for(int i=0; i<n; i++){
        v1.push_back(a[i]+i);
        v2.push_back(a[i]-i);
    }
    int maxOfV1 = *max_element(v1.begin(), v1.end());
    int maxOfV2 = *max_element(v2.begin(), v2.end());
    int minOfV1 = *min_element(v1.begin(), v1.end());
    int minOfV2 = *min_element(v2.begin(), v2.end());
    return max(maxOfV1-minOfV1, maxOfV2-minOfV2);
}
