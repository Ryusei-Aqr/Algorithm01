#include<stdio.h>

int main(){
    int i,j,k,num1,first[10000],num2,second[10000],same=0;
    //一つ目の数列
    scanf("%d",&num1);
    for(i=0;i<num1;i++){
        scanf("%d",&first[i]);
    }
/*
    //デバッグ
    for(int i=0;i<num1;i++){
        printf("%d ",first[i]);
    }
    */

    //二つ目の数列
    scanf("%d",&num2);
    for(i=0;i<num2;i++){
        scanf("%d",&second[i]);
    }
    /*
     //デバッグ
    for(i=0;i<num2;i++){
        printf("%d",second[i]);
    }
    printf("\n");
    */
    if(num2<num1){
     for(j=0;j<num2;j++){
         for(k=0;k<num1;k++){
           if(first[k]==second[j]){
                   same++;
                   break;
               }
           }
         }
    }else if(num2>num1){
         for(j=0;j<num1;j++){
           for(k=0;k<num2;k++){
             if(first[j]==second[k]){
                   same++;
                   break;
               }
           }
         }
     }
    printf("%d\n",same);

    return 0;
}

/*
リニアサーチ
二つの数列の中から同じ数字を読み込んで、その数を出力する
入力
5
1 2 3 4 5
3
3 4 1
出力
3

When I must use FilePoint.

FILE *fp;
fp=fopen("file_name","r");
while(fscanf(fp,"%d",&num!=EOF)
int c;
while((c=fgets(fp))!=NULL)
count++;

*/


