#include <bits/stdc++.h>
using namespace std;

//we have made 2 arrays, one will store the width of buckets and other width of balls
//each jth bucket has the a capacity of j balls
//for the solution, we will create an array pos which will store the final position of each ball
//we will also create an array(bucket_size) which will store the count curr balls in jth bucket
//we will traverse the array of balls from beginning
//for each ball we will traverse the array of buckets from the end and check the following condition
// if width of ith ball <= width of jth bucket and size of jth bucket <= j (i.e bucket is not full)
// then--- make pos of the ith ball as j+1 i.e pos[i]=j+1 (j+1-> as j starts from 0)
//     --- also, increse the count of balls in jth bucket i.e bucket_size[j]++
//     --- break the inner loop, as we have got the position of ith ball
// out of bucket loop
// out of balls loop
// print the pos of balls i.e pos array
int main()
{
	int t, k, n;
	cin >> t;
	while (t--)
	{
		cin >> k;
		long long bucket[k];   											//1
		for (int i = 0; i < k; i++)
		{
			cin >> bucket[i];
		}
		cin >> n;
		long long balls[n], pos[n] = {0};   							//1 3
		for (int i = 0; i < n; i++)
		{
			cin >> balls[i];
		}
		int bucket_size[k] = {0};         								//4
		for (int i = 0; i < n; i++)								        //5
		{
			for (int j = k - 1; j >= 0; j--)        					//6
			{
				if (balls[i] <= bucket[j] && bucket_size[j] <= j)   	//7
				{
					pos[i] = j + 1;										//8
					bucket_size[j]++;									//9
					break;												//10
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << pos[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

// Input
// 2
// 3
// 20 5 11
// 8
// 3 2 15 19 7 11 4 8
// 3
// 16 8 16
// 7
// 11 20 9 6 14 19 8

// Output
// 3 3 1 0 3 0 2 0
// 3 0 3 3 1 0 2