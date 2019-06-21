int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int sum = 0;
    for(int i=1; i<A.size(); i++){
        int xVal = A[i]-A[i-1];
        int yVal = B[i]-B[i-1];
        sum += max(abs(xVal), abs(yVal));
    }
    return sum;
}
