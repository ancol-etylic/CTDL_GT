#include<stdio.h>
#include <math.h>
#include <string.h>
long long s,x;	
void s1(int n, char a[]){
		s=0;
		for (int i = 0; i < n; i++)
		{
			// printf("%c\n",a[i] );
			if (a[i]=='0')
			{
				s=s+0*pow(2,n-1-i);
			}else{
				s=s+1*pow(2,n-1-i);
			}
		}//printf("%d\n",s );
}
void s2(int l,char b[]){
		x=0;
		for (int i = 0; i < l; i++)
		{
			// printf("%c\n",a[i] );
			if (b[i]=='0')
			{
				x=x+0*pow(2,l-1-i);
			}else{
				x=x+1*pow(2,l-1-i);
			}
		}//printf("%d\n",x );
	}
int main(int argc, char const *argv[])
{
	
	int t;
	char a[30],b[30];
	scanf("%d",&t);
	while(t--){
		scanf("%s",a);
		scanf("%s",b);
		int n=strlen(a);
		int l=strlen(b);
		s1(n,a);
		s2(l,b);
		printf("%lld\n",s*x );
	}
	return 0;
}