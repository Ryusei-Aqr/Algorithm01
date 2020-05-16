#include<stdio.h>

int num1,first[2000];
  
int solve(int a,int b){
  int result;
  if(b==0){
    return 1;
  }
  if(a>=num1){
    return 0;
  }
  result=solve(a+1,b) || solve(a+1,b-first[a]);
  return result;
}



int main(){
 int i,num2,second[2000];
   scanf("%d",&num1);
  for(i=0;i<num1;i++){
    scanf("%d",&first[i]);
  }
  scanf("%d",&num2);
  for(i=0;i<num2;i++){
    scanf("%d",&second[i]);
  }

  for(i=0;i<num2;i++){
    if(solve(0,second[i])){
	printf("yes\n");
      }else{
	printf("no\n");
      }
  }
  return 0;
}

/*
総当たり
数列の中の数字を組み合わせて一つ目の数列の中にある数字を使って二つ目の数列の数字を作ることができたらyes、できなかったらnoを出力
Input
5
1 5 7 10 21
8
2 4 17 8 22 21 100 35
Output
no
no
yes
yes
yes
yes
no
no
*/


