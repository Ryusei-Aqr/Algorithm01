#include<stdio.h>
#define max 500000
int size,A[max];

int RIGHT(int i){
    return 2*i;
}
int LEFT(int i){
    return 2*i+1;
}
//配列を関数で渡すのはややこしくなるからしない
void maxheapify(int i){
    int left,right,largest;
    left=LEFT(i);
    right=RIGHT(i);
    if(left<=size && A[left]>A[i]){
        largest=left;
        }else{
            largest=i;
        }
    if(right<=size && A[right]>A[largest]){
        largest=right;
    }
    if(largest!=i){
        //swap
        int temp=0;
        temp=A[i];
        A[i]=A[largest];
        A[largest]=temp;
        maxheapify(largest);
    }
}
/*
void buildmaxheap(A){
    int i;
    for(i=size/2;i>0;i--){
        maxheapify(A,i);
    }
}*/
/*
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}*/
int main(){
    int i;
    scanf("%d",&size);
    for(i=1;i<=size;i++){
        scanf("%d",&A[i]);
    }
     for(i=size/2;i>0;i--){
        maxheapify(i);
    }
    for(i=1;i<=size;i++){
      printf(" %d",A[i]);
        if(size==i){
            printf("\n");
        }
    }
    return 0;
}
/*
最大ヒープ
節点キーがその親のキー以下
の条件をみたす
入力
10
4 1 3 2 16 9 10 14 8 7
出力
16 14 10 8 7 9 3 2 4 1*/
