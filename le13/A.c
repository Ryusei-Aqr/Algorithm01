#include<stdio.h>
#define max 8
#define exist 1
#define not 0

int num;
int mat_q[max][max];
struct Input{
  int r,c;
}in[max];

void solve_queen(int n){
  if(n==max)return;
  int i,j;
  for(i=0;i<max;i++){
    for(j=0;j<max;j++){
      if(mat_q[i][j]
 }
void print_queen(){
  int i,j;
  //printf("aiueo\n");
  //出力
  for(i=0;i<max;i++){
    for(j=0;j<max;j++){
      /*
      if(mat_q[i][j]==not){
	printf(".");
      }else{
	printf("Q");
	}*/
      printf(" %d",mat_q[i][j]);
      }
      printf("\n");
    }
}

int main(){
  int i,j,r,c;
  //初期化
  for(i=0;i<max;i++){
    for(j=0;j<max;j++){
      mat_q[i][j]=not;
    }
  }

  scanf("%d",&num);
  for(i=0;i<num;i++){
      scanf("%d %d",&in[i].r,&in[i].c);
      mat_q[in[i].r][in[i].c]=exist;
    }
  //printf("%d,%d\n",in[0].r,in[0].c);
  solve_queen(0);
  print_queen();
  return 0;
}
