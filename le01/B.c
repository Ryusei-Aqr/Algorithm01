#include<stdio.h>
int gcd(int,int);
void swap(int *,int *);

int main(){
  int x,y,g=0;
  scanf("%d%d",&x,&y);
  g=gcd(x,y);
  printf("%d\n",g);
  return 0;
}

int gcd(int a,int b){
  int c;
  if(a<b){
    swap(&a,&b);
  }
    while(b>0){
      c=a%b;
      a=b;
      b=c;
    }   
  return a;
}

  void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
  }
/*
この問題は最大公約数を求める問題
入力
５４　２０
出力
２
*/
