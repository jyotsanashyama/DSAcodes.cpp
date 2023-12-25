#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

    //parametrised constructor
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

void print(Node *head){
    Node *temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->"; //here data get printed
        temp=temp->next; //moving forward
    }
    cout<<"NULL"<<endl;
}

///FINDING NODE
bool isPresent(Node *head, int data){
    Node *curr=head;
    while(curr!=NULL){
        if(curr->data==data){
            return true;
        }
        curr=curr->next;
    }
    return false;
}
///FINDING NODE - RECURSION
bool findEelemnt(Node *head,int data){
    if(head==NULL) return false;
    if(head->data==data) return true;

    return findEelemnt(head->next, data);
}

Node* takeInput(){
    int data;
    cin>>data;
    Node *head=NULL; ///LL is empty in start
    Node *tail=NULL; ///LL is empty in start


    while(data!=-1){  ///creating LL
        Node *n=new Node(data);  ///calling the constructor  //n will store the address

        //checking 1st node
        if(head==NULL){
            head=n;
            tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }

        cin>>data;
    }
    return head;
}


int main(){
    Node *head=takeInput();
    int data;
    cin>>data;

    if(isPresent(head,data)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    ///recursive method
    if(findEelemnt(head,data)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
return 0;
}



