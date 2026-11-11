#include <stdio.h>
int main(){
	long long n;
	printf("Nam: ");
	if (scanf("%lld", &n) != 1) {
        return 0;
    }
	if(n<=0){
		printf("INVALID");
	}
	if((n%4==0&&n%100!=0)||(n%400==0)) {
		printf("YES");
	}
	else printf("NO");
	return 0;
}
