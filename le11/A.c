#include<stdio.h>
#define max 100
struct Graph{
  int u,k;
};
struct Graph graph[max];
int g[max][max];
int result[max][max];
int main(){
  int num,i,j;
  scanf("%d",&num);
  //初期化
  for(i=0;i<num;i++){
      for(j=0;j<num;j++){
        result[i][j]=0;
         g[i][j]=0;
      }
    }
  for(i=0;i<num;i++){
    graph[i].u=0;
    graph[i].k=0;
  }
  
  for(i=1;i<num+1;i++){
    scanf("%d %d",&graph[i].u,&graph[i].k);
    for(j=1;j<(graph[i].k)+1;j++){
      scanf("%d",&g[i][j]);//一つしか入力できないのに二つやろうとしているためできない
      result[graph[i].u][g[i][j]]=1;
      }
  }
  //result[1][1]=2;
  
  //out
  for(i=0;i<num;i++){
    for(j=0;j<num;j++){
      
      printf(" %d",result[i][j]);
      if(j==num-1){
	printf("\n");
	}
      //printf("u,%d:k,%d\n",graph[i].u,graph[i].k);
    }
  }
  /*
隣接行列
辺がある時１、ない時に０を出力する
入力4
1 2 2 4
2 1 4
3 0
4 1 3
出力
0 1 0 1
0 0 0 1
0 0 0 0
0 0 1 0
*/  
  
  return 0;
}
