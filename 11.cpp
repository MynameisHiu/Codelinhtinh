#include<stdio.h>
int main(){
	int n;
	if(scanf("%d",&n)!=1||n<1) return 0;
	double l,r;
	double max=0;
	double tong=0;
	for(int i=0;i<n;i++){
		if(scanf("%lf",&l)!=1) return 0;
	    if(scanf("%lf",&r)!=1) return 0;
	   	double dientich=l*r;
		if (dientich>max){
			max=dientich;
		}
		tong+=dientich;
	}
	double tb= (double) tong/ (double) n;
	printf("%.3lf\n",tb);
	printf("%.3lf\n",max);
	return 0;
}
