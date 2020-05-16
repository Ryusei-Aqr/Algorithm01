#include<stdio.h>
#include<string.h>

#define M 1000000/* your task*/
#define L 14
#define true 1
#define false 0

char H[M][L]; /* Hash Table */

int getChar(char ch){
  if ( ch == 'A') {
      return 1;
  }
  else if ( ch == 'C') {
      return 2;
      }
  else if ( ch == 'G') {
      return 3;
  }
  else if ( ch == 'T') {
      return 4;
  }
}

/* convert a string into an integer value */
long long getKey(char str[]){
  long long sum = 0, p = 1, i;
  for ( i = 0; i < strlen(str); i++ ){
    sum += p*(getChar(str[i]));
    p *= 5;
  }
  return sum;
}

int h1(int key){ 
    return (key%M);
     }
int h2(int key){
     return 1+(key%(M-1))/* your task */;
      }

int find(char str[]){

    /* your task */
long long k,i,h;
k=getKey(str);
 i=0;
while(1){
    h=(h1(k)+i*h2(k))%M;
    if(strcmp(H[h],str)==0){
        return true;
    }else if(strlen(H[h])==0){
        return false;
    }
    i++;
}
return false;
}

int insert(char str[]){

    /* your task */
    long long k,i,h;
    k=getKey(str);
        i=0;
while(1){
        h=(h1(k)+i*h2(k))%M;
        if(strcmp(H[h],str)==0){
            return true;
        }else if(strlen(H[h])==0){
            strcpy(H[h],str);
            return false;
        }
        i++;
    }
return false;
}

int main(){
    int i, n, h;
    char str[L], com[9];
    for ( i = 0; i < M; i++ ) H[i][0] = '\0';
    
    scanf("%d", &n);
    
    for ( i = 0; i < n; i++ ){
	scanf("%s %s", com, str);
	
	if ( com[0] == 'i' ){
	    insert(str);
	} else {
	    if (find(str)){
		printf("yes\n");
	    } else {
		printf("no\n");
	    }
	}
    }

    return 0;
}

/*
辞書
insert で文字列を挿入して　findでその文字があればyesなければnoを出力
Input 
5
insert A
insert T
insert C
find G
find A
Output
no
yes
*/
