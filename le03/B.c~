#include<stdio.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int time;
}P;

P Q[LEN+1];
int head, tail, n;

void enqueue(P x){
  Q[tail]=x;
  tail=(tail+1)%LEN;
  }

P dequeue(){
    P d;
    d=Q[head];
    head=(head+1)%LEN;
    return d;
}

void initialize(){
  head=tail=0;
}



int main(){
  int elaps = 0, c;
  int i, q;
  P deq;
  //プロセスの数と実行時間を入力
  scanf("%d %d", &n, &q);
    head=1;
    tail=n+1;
  //各プロセスとそれぞれの実行時間
  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].time);
  }

  while(head!=tail){
  deq=dequeue();
  if(q<deq.time){
      c=q;
  }else{
      c=deq.time;
  }
  deq.time-=c;
  elaps+=c;
  if(deq.time>0){
      enqueue(deq);
  }else{
      printf("%s %d\n",deq.name,elaps);
  }
  }

  
  return 0;
}

/*
ラウンドロビンスケジューリング
入力
5 100
p1 150
p2 80
p3 200
p4 350
p5 20
出力
p2 180
p5 400
p1 450
p3 550
p4 800
*/
