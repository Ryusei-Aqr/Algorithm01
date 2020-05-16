#include <stdio.h>

#define N 100

int main(){

  int i,num;
  long long fibo[N];

  scanf("%d",&num);

    fibo[0] = 1;
    fibo[1] = 1;

    for(i = 2;i <= num;i ++)
      {
        fibo[i] = fibo[i-1] + fibo[i-2];
      }

  printf("%lld\n",fibo[num]);

  return 0;

}
