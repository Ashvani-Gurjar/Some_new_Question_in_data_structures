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
bool BinarySearch(Node *root,int key){
     if(root==NULL){
          return NULL;
     }
          if(root->data==key){
               return true;
          }
          else if(key>root->data){
             return   BinarySearch(root->right,key);
          }
          else{
             return   BinarySearch(root->left,key);
          }
     }


int main(){
     struct Node * root = new Node(3);
     root->left =new Node (2);
     root->right =new Node (5);
     root->left->left =new Node (1);
     root->right->left =new Node (4);
     root->right->right =new Node(6);
 
     int key =9;
    if(BinarySearch(root,key)){
     cout<<"Key-> "<<key<<" : is present in binary search tree"<<endl;
    }
    else{
     cout<<"Key don't exits"<<endl;
    }
    

return 0;
}