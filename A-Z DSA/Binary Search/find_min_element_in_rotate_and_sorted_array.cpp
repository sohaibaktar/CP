int findMin(vector<int>& arr)
{
	// Write your code here.
	int n = arr.size();
	int low = 0;
	int high = n-1;
	int ans = INT_MAX;
	while(low <= high){
		//if arr is sorted previously.
		if(arr[low] <= arr[high]){
			ans = min(ans,arr[low]);
			break;
		}
		//calculate mid
		int mid = (low+high)/2;
		//first half if sorted
		if(arr[low] <= arr[mid]){
			ans = min(ans,arr[low]);
			low = mid+1;
		}
		//if right half is sorted.
		else{
			ans = min(ans,arr[mid]);
			high = mid-1;
		}
	}
	return ans;
}