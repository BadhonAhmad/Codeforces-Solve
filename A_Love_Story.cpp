// C++ program to find out maximum subarray
// sum in linear time using prefix sum.
#include <iostream>
#include <limits>
using namespace std;

// Function to compute maximum subarray
// sum in linear time.
int maximumSumSubarray(int arr[], int n)
{
	// Initialize minimum prefix sum to 0.
	int min_prefix_sum = 0;

	// Initialize maximum subarray sum so
	// far to -infinity.
	int res = numeric_limits<int>::min();

	// Initialize and compute the prefix
	// sum array.
	int prefix_sum[n];
	prefix_sum[0] = arr[0];
	for (int i = 1; i < n; i++)
		prefix_sum[i] = prefix_sum[i - 1] + arr[i];	

	// loop through the array, keep track
	// of minimum prefix sum so far and
	// maximum subarray sum.
	for (int i = 0; i < n; i++) {
		res = max(res, prefix_sum[i] -
					min_prefix_sum);
		min_prefix_sum = min(min_prefix_sum,
							prefix_sum[i]);
	}
	
	return res;
}

// Driver Program
int main()
{
	// Test case 1
    int n;
//    = sizeof(arr1) / sizeof(arr1[0]);
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
        cout << maximumSumSubarray(arr, n) << endl;


	return 0;
}
