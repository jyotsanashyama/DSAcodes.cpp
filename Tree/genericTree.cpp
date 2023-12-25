#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T>
class TreeNode{
public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data){  //constructor
        this->data = data;
    }

    ~TreeNode(){  ///destructor for deleting the tree
        for(int i=0;i<children.size();i++){
            delete children[i];
        }
    }
};

///in this recursion, leaf nodes are working as base case, so no need to write the base case
///leaf nodes are the nodes that does not have any children
void printTree(TreeNode<int>* root){

    if(root==NULL){ ///EDGE CASE NOT A BASE CASE
        return;
    }

    cout<<root->data<<": ";
    for(int i=0;i<root->children.size();i++){ ///printing all the children of root and each subroot
        cout<<root->children[i]->data<<", ";
    }
    cout<<endl;

    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);  ///will return to the root if next children is not available
    }

}

///taking input using recursion
///user must know recursion to give input
///as it is quite complex to give inputs in this method
TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter data: "<<endl;
    cin>>rootData;
    TreeNode<int>* root= new TreeNode<int>(rootData);///constructor ///will enter the root data
    ///no of children
    int n;
    cout<<"Enter num of children of "<<rootData<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        TreeNode<int>* child = takeInput();  ///calling recursion
        root->children.push_back(child);  ///connection between child and root get stablished
    }
    return root;
}

TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data: "<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> q;
    q.push(root);

    ///create node, push node, make connection, delete node
    while(!q.empty()){
        TreeNode<int>* f = q.front(); ///node of which child is entered
        q.pop(); ///remove 1st node and then enter its children

        cout<<"Enter no. of children of "<<f->data<<endl;  ///f->data is the 1st node
        int n;
        cin>>n;

        ///loop will run only if there is at least one child
        for(int i=1;i<=n;i++){
            int childData;
            cout<<"Enter "<<i<<"th child of "<<f->data<<endl;
            cin>>childData;

            TreeNode<int>* child = new TreeNode<int> (childData); ///making the node of child
            q.push(child);
            f->children.push_back(child);  ///making the connection with its parent
        }
    }
    return root;
}

void printTreeLevelWise(TreeNode<int>* root){
    queue<TreeNode<int>*>  q;
    q.push(root);
    while(!q.empty()){
        TreeNode<int>* f = q.front();
        q.pop();

        cout<<f->data<<": ";
        for(int i=0;i<f->children.size();i++){ ///printing all the children of root and each subroot
        cout<<f->children[i]->data<<", ";
    }
    cout<<endl;

    ///go to the children entered and then puss them inside queue and run while loop again from start
    for(int i=0;i<f->children.size();i++){
        q.push(f->children[i]);
    }
    }
}

int countNodes(TreeNode<int>* root){
    if(root==NULL){ ///edge case
        return 0;
    }
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        ans+=countNodes(root->children[i]);
    }
    return ans;
}

int height(TreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    int max=0;  ///maximum height
    for(int i=0;i<root->children.size();i++){
        int childHeight = height(root->children[i]);
        if(childHeight > max){
            max = childHeight;
        }
    }
    return max = 1;
}

void printAtLevelK(TreeNode<int>* root, int k){
    if(root == NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<endl;
        return;
    }
    for(int i=0;i<root->children.size();i++){
        printAtLevelK(root->children[i],k-1);
    }
}

int countLeafNodes(TreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    if(root->children.size()==0){
        return 1;
    }
    int ans=0;
    for(int i=0;i<root->children.size();i++){
        ans+=countLeafNodes(root->children[i]);
    }
    return ans;
}

void countLeafNodes2(TreeNode<int>* root, int &ans){
    if(root->children.size()==0){
        ans++;  ///whenever leaf is encountered, do ans++
        return;
    }
    for(int i=0;i<root->children.size();i++){
        countLeafNodes2(root->children[i], ans);
    }
}



void preOrder(TreeNode<int>* root){
    if(root==NULL){  ///edge case
        return;
    }
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++){
        preOrder(root->children[i]);
    }
}


void postOrder(TreeNode<int>* root){
    if(root==NULL){  ///edge case
        return;
    }
    for(int i=0;i<root->children.size();i++){
        postOrder(root->children[i]);
    }
    cout<<root->data<<" ";
}

void deleteTree(TreeNode<int>* root){
    if(root==NULL){
        return;
    }
    for(int i=0;i<root->children.size();i++){
        deleteTree(root->children[i]);
    }
    delete root;
}

int main(){
/*
TreeNode<int>* root = new TreeNode<int>(1);  ///creating the root by calling constructor
TreeNode<int>* n1 = new TreeNode<int>(2);  ///creating nodes by calling constructor
TreeNode<int>* n2 = new TreeNode<int>(3);  ///" "

///making the connection
root->children.push_back(n1);  ///pushing the address of n1 to root pointer
root->children.push_back(n2);  ///pushing the address of n2 to root pointer
*/

TreeNode<int>* root = takeInputLevelWise();
//printTree(root);
//printTreeLevelWise(root);
//cout<<countNodes(root)<<endl;
//cout<<height(root)<<endl;
printAtLevelK(root, 2);
cout<<"No of leaf nodes: "<<countLeafNodes(root)<<endl;

int totalLeafNodes = 0;
countLeafNodes2(root, totalLeafNodes);
cout<<"No of leaf nodes in other way: "<<totalLeafNodes<<endl;

cout<<"PreOrder Traversal;"<<endl;
preOrder(root);

cout<<endl;

cout<<"PostOrder Traversal;"<<endl;
postOrder(root);

deleteTree(root);

///delete root;  ///this will call the destructor to delete the tree

return 0;
}
