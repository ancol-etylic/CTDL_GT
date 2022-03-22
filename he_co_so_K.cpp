#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,k;
	string a,b;
	cin >> t;
	while(t--){
		cin >>k >>a >> b;
		while(a.size() > b.size()) b="0"+ b;
		while(a.size() < b.size()) a="0"+a;
		string res="";
		int nho =0;
		int n=a.size();
		for (int i = n-1; i >=0; i--)
		{
			int so = int (a[i]-'0') + int (b[i]-'0')+ nho;
			res = char(so%k + '0') +res;
			nho = so/k;
		}
		if (nho>0)
		{
			res = char(nho + '0') +res;
		}
		cout<< res <<endl ;

	}
	return 0;
}