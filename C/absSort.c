#include<stdio.h>
#include <math.h>
int main(){
	int n,i,a[110],temp;
	while(scanf("%d",&n) != EOF){
		if(n==0){
			break;
		}
		for(i = 0;i < n;i++){
			scanf("%d",&a[i]);
		}
		for(i = 0;i < n-1;i++){
			for(int j = i+1;j < n;j++){
				if(abs(a[i]) < abs(a[j])){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}

		for(i = 0;i < n;i++){
			if(i){
				putchar(' ');
			}
			printf("%d",a[i]);
		}
		putchar('\n');
	}

	return 0;
}