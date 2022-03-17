#include <bits/stdc++.h>
using namespace std;
long long n;
long long a[100000],b[100000];
void nhap(long long a[],long long n){
	for (long long i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		nhap(b,n-1);
		long long dem=n;
		for (long long i = 1; i <= n; ++i)
		{
			if (a[i]!=b[i])
			{
				dem=i;
				break;
			}
		}
		cout <<dem<< endl;
	}
	return 0;
}