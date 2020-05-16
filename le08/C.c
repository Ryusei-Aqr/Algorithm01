#include<stdio.h>
#include<math.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
#define NIL NULL

Node root;

Node treeMinimum(Node x){
  while(x->left!=NIL){
    x=x->left;
  }
  return x;
  //ok
}

Node treeMaximum(Node x){
  while(x->right!=NIL){
    x=x->right;
  }
  return x;
  //ok
}

Node treeSearch(Node u, int k){
  if(u==NIL || k==u->key){
    return u;
  }
  if(k<u->key){
    return treeSearch(u->left,k);
      }
  else{
    return treeSearch(u->right,k);
      }
  //ok
}

Node treeSuccessor(Node x){
  Node y;
  
  if(x->right!=NIL){
    return treeMinimum(x->right);
      }
  y=x->parent;
  while(y!=NIL && x==y->right){
    x=y;
    y=y->parent;
  }
  return y;
}
//treeSearch(root,x)を使っているのでz==treeSearch
void treeDelete(Node z){
  Node y; // node to be deleted
  Node x; // child of y
  if(z->left == NIL || z->right == NIL){
    y=z;
  }else{
    //Treeに当たるものがないので書かないでやってみる
    y=treeSuccessor(z);
  }
  if(y->left !=NIL){
    x=y->left;
  }
  else{
    x=y->right;
  }
  if(x!=NIL){
    x->parent=y->parent;
  }
  if(y->parent==NIL){
    root=x;
  }else if(y==y->parent->left){
    y->parent->left=x;
  }else{
    y->parent->right=x;
  }
  if(y!=z){
    z->key=y->key;
  }
}

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x!=NIL){
    y=x;
    if(z->key < x->key){
      x=x->left;
    }else{
      x=x->right;
    }
  }
  z->parent=y;

  if(y==NIL){
    root=z;
  }else if(z->key < y->key){
    y->left=z;
  }else{
    y->right=z;
  }
}

void inorder(Node u){
  if(u!=NIL){
    inorder(u->left);
      printf(" %d",u->key);
    inorder(u->right);
  }
}
void preorder(Node u){
  if(u==NIL){
    return;
  }
    printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}


int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'f' ){
      scanf("%d", &x);
      Node t = treeSearch(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    } else if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if ( com[0] == 'd' ){
      scanf("%d", &x);
      treeDelete(treeSearch(root, x));
    }
  }

  return 0;
}
/*
insertで数字を入力 findで見つけ次第　あれば yesなければnoを出力
deleteでキーをもつ節点を削除する
printで中間順巡回と先行順巡回アルゴリズムで得られた結果を出力する
*/
