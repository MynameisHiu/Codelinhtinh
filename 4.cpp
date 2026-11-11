#include <stdio.h>
int main(){
	int a[9];
	int n=1;
	for(int i=0;i<9;++i){
		if (scanf("%d",&a[i])!=1);
		if(a[i]<1||a[i]>9){
			n=0;
		}
	}
	for(int i=0;i<9;++i){
		for(int j=i+1;j<9;++j){
			if(a[j]==a[i]){
				n=0;
			}
		}
	}
	if(n) printf("VALID");
	else printf("INVALID");
	return 0;
}
