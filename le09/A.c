#include<stdio.h>
#define max 100000
int high;

double parent(int h){
    return h/2;
}
int left(int i){
    return 2*i;
}
int right(int i){
    return 2*i+1;
}

int main(){
    int A[max+1],i,p,r,l;
    scanf("%d",&high);
    //二分岐には0が存在しないので１から始める
    for(i=1;i<=high;i++){
        scanf("%d",&A[i]);
    }
    for(i=1;i<=high;i++){
        printf("node %d: key = %d, ",i,A[i]);
        if((p=parent(i)) >= 1){
             printf("parent key = %d, ",A[p]);
        }
        if((l=left(i))<= high){
            printf("left key = %d, ",A[l]);
        }else{
            //printf("\n");
        }
         if((r=right(i)) <= high){
            printf("right key = %d, \n",A[r]);
        }else{
            printf("\n");
        }
    }
    return 0;
}

/*
完全二分木
入力
5
7 8 1 2 3
出力
node 1: key = 7, left key = 8, right key = 1, 
node 2: key = 8, parent key = 7, left key = 2, right key = 3, 
node 3: key = 1, parent key = 7, 
node 4: key = 2, parent key = 8, 
node 5: key = 3, parent key = 8, */
