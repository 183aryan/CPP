#include <algorithm>
#include <iostream>
using namespace std;

int kthSmallest(int arr[], int n, int k)
{
	sort(arr, arr + n);

	return arr[k - 1];
}

int main()
{
    int n;
    cin>>n;
	int arr[n];
	int k;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>k;
	cout << "K'th smallest element is " << kthSmallest(arr, n, k);
	return 0;
}
