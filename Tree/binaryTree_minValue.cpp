#include<iostream>
#include<queue>
using namespace std;

template <typename T>
class BTNode{
public:
    T data;
    BTNode* left;
    BTNode* right;

    BTNode(T data){
        this->data=data;
        left=NULL;
        right=NULL;
    }

    ///recursive destructor
    ///delete left child, then right child then at last delete root
    ~BTNode(){
        delete left;
        delete right;

    }
};

BTNode<int>* takeInput(){
    int rootData;
    cout<<"Enter data: "<<endl;
    cin>>rootData;

    if(rootData==-1){
        return NULL;
    }
    BTNode<int>* root=new BTNode<int>(rootData); ///creating node with the given data
    ///making connection with the root
    root->left=takeInput();
    root->right=takeInput();


    return root;
}

BTNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data: "<<endl;
    cin>>rootData;
    BTNode<int>* root=new BTNode<int>(rootData);
    queue<BTNode<int>*> q;
    q.push(root);

    while(!q.empty()){
        BTNode<int>* f = q.front();
        q.pop();

        cout<<"Enter the left child of "<<f->data<<endl;
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData!=-1){
            BTNode<int>* child=new BTNode<int>(leftChildData);///create
            q.push(child);///push
            f->left=child;///connect
        }
        cout<<"Enter the right child of "<<f->data<<endl;
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData!=-1){
            BTNode<int>* child=new BTNode<int>(rightChildData);///create
            q.push(child);///push
            f->right=child;///connect
        }
    }
    return root;
}

void printTree(BTNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<": ";
    if(root->left!=NULL){
        cout<<"L- "<<root->left->data<<", ";
    }
    if(root->right!=NULL){
        cout<<"R- "<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}

int minValue(BTNode<int>* root){
    if(root==NULL){
        return INT_MAX;
    }
    int leftMin=minValue(root->left);
    int rightMin=minValue(root->right);

    return min(root->data, min(leftMin, rightMin));
}

void minValue2(BTNode<int>* root, int &ans){
    if(root==NULL){
        return;
    }
    ans=min(ans, root->data);
    minValue2(root->left, ans);
    minValue2(root->right, ans);
}

int maxValue(BTNode<int>* root){
    if(root==NULL){
        return INT_MIN;
    }
    int leftMax=maxValue(root->left);
    int rightMax=maxValue(root->right);

    return max(root->data, max(leftMax, rightMax));
}

int countLeaf(BTNode<int>* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    return countLeaf(root->left) + countLeaf(root->right);
}

int main(){
//BTNode<int>* root=takeInput();
BTNode<int>* root=takeInputLevelWise();

printTree(root);
cout<<"Min value: "<<minValue(root)<<endl;

cout<<"Min value other way: ";
int minVal=INT_MAX;
minValue2(root, minVal);  ///passing by reference
cout<<minVal<<endl;;

cout<<"Max value: "<<maxValue(root)<<endl;

cout<<"No. of leaf nodes: "<<countLeaf(root)<<endl;

delete root;

return 0;
}
