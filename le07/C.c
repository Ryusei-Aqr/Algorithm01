#include<stdio.h>

typedef struct{
  int parent,left,right;
}node;
struct node tree[100000];

int num;

int main(){
  int i,a,left,right,root;
  //節点の個数
  scanf("%d",&num);
  //初期化
  for(i=0;i<num;i++){
    tree[i].parent= -1;
  }
  //節点番号、左側、右側
  for(i=0;i<num;i++){
    scanf("%d%d%d",&a,&left,&right);
    tree[a].left=left;
    tree[a].right=right;
    if(left!=-1){
      tree[left].parent=a;
    }
    if(right!=1){
      tree.[right].parent=a;
    }
  }

  for(i=0;i,num;i++){
    if(tree.[i]==-1){
      root=-1;
    }
    printf("");
  }
  return 0;
}
