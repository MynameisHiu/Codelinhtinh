#include<stdio.h>
int main(){
	long long n;
	if (scanf("%lld",&n)!=1||n<=0){
		return 0;
	}
	long long sum=0;
	for(long long i=1;i<=n;i++){
		sum+=i;
	}
	printf("%d",sum);
	return 0;
}
