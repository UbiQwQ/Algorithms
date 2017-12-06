#include<stdio.h>
#include<math.h>
int main(){
	int m,n,score;
	while(scanf("%d%d",&m,&n)!=EOF){
		int max = 0;
		int maxm = 1;
		int maxn = 1;
		for(int i = 1;i <= m;i++){
			for(int j = 1; j <= n;j++){
				scanf("%d",&score);
				if(abs(score) > abs(max)){
					max = score;
					maxm = i;
					maxn = j;
				}
			}
		}
		printf("%d %d %d\n",maxm,maxn,max);
	}
}