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


Node* insertAtithPos(Node *head,int i,int data){
    if(i<0){
        return head;
    }

    if(i==0){
        Node *n=new Node(data);
        n->next=head;
        head=n;
        return head;
    }
    Node* copyhead=head;
    int count=1;
    while(count<=i-1 && head!=NULL){ ///doing this step to go to the ith position
        head=head->next;
        count++;
    }
    if(head){
        Node *n=new Node(data);
        n->next=head->next;
        head->next=n;
        return copyhead;
    }
    return copyhead;
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
    int i,data;
    cin>>i>>data;
    head=insertAtithPos(head,i,data);
    print(head);

return 0;
}


