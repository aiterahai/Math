#include <stdio.h>
int main(){
	double arr[100], s;
	int m;
	arr[0] = 1;
	printf("찾고 싶은 0 보다 큰 정수를 입력하세요 : ");
	scanf("%lf", &s);
	printf("몇 번 반복 할까요?");
	scanf("%d", &m);
	for(int i = 1;i <= m;i++){
		arr[i] = (arr[i-1] + (s / (arr[i-1]))) / 2;
		printf("%d 번째 : %lf\n", i, arr[i]);
	} 
	printf("결과 : %lf",arr[m]); 
}
