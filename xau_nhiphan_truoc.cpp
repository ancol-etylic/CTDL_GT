#include<bits/stdc++.h>
using namespace std;
int dem=0;
int main()
{
	int t,k;
	string a,b;
	cin >> t;
	while(t--){
		cin >>a;
		k=2;
		b="1";
		while(a.size() > b.size()) b="0"+ b;
		while(a.size() < b.size()) a="0"+a;
		string res="";
		int nho =0;
		int n=a.size();
		for (int i = 0; i <= n-1; ++i)
		{
			if (a[i]='0')
			{
				dem++;
			}
		}
		if (dem==n-1)
		{
			for (int i = 0; i < n; ++i)
			{
				a='1';
				cout<<a;
			}
		}else{
		for (int i = n-1; i >=0; i--)
		{
			int so = int (a[i]-'0') - int (b[i]-'0')+ nho;
			res = char(so%k + '0') + res;
			nho = so/k;
		}
		if (nho<0)
		{
			res = char(nho + '0') + res;
		}
		cout<< res <<endl ;}

	}
	return 0;
}