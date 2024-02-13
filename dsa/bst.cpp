#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
        this->data=value;
        this->left=NULL;
        this->right=NULL;
    }
};


Node* insertIntoBST(Node* root, int data)
{
    if(root==NULL)
    {
        root=new Node(data);
        return root;
    }

    // its not the first node
    if(data>root->data)
    {
        root->right=insertIntoBST(root->right,data);
    }

    else{
        root->left=insertIntoBST(root->left,data);
    }

    return root;
}



void createBST(Node* &root)
{
    cout<<"Enter data:"<<endl;
    int data;
    cin>>data;

    while(data!=-1)
    {
        root=insertIntoBST(root,data);
        cout<<"Enter data:"<<endl;
        cin>>data;
    }
}



void levelOrderTraversal(Node* root)
{
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();

        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            } 
        }

        else{
            cout<<temp->data<<" ";
            if(temp->left!=NULL)
            {
                q.push(temp->left);
            }

            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }
        }
    }

}


void preorder(Node* root)
{
    // nlr
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


void inorder(Node* root)
{
    // lnr
    if(root==NULL)
    return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root)
{
    // lrn
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}



int main()
{
    Node* root=NULL;
    createBST(root);

    levelOrderTraversal(root);
    cout<<endl<<"Inorder:";
    inorder(root);
    cout<<"Preorder:";
    preorder(root);
    cout<<"PostOrder:";
    postorder(root);

    return 0;
}