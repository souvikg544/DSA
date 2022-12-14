#include <bits/stdc++.h>
using namespace std;
struct node {
   public:
      int data;
      node* left;
      node* right;
};
int getWidth(node* root, int level);
int height(node* node);
node* newNode(int data);
int getMaxWidth(node* root){
   int maxWidth = 0;
   int width;
   int h = height(root);
   int i;
   for (i = 1; i <= h; ++i) {
      width = getWidth(root, i);
      if (width > maxWidth) {
         maxWidth = width;
      }
   }
   return maxWidth;
}
int getWidth(node* root, int level){
   if (root == NULL) {
      return 0;
   }
   if (level == 1) {
      return 1;
   }
   else if (level > 1) {
      return getWidth(root->left, level - 1) + getWidth(root->right, level - 1);
   }
}
int height(node* node){
   if (node == NULL) {
      return 0;
   }
   int lHeight = height(node->left);
   int rHeight = height(node->right);
   return (lHeight > rHeight)? (lHeight + 1): (rHeight + 1);
}
node* newNode(int data){
   node* Node = new node();
   Node->data = data;
   Node->left = NULL;
   Node->right = NULL;
   return(Node);
}
int main(){
   node *root = newNode(10);
   root->left = newNode(7);
   root->right = newNode(4);
   root->left->left = newNode(9);
   root->left->right = newNode(2);
   root->right->right = newNode(1);
   root->right->right->left = newNode(2);
   root->right->right->right = newNode(5);
   cout<<"Maximum width = " << getMaxWidth(root) << endl;
   return 0;
}