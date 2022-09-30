TreeNode* solve(vector<int>& v, int l, int r){
  if(l>r){
    return NULL;
  }
  int m = (l+r)/2;
  TreeNode* root = new TreeNode(v[m]);
  root->left = solve(v, l, m-1);
  root-> right = solve(v, m+1,r);
  return root;
}

TreeNode *BSTFromInorder(vector<int> &inorder)
{
  return solve(inorder, 0, inorder.size()-1);
}
