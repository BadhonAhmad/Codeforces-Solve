// C++ program to implement
// the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to print the maximum
// non-empty subsequence sum
int MaxNonEmpSubSeq(int a[], int n)
{
	// Stores the maximum non-empty
	// subsequence sum in an array
	int sum = 0;

	// Stores the largest element
	// in the array
	int max = *max_element(a, a + n);

	if (max <= 0) {

		return max;
	}

	// Traverse the array
	for (int i = 0; i < n; i++) {

		// If a[i] is greater than 0
		if (a[i] > 0) {

			// Update sum
			sum += a[i];
		}
	}
	return sum;
}

// Driver Code
int main()
{
	int arr[1000];
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
   // int N = sizeof(arr) / sizeof(arr[0]);

	cout << MaxNonEmpSubSeq(arr, n);

	return 0;
}
