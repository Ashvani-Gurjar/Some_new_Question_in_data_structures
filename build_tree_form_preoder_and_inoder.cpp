#include<bits/stdc++.h>
using namespace std;

struct Node{
      int data;
      struct Node *left;
      struct Node *right;

      Node(int val){
          data=val;
          left=NULL;
          right=NULL;
      }
};
int search(int inoder[], int start,int end,int curr){
     for(int i=start;i<=end;i++){
          if(inoder[i]==curr){
               return i;
          }
     }
     return -1;
}

Node* buildtrees(int preoder[],int inorder[],int start ,int end){
  static int idx = 0;
  if(start>end){
     return NULL;
  }

  int curr =preoder[idx];
  idx++;
  Node* node =new Node(curr);
 if(start==end){
     return node;
 }
  int pos = search(inorder,start ,end,curr);
  node->left = buildtrees(preoder,inorder ,start, pos-1);
  node->right = buildtrees(preoder,inorder, pos+1,end);

 return node;
}


 void inodersearch(Node*root){
     if(root!=NULL){
          inodersearch(root->left);
          cout<<root->data<<" ";
          inodersearch(root->right);
     }
 }


int main(){
     int preoder[]= {1,2,4,3,5};
     int inorder[]= {4,2,1,5,3};
   Node *root = buildtrees(preoder,inorder,0,4);
   inodersearch(root);

return 0;
}