class BSTIterator {
public:
    stack<TreeNode*>myStack;
    void pushAll(TreeNode* root){
        while(root){
            myStack.push(root);
            root=root->left;
        }
    }
    
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    int next() {
        TreeNode* temp=myStack.top();
        myStack.pop();
        pushAll(temp->right);
        return temp->val;
    }
    
    bool hasNext() {
        if(myStack.empty())
            return false;
        else
            return true;
    }
};
