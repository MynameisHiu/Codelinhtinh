#include <stdio.h>
int main(){
	double c;
	if(scanf("%lf",&c)!=1) return 0;
	double f=c*1.8+32;
	printf("%.2lf",f);
	return 0;
}
