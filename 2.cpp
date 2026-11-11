#include <stdio.h>
int main(){
	int n;
	if(scanf("%d",&n)!=1||n<=0){
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			printf("%d",i);
		} if(i%2==0){
			char l='L';
			printf("%c",l);
		} if(i%4==0){
			char t='T';
			printf("%c",t);
		} if(i%8==0){
			char o='O';
			printf("%c",o);
		} if(i%16==0){
			char l2='L';
			printf("%c",l2);
		}
		printf("\n");
	}
	return 0;
}
