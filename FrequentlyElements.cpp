#include <iostream>
#include <vector>
#define n 6

using namespace std;

vector<int> solution(vector<int> arr, int m)
{
	vector<int> arr1 (n - m + 1);
	int x;
	for (int i = 0; i < n - m + 1; i++)
	{
		x = 1;
		for (int j = i; j < i + m - 1; j++)
		{
			if (x > 1)continue;
			for (int k = j + 1; k < i + m; k++)
			{
				if (arr[j] == arr[k])
				{
					x++;
				}
			}
		}
		arr1[i] = x;
		cout << arr1[i] << " ";
	}
	return arr1;
}

int main()
{
	vector<int> arr = {1, 3, 3, 3, 3, 1};
	solution(arr, 3);
}