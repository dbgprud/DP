#include<stdio.h>

int max(int a, int b){
   return a>b?a:b;//대소 비교해주는 것
}

int main(void){
   int n;//숫자 삼각형의 줄 갯수
   scanf("%d",&n);//n 입력받기
   int DP[n+1][n+1];
    int a=DP[0][0]=0;
   for(int i=1;i<=n;i++){//i는 줄번호
     for(int j=0;j<i;j++){//j는 숫자 나열 번호
       scanf("%d",&DP[i][j]);//숫자 삼각형 입력
       if(i==1&&j==0)//첫번째 숫자
       DP[i][j]=DP[i][j];
       else if(i!=1&&j==0)//왼쪽 끝부분은 그냥 오른쪽 윗부분 하나만 더해주게됨
       DP[i][j]+=DP[i-1][j];
       else if(i!=1&&j==(i-1))//오른쪽 끝부분은 그냥 왼쪽 윗부분 하나만 더해주게됨
       DP[i][j]+=DP[i-1][j-1];
       else if(i!=1)//나머지는 왼쪽 오른쪽 더해서 더 큰 수를 저장
       DP[i][j]=max(DP[i][j]+DP[i-1][j],DP[i][j]+DP[i-1][j-1]);  
     
        if(a<DP[i][j])//계속 a와 비교하여 큰 수를 a에 저장
              a=DP[i][j];
      }    
    }  
   printf("%d\n",a);
}
