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

///LENGTH FROM RECURSION

int length(Node *head){
    if(head==NULL){
        return 0;
    }
    return 1+length(head->next);

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
    cout<<length(head)<<endl;
    print(head);

return 0;
}



