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
Node * inodersuccer(Node *root){
     Node *curr =root;
     while(curr && curr->left){
          curr=curr->left;
     }
     return curr;
}
// case 1 Deleting node
Node * DeleteinBST(Node* root ,int key){

       if(key<root->data){
          root->left =DeleteinBST(root->left,key);

       }
       else if(key>root->data){
          root->right = DeleteinBST(root->right ,key);
       }
    else{
        if(root->left==NULL){
          Node *temp =root->right;
          free(root);
          return temp;
        }
       else if(root->right==NULL){
          Node *temp =root->left;
          free(root);
          return temp;
        }
        
        Node *temp =inodersuccer(root->right);
        root->data =temp->data;
        root->right = DeleteinBST(root->right ,temp->data);
        
    }
       return root;

}

void inoder(Node *root){
     if(root!=NULL){
          inoder(root->left);
          cout<<root->data<<" ";
          inoder(root->right);
     }
}
int main(){
     struct Node * root = new Node(3);
     root->left =new Node (2);
     root->right =new Node (5);
     root->left->left =new Node (1);
     root->right->left =new Node (4);
     root->right->right =new Node(6);
 
      inoder(root);
      cout<<endl;
     root = DeleteinBST(root,1);
      inoder(root);

    

return 0;
}