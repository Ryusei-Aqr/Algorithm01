#include <stdio.h>

#define N 101
/*defineを変えること！！！！*/
int main(){

  int i,j,swap,x,array[N];
  FILE *fp;

  fp = fopen("B.txt","r");

  for(i=0;i<N+1;i++){
        array[i]=0;
    }
  for(i = 1;i <= N;i ++)
    {
      fscanf(fp,"%d ",&x);
      array[i] = x;
      for(j = i ; j > 0 ; j--){
        if(array[j] < array[j-1])
          {
            swap = array[j];
            array[j] = array[j-1];
            array[j-1] = swap;
          }
      }
    }

  for(i = 1 ; i <= N ; i++)
    {
      printf("%d ",array[i]);
    }


if (N%2==0) {
  //printf("\n中央値は%d\n",((array[N/2]+array[(N/2)+1])/2));
}else
{
   printf("\n中央値は%d\n",array[(N/2)+1]);
}



  return 0;
}
