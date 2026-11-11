#include <stdio.h>
int main(){
	long n;
	if(scanf("%ld",&n)!=1||n<=0) return 0;
	int tong1=0,tong2=0;
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			tong1+=i;
		}
		else{
			tong2+=i;
		}
	}
	int tong=tong1-tong2;
	printf("%ld",tong);
	return 0;
}
