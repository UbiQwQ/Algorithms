#include<stdio.h>
long divisor(long a,long b){
	if(a%b == 0){
		return b;
	}else{
		return divisor(b,a%b);
	}

}
int main(){
	int n;
	long a,b;
	while((scanf("%d",&n))!=EOF){
		scanf("%d",&a);
		for(int i = 1;i < n;i++){
			scanf("%d",&b);
			a = a*b/divisor(a,b);
		}
		printf("%d\n", a);
	}
	return 0;
}