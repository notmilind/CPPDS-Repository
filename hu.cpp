#include <iostream>  
using namespace std;
class Node{
    public:
        int data;
        Node*next;                                     
        Node(){
            data=0;
            next= NULL;
        }

};

Node* head;

int insertAtbeginning(int data)
    {
        Node*newNode=new Node;
        newNode->data=data;
        newNode->next=head;
        head=newNode;

    }
int main()
    {
  
    Node*newNode1=new Node;
    newNode1->data = 10;
    Node*newNode2=new Node;
    newNode2->data=20;
    Node*newNode3=new Node;
    newNode3->data=30;
    newNode1->next=newNode2;
    newNode2->next=newNode3;

    cout<<"data1    "<< newNode1->data << " self address1   "<< newNode1 <<"    Next Address    "<<newNode1->next<<endl;
    cout<<"data2    "<< newNode2->data << " self address2   "<< newNode1 <<"    Next Address    "<<newNode2->next<<endl;
    cout<<"data3    "<< newNode3->data << " self address3   "<< newNode1 <<"    Next Address    "<<newNode3->next<<endl;

    cout<<endl;
    cout<<"Printing through loop"<<endl;
    cout<<endl;

    Node*temp=head;
    while(temp=NULL){
        cout<<"data"<<temp->data<<"self address1"<<temp<<"next address"<<temp->next<<endl;
        temp=temp->next;
    }
    return 1;
    }