#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class List{
    Node* head;
    Node* tail;
public:
    List(){
        head=tail=NULL;
    }
    void push_front(int val){ //O(1)
        Node* newnode=new Node(val);
        // Node* newnode(val); //create a static obj
        //case 1: empty node
        if(head==NULL){
            head=tail=newnode;
        }
        else{  //case 2: not empty
            newnode->next=head;
            head=newnode; 

        }
    }
    void push_back(int val){ //O(1)
        Node* newnode=new Node(val);

        if(head==NULL){
            head=tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    void pop_front(){ //O(1)
        if(head==NULL){
            cout<<"LL is empty.\n";
            return;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    void pop_back(){ //O(n)
        if(head==NULL){
            cout<<"LL is empty\n";
            return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    void insertAtMiddle(int val,int pos){ //O(n)
        if(pos<0){
            cout<<"Invalid pos.\n";
        }
        if(pos==0){
            push_front(val);
            return;
        }
        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"INvalid pos\n";
                return;
            }
            temp=temp->next;
        }
        Node* newnode=new Node(val);
        newnode->next=temp->next;
        temp->next=newnode;
    }
    int search(int key){ //O(n)
        Node* temp=head;
        int idx=0;

        while(temp!=NULL){
            if(temp->data==key){
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;
    }
    void printLL(){ //O(n)
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printLL();
    ll.insertAtMiddle(4,1);
    ll.printLL();
    cout<<ll.search(2)<<endl; 
    return 0;
}