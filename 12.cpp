#include<stdio.h>
int main(){
	int n;
	if(scanf("%d",&n)!=1) return 0;
	int a[n];
	int tong=0;
	for(int i=0;i<n;i++){
		if(scanf("%d",&a[i])!=1) return 0;
		if (a[i]>a[i+1]){
			a[i+1]=a[i];
		}
	}int count=0;
	for(int i=0;i<n;i++){
		tong=a[i]+a[i+1];
		if(tong%2==0){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
