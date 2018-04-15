#include<stdio.h>

int main(void){
   int n;//개수 입력할 변수 선언
   int sum=0;//최소 합 선언,초기화
   scanf("%d",&n);//개수 입력
   int p[n];//걸리는 시간들 배열 선언
   int a;
   for(int i=0;i<n;i++)
      scanf("%d",&p[i]);//걸리는 시간 입력
   for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
         if(p[i]>p[j]){
           a=p[i];
           p[i]=p[j];
           p[j]=a;
         }
       }
   }   //걸리는 시간이 더 크면 그 다음 인덱션과 값을 바꿔줌
   for(int i = 0; i<n;i++){
      for(int j=0;j<=i;j++){
         sum+=p[j];//걸리는 시간들 합해줌
       }
   }
   printf("%d\n",sum);//최소 시간 출력
}
