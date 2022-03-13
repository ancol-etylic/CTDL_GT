#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> v; 
vector<int>a;
vector< vector<int> > d;
int s,n,p;
bool nto(int x){
	int sqroot = sqrt(x);
    bool flag = true;
    if (x == 1)
        return false;
    for (int i = 2; i <= sqroot; i++)
        if (x % i == 0)
            return false;
    return true;
}
 
void xuat()
{
    int length = d.size();
    cout<< length <<"\n";
    for (int i = 0; i < length; i++){
    	for (int j = 0; j < d[i].size(); j++ )
    	{
    		cout << d[i][j] << " ";
    	}
    	cout << "\n";
	}
}
 
void Sum(int total, int n, int s, int index)
{

    if (total == s && v.size() == n)
    {
        d.push_back(v);
        return;
    }
 
    if (total > s || index == a.size())
        return;
    v.push_back(a[index]);
    Sum(total+a[index], n, s, index+1);
    v.pop_back();
    Sum(total, n, s, index+1);
}

void all(int n, int s, int p,vector<int>v)
{
    for (int i = p+1; i <=s ; i++)
    {
        if (nto(i))
            a.push_back(i);
    }
    if (a.size() < n)
        return;
    Sum(0, n, s, 0);
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		cin >>n >> p>> s;
    	v.clear();
    	a.clear();
    	d.clear();
    	all(n, s, p,v);
    	xuat();
	}
    return 0;
}