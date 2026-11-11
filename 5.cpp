#include <stdio.h>
int main(){
	int n;
	if(scanf("%d",&n)!=1){
		return 0;
	}
	int a[n];
	for(int i=0;i<n;i++){
		if (scanf("%d",&a[i])!=1) return 0;
	}
	double max=0.0;
	for(int i=0;i<n;i++){
		double t= (double) a[i] / (double) (n-i);
		if(max<t){
			max=t;
		}
	}
	int A=0,A1=0,A2=0;
	if(n==1){
		A=a[0];
	}
	else {
		for(int i=0;i<n;i++){
			A1+=a[i];
		}
		for(int i=1;i<n-1;i++){
			A2+=a[i];
		}
		A=A1+A2;
	}
	printf("%.2f\n",max);
	printf("%d",A);
}
