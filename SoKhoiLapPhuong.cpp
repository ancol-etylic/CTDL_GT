// Một số X được gọi là số khối lập phương nếu X là lũy thừa bậc 3 của số Y (X= Y3).
// Cho số nguyên dương N, nhiệm vụ của bạn là tìm số khối lập phương lớn nhất
// bằng cách loại bỏ đi các chữ số của N. Ví dụ số 4125 ta có kết quả là 125 = 53.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên N được viết trên một dòng.
// T, N thỏa mãn ràng buộc: 1≤T≤100;  1≤N≤1018.
#include<bits/stdc++.h>
using namespace std;

map<long long,bool> d;
int u[20];
long long res;
vector<int> a;

void quaylui(int i,int n){
	for(int j=0;j<=1;j++){
		u[i]=j;
		if(i==n-1){
			long long ans=0;
			for(int l=0;l<n;l++){
				if(u[l]==1) ans=10*ans+a[l];
			}
			if(d[ans]==true&&ans!=0&&res<ans) res=ans;
		}
		else quaylui(i+1,n);
	}
}

int main(){
	cin.tie(0);
	for(long long i=1;i<=10000;i++)
	d[i*i*i]=true;
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		a.clear();
		while(n){
			a.push_back(n%10);
			n/=10;
		}
		reverse(a.begin(),a.end());
		res=-1;
		quaylui(0,a.size());
		cout<<res<<'\n';
	}
	return 0;
}
