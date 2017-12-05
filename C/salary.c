#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n),n){
		int salary,ans = 0;
		for(int i = 0;i < n; i++){
			scanf("%d",&salary);
			ans += salary/100;	salary %= 100;
			ans += salary/50;	salary %= 50;
			ans += salary/10;	salary %= 10;
			ans += salary/5;	salary %= 5;
			ans += salary/2;	salary %= 2;
			ans += salary;
		}
		printf("%d\n",ans);
	}
	return 0;
}