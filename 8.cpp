#include <stdio.h>
int demsolancan(long long n){
	int lancan=0;
	if(n<=1) return 0;
	while(n>1){
		if(n%2!=0){
			n=(n-1)/2;
			lancan++;
		}else{
			n=n/2;
			lancan++;
		}
	}
	return lancan;
}
int main(){
	long long n;
	if (scanf("%lld",&n)!=1||n<=0) return 0;
	int ketqua=demsolancan(n);
	printf("%d",ketqua);
	return 0;
}
