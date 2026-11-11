#include <stdio.h>
int main(){
	long long n;
	if (scanf("%lld",&n)!=1) return 0;
	int chan=0,le=0;
	if (n==0) chan=1;
	else{
		while(n>0){
			int d=n/10;
			if(d%2==0) chan++;
			else le++;
			n/=10;
		}
	}
	if(chan==le) printf("YES");
	else printf("NO");
	return 0;
}
