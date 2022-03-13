#include<bits/stdc++.h>
using namespace std;
int a[1000];
int n,k;
void nhap(){
	for (int x = 1; x <= k; ++x)
		{
			a[x]=x;
		}
}
void in(){
	for (int i = 1; i <= k; i++)
	{
		cout << a[i];
	}
	cout << ' ';
}
void quaylui(int i){
	for (int j = a[i-1]+1; j <= n-k+i; j++)
	{
		a[i]=j;
		if (i==k)
		{
			in();
		}else {quaylui(i+1);}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		nhap();
		quaylui(1);
		cout << endl;
	}
	return 0;
}