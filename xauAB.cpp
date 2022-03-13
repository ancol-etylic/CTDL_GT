#include<stdio.h>
#include <math.h>
void bin( int B[], int n ){
    int i = n;
    while (i >0 && B[i] == 1) {
        B[i] = 0;
        i--;
    }
    if(i == 0) return;
    else B[i] = 1;
}
void xuat(int B[],int n){
	for(int i=1;i<=n;i++){
		if(B[i]==0)printf("A");else printf("B");
	}printf(" ");
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int B[1000]={0};
		int n; scanf("%d",&n);
		for (int i = 1; i <= n; ++i)
		{
			printf("A");
		}printf(" ");
		for (int i = 0; i < pow(2,n)-1; ++i)
		{
			bin(B,n);
			xuat(B,n);
		}printf("\n");
	}
	return 0;
}