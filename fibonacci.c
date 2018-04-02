#include<stdio.h>

int count1[41]={1,0,};//0의 갯수 세주는거
int count2[41]={0,1,};//1의 갯수 세주는거

int main(void){
    int T;//테스트할 갯수
    scanf("%d",&T);
    int b[T];//테스트할 숫자배열
    for(int i=2;i<41;i++){//인덱스 40까지0과 1의 갯수 세주어 저장
      count1[i]=count1[i-1]+count1[i-2];
      count2[i]=count2[i-1]+count2[i-2];
    }     
    for(int k=0;k<T;k++)
     scanf("%d",&b[k]);//테스트할 숫자배열 입력받기
     for(int k=0;k<T;k++)
      printf("%d %d\n",count1[b[k]],count2[b[k]]);//입력받은 숫자의 0과 1의 갯수 출력
      
}

