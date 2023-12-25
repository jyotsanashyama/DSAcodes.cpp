#include <iostream>
using namespace std;

///inserting all nodes at the head

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


//length
int length(Node *head){
    int count=0;
    while(head){
        count++;
        head=head->next;
    }
    return count;

}

void printIthNode(Node *head,int i){
    //int n=length(head);
    if(i<=0){
        cout<<"-1"<<endl;
        return;
    }
    int count=1;
    while(count<=i && head!=NULL){
        head=head->next;
        count++;
    }
    if(head){
    cout<<head->data<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
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
            n->next=head;  ///inserting data at the head
            head=n;
        }

        cin>>data;
    }
    return head;
}


int main(){
    Node *head=takeInput();
    int i;
    cin>>i;
    printIthNode(head,i);

return 0;
}

