#include<stdio.h>

int main(){
  int i,num;
    long long fibo0,fibo1,fibo2,sum;
    scanf("%d",&num);
    i=0;
    fibo0=1;
    fibo1=1;
    while(i<num){
        //printf("%d回目 :",i+1);
        fibo2=fibo1+fibo0;
        //printf("sum = %d\n",fibo2);
        fibo0=fibo1;
        fibo1=fibo2;
        ++i;
  }
  //printf("Finally sum %d or %d or %d\n",fibo0,fibo1,fibo2);
  printf("%lld\n",fibo2);
  return 0;
}
/*フィボナッチ数列
入力
３
出力
３　*/
