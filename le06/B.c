#include<stdio.h>
#define max 100000

int partition(int part[],int start,int end){
  int x,i,j,temp;

  x=part[end];
  i=start-1;

  for(j=start;j<=end-1;j++){
    if(part[j]<=x){
	i+=1;
	//交換
	temp=part[i];
	part[i]=part[j];
	part[j]=temp;
      }
  }
    //交換
      temp=part[i+1];
      part[i+1]=part[end];
      part[end]=temp;
    return i+1;
}
int main(){
  int num,i,kaeriti,part[max];

  scanf("%d",&num);
  for(i=0;i<num;i++){
    scanf("%d",&part[i]);
  }
  //printf("%d",part[num-1]);
  kaeriti=partition(part,0,num-1);
  
  //出力
  for(i=0;i<num-1;i++){
    if(i==kaeriti){
      printf("[%d] ",part[kaeriti]);
	}else{
      printf("%d ",part[i]);
    }
  }
  printf("%d\n",part[num-1]);
  return 0;
}
/*
パーティションソート
基準を[]で出力’
Input
12
13 19 9 5 12 8 7 4 21 2 6 11
Output
9 5 8 7 4 2 6 [11] 21 13 19 12*/
