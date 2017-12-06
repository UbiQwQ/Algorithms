#include<stdio.h>
int score[51][6];
double course[6];
int main(){
	// n表示学生数，m表示课程数；
	int n,m,count,k = 0,c = 0;
	double sum1,sum2,avg1,avg2;
	while(scanf("%d%d",&n,&m)!=EOF){
		sum1 = sum2 = count = 0;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				scanf("%d",&score[i][j]);
			}
		}
		// 每位同学的平均分
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				sum1 += score[i][j];
			}
			if(i != 0){printf(" ");}
			printf("%.2lf",sum1/m);
			sum1 = 0;
		}

		printf("\n");

		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				sum2 += score[j][i];
			}
			if(i!=0){printf(" ");}
			printf("%.2lf",sum2/n);
			sum2=0;
			course[c++]=sum2/n;   //把每门课的平均成绩记录到course[6]
		}
		printf("\n");

		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				if(score[i][j] >= course[j]){
					k++;
				}else{
					break;
				}
			}
			if(k==m){count++;}
		}
		printf("%d\n",count);
	}
	return 0;
}