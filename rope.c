#include<stdio.h>
#include<stdlib.h>
int Max(int a, int b){
    return a>b?a:b;
}//a가 b보다 크면 a를 반환
int compare(void *first, void *second){
    if(*(int*)first>*(int*)second)
       return 1;
    else if(*(int*)first < *(int*)second)
       return -1;
    else
       return 0;
}//크기 비교해주는 함수
int main(){
    int n;
    scanf("%d",&n);//로프 개수들 입력
    int w[n];//각각의 로프들의 중량 배열 선언
    for(int i = 0; i < n; i++){
       scanf("%d",&w[i]);
    }//로프들의 중량 입력
    qsort(w,n,sizeof(w[0]),compare);//배열의 값들을 오름차순으로 정리해줌
    int max = w[0];//최대값을 w[0]으로 초기화해줌
    for(int i = 0;i<n;i++){
       max=Max(max,w[i]*(n-i));
    }//로프들의 값이 오름차순으로 되어있어 인덱션이 1씩 증가할수록 그만큼 나눠지는       값이 줄어드므로 전체 개수 n에서 i를 빼주어 max와 비교하여 큰 값을 구해줌
    printf("%d\n",max);//max값 출력
}

