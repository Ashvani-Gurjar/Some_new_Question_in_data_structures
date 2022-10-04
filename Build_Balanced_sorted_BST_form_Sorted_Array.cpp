#include<bits/stdc++.h>
using namespace std;

struct Node{
     int data;
      Node *left;
      Node *right;

     Node(int val){

          data = val;
          left = NULL;
          right = NULL;
     }    
};

Node * sortedArrayToBST(int arr[],int start,int end){

     if(start>end){
          return NULL;
     }
     int mid =(start+end)/2;
     Node *root =new Node(arr[mid]);

     root->left = sortedArrayToBST(arr,start,mid-1);
     root->right =sortedArrayToBST(arr,mid+1,end);

     return root;
}
void preoder(Node *root){
     if(root!=NULL){
          cout<<root->data<<" ";
          preoder(root->left);
          preoder(root->right);
     }
}

int main(){
       int arr[] ={10,20,30,40,50};
       Node *root =sortedArrayToBST(arr,0,4);
       preoder(root);

return 0;
}