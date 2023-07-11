int missingNumber(vector<int>&a, int n) {
    // Write your code here.
    // sort(a.begin(),a.end());
    // for(int i=0;i<N;i++){
    //     if(i+1 !=a[i])
    //         return i+1;
    // }
    // return -1;

    //using sum of ith o nth
    //vs sum of nth element in array
    int sum = (n*(n+1))/2,sum_array=0;
    for(int i=0;i<n;i++){
        sum_array +=a[i]; 
    }
    return (sum-sum_array);
    //using xor most optimal solution
    int xor1=0,xor2=0;

    for(int i=0;i<n-1;i++){
        xor1 = xor1^(i+1);
        xor2 = xor2^a[i];
        
    }
    xor1 = xor1 ^ n; 

    return (xor1^xor2);
}