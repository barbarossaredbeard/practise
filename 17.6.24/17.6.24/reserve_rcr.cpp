#include<iostream>
using namespace std;
#define N 50

void Reserve(int R[], int l, int r)
{
	int i, j,temp;
	for (i = l, j = r; i < j; i++, j--)
	{
		temp = R[i];
		R[i] = R[j];
		R[j] = temp;
	}
}

void RCR(int R[], int n, int p)
{
	if (p <= 0 || p >= n)
	{
		cout << "ERROR" << endl;
	}
	Reserve(R, 0, p - 1);
	Reserve(R, p, n-1);
	Reserve(R, 0, n - 1);
}

int main()
{
	int L,i,n;
	int R[N];
	cin >> L;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> R[i];
	}
	RCR(R, n, L);
	for (i = 0; i < n; i++)
	{
		cout << R[i]<<" ";
	}
	
	cout << endl;
		
	return 0;
	}

