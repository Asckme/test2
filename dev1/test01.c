#include <stdio.h>
int main(){
	int A1=-1,A2,countA3=0;
	double A3=0;
	int N,num;
	scanf("%d",&N);
	while(N--){
		scanf("%d",&num);
		if(num%3==0){
			if(num>A1)A1=num;
		}
		if(num%3==1)A2++;
		if(num%3==2){
			countA3++;
			A3+=num; 
		}
	}
	printf("%d %d %.f",A1,A2,A3/countA3);
}
