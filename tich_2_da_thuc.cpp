#include <iostream>
using namespace std;
int p[100]={};
void tich(int A[], int B[], int m, int n)
{
for (int i = 0; i<m+n-1; i++)
	p[i] = 0;
for (int i=0; i<m; i++)
{
	for (int j=0; j<n; j++)
		p[i+j] += A[i]*B[j];
}
}
void xuat(int n)
{
	for (int i=0; i<n; i++)
	{
	cout << p[i]<< " ";
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--){
	int A[100]={},B[100]={};
	int m,n;
	cin >> m >> n ;
	for (int i = 0; i < m; i++)
	{
		cin >> A[i];
	}
	for (int j = 0; j < n; j++)
	{
		cin >>B[j];
	}
	tich(A, B, m, n);
	xuat(m+n-1);
	cout << endl;
}
	return 0;
}
