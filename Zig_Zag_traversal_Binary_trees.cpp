#include<bits/stdc++.h>
using namespace std;

struct Node {
     int data;
     struct Node*left;
     struct Node *right;

     Node(int val){
          data =val;
          left=NULL;
          right=NULL;
 }
};
void zigzagTraversal(Node *root ){

     if(root==NULL){
          return ;
     }

     stack<Node*> currentlevel;
     stack<Node*> nextlevel;

     bool leftToright =true;

     currentlevel.push(root);
     while(!currentlevel.empty()){
          Node* temp = currentlevel.top();
          currentlevel.pop();

          if(temp!=NULL){
               cout<<temp->data<<" ";
           
               
          if(leftToright){
               if(temp->left){
                    nextlevel.push(temp->left);

               }
               if(temp->right){
                    nextlevel.push(temp->right);
               }
          }

          else{
               if(temp->right){
                    nextlevel.push(temp->right);
               }
               if(temp->left){
                    nextlevel.push(temp->left);
               }
            }
          }
         if(currentlevel.empty()){
          leftToright = !leftToright;
          swap(currentlevel,nextlevel);
         }
     }

}
int main(){
     struct Node * root = new Node(12);
     root->left =new Node (9);
     root->right =new Node (15);
     root->left->left =new Node (5);
     root->left->right =new Node(10);
     root->right->left =new Node (6);
     root->right->right =new Node(7);

     zigzagTraversal(root);
        cout<<endl;

return 0;
}