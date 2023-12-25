#include <iostream>
using namespace std;

///inserting all nodes at the end

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

///this code will work if ll is not starting from 1, when 1 is entered it will stop taking more input and hence will print NULL
Node* takeInput(){
    int data;
    cin>>data;
    Node *head=NULL; ///LL is empty in start
    Node *tail=NULL; ///LL is empty in start


    while(data!=1){  ///creating LL
        Node *n=new Node(data);  ///calling the constructor  //n will store the address

        //checking 1st node
        if(head==NULL){
            head=n;
            tail=n;
        }
        else{
            tail->next=n;  ///inserting data at the end
            tail=n;
        }

        cin>>data;
    }
    return head;
}

int main(){
    Node *head=takeInput();
    print(head);

return 0;
}

