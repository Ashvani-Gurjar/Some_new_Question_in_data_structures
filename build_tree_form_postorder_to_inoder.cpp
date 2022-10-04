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
int search(int inorder[],int start,int end ,int val){
     for(int i=start;i<=end;i++){
          if(inorder[i]==val){
               return i;
          }
     }
     return -1;
}
Node *buildtrees(int postoder[] , int inorder[] ,int start,int end){
     static int idx =4;
     if(start >end){
          return NULL;
     }

     int val = postoder[idx];
     idx--;
     Node* curr =new Node(val);
     if(start == end){
          return curr;
     }

     int pos =search(inorder,start,end,val);
     curr->right = buildtrees(postoder ,inorder ,pos+1,end);
     curr->left = buildtrees(postoder ,inorder ,start, pos -1);

     return curr;
}
void inodersearch(Node*root){
     if(root!=NULL){
          inodersearch(root->left);
          cout<<root->data<<" ";
          inodersearch(root->right);
     }
 }
int main(){
     int postoder[]={4,2,5,3,1};
     int inorder[] ={4,2,1,5,3};
 
 Node * node =buildtrees(postoder,inorder,0,4);
   inodersearch(node);


return 0;
}