#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int n;
	while (t--)
	{
		cin >> n;
		int arr[n];
		int sum = 0, maxSum = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
			if (sum > maxSum)
				maxSum = sum;
			if (sum < 0)
				sum = 0;
		}
		cout << maxSum << endl;
	}
	return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		int n;
// 		cin >> n;
// 		int arr[n], sum = 0;
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin >> arr[i];
// 			sum += arr[i];
// 		}
// 		int maxSum = sum, sum1 = sum, sum2 = sum, sum3 = sum;
// 		for (int i = 0; i < n; i++)
// 		{
// 			sum1 = sum1 - arr[i];
// 			if (sum1 > maxSum)
// 				maxSum = sum1;
// 			sum2 = sum2 - arr[n - i - 1];
// 			if (sum2 > maxSum)
// 				maxSum = sum2;
// 			sum3 = sum3 - (arr[i] + arr[n - i - 1]);
// 			if (sum3 > maxSum)
// 				maxSum = sum3;
// 		}
// 		cout << maxSum << endl;
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		int n;
// 		cin >> n;
// 		int arr[n];
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin >> arr[i];
// 		}
// 		int maxSum = 0, sum = 0, max = 0;
// 		for (int k = 1; k <= n; k++)
// 		{
// 			int sum = 0;
// 			for (int i = 0; i < k; i++)
// 			{
// 				sum += arr[i];
// 			}
// 			maxSum = sum;
// 			for (int i = k; i < n; i++)
// 			{
// 				sum += arr[i] - arr[i - k];
// 				if (sum > maxSum)
// 					maxSum = sum;
// 			}
// 			if (maxSum > max)
// 				max = maxSum;
// 		}
// 		cout << max << endl;
// 	}
// 	return 0;
// }