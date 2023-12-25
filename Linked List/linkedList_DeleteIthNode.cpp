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


///WITH MEMORY LEAK PROBLEM
Node* deleteIthNode(Node* head, int i){
    if(i<0){
        return head;
    }
    if(i==0 && head){ ///to delete first node i.e, head
        return head->next;
    }

    Node* curr=head;
    int count=1;
    while(count<i-1 && curr!=NULL){ ///taking the pointer towards i-1 position
        curr=curr->next;
        count++;
    }
    if(curr && curr->next){  ///checking if next of input node exists or not
        curr->next=curr->next->next;
        return head;
    }
    return head;
}


///WITHOUT MEMORY LEAK PROBLEM

Node* deleteIthNode2(Node* head, int i){
    if(i<0){
        return head;
    }
    if(i==0 && head){ ///to delete first node i.e, head
        Node* newHead=head->next;
        head->next=NULL;
        delete head;
        return newHead;
    }

    Node* curr=head;
    int count=1;
    while(count<i-1 && curr!=NULL){ //taking the pointer towards i-1 position
        curr=curr->next;
        count++;
    }
    if(curr && curr->next){  ///checking if next of input node exists or not
        Node* temp=curr->next;
        curr->next=curr->next->next;
        temp->next=NULL;
        delete temp;
        return head;
    }
    return head;
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
    int i;
    cin>>i;
    head=deleteIthNode(head,i);
    print(head);
    head=deleteIthNode2(head,i);
    print(head);

return 0;
}



