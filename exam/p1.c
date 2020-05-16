#include<stdio.h>
#include<stdio.h>
#define N 2000000
int main(){
  int i,x,sum;

  FILE *fp;

  fp=fopen("A.txt","r");
  sum=0;

  for(i=0;i<N;i++){
    fscanf(fp,"%d",&x);
    if(x%2==0){
      sum++;
    }
  }
  fclose(fp);
    printf("%d",sum);

    return 0;
  }
