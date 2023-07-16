/*
arr = [7,8,9,1,2,3,4,5,6] , target 1 o/p = 3
*/
int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int low =0 , high=n-1;
    while(low <=high){
        int mid = (low+high)/2;
        if(arr[mid]==k) return mid;
        //left sorted side
        else if(arr[low] <= arr[mid]){
            if(arr[low] <=k && k <=arr[mid])
                high = mid-1;
            else
                low = mid+1;
        }
        //right side sorted
        else{
            if(arr[mid] <= k && k << arr[high])
                low = mid+1;
            else
                high = mid - 1;
        }
    }
    return -1;
}
