#include<bits/stdc++.h>
using namespace std;

struct Node{
     int data;
     struct Node *left;
     struct Node *right;

     Node(int val){
          data = val;
          left=NULL;
          right=NULL;

     }
};

vector<Node*> constructTress(int start,int end){
     vector<Node*> trees;
     if(start>end){
          trees.push_back(NULL);
          return trees;
     }

     for(int i=start;i<=end;i++){
          vector<Node*> leftSubtrees = constructTress(start,i-1);
          vector<Node*> rightSubtress =constructTress(i+1,end);


          for(int j=0;j<leftSubtrees.size();j++){
               Node*left = leftSubtrees[j];
               for(int k=0;k<rightSubtress.size();k++){
               Node * right = rightSubtress[k];
               Node*  node =new Node(i);
               node->left =left;
               node->right = right;
               trees.push_back(node);
               }
          }
     }
     return trees;
}
void preoder(Node*root){
     if(root!=NULL){
          cout<<root->data<<" ";
          preoder(root->left);
          preoder(root->right);
     }
}
int main(){
     vector<Node*> totalTress =constructTress(1,3);
     for(int i=0;i<totalTress.size();i++){
          cout<<(i+1)<<" : ";
          preoder(totalTress[i]);
          cout<<endl;
     }


return 0;
}