#include<bits/stdc++.h> // header file
using namespace std;

struct Node{  // structre to create a node or a block of a linked list
    int data; // data variable: to store the data/value
    Node *next; // pointer to store the address of next node or element
};

class Linked_List{  // class keyword is used to create a class. A class is a blue print or layout of the object.
    Node *A;     // private member of the class, if you don't specify it is automatically treated as a private member
    public:      // public access specifier. access specifier: it defines the scope of the class and its members.
        Linked_List(){   // constructor: Constructor has the same name as the class.
            
            A=NULL;    // It is called automatically, whenever an instance(object) of the class is created.
                        //It's job is to allocate memory to the object and initialize the data members of the object to legal initial values.
        }          
        void InsertAtBegening();   // Member functions declarations
        void InsertAtEnd();
        void InsertAt_n();
        //void DeleteFromEnd();
        //void DeleteFromStart();
        //void DeleteAt_n();
        //void Reverse();
        //void ReverseUsingRecursion();
        void Display();
        //void DisplayUsingRecursion();
        //void DisplayInReverse();

        ~Linked_List();    // Destructor: A destructor function is used to destroy the objects that have been created by the constructor function.

};

void Linked_List::InsertAtBegening(){ // we use scope resolution operator to define the member function of a outside of the class
    Node *temp= new Node(); // created a new node as temp
    cout<<"Enter data:";  //message
    cin>>temp->data;     // taking data as input and storing it in temp 
    temp->next=A;         //assiging current address in next of temp 
    A=temp;   // assign the values of temp to A, where A is pointer
}

void Linked_List:: Display(){
    Node *temp=A;       //assigning the values of A to temp
    while(temp!=NULL){  // continue traversing untill temp reaches the end of the list
        cout<<temp->data<<" ";  // printing the data on the output screen
        temp=temp->next;      // assigning address of the next node at each traversal
    }
    cout<<endl;
}

void Linked_List::InsertAtEnd(){
    Node *temp=new Node();
    Node *temp1=A;
    cout<<"Enter data:";
    cin>>temp->data;
    temp->next=NULL;
    if(A==NULL){
        A=temp;
        return;
    }
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;
}

void Linked_List::InsertAt_n(){
    
}

Linked_List::~Linked_List(){ // for destroying temp
    while(A!=NULL){
        Node *temp=A;
        A=A->next;
        delete temp;
    }
}

int main(){   // main function: where the execution of the program start
    Linked_List L;   // Creating the object or instance of the class Linked_List as L
    int ch;    // declare a variable ch
    do{
        cout<<"Main Menu";    // Menu driven program
        cout<<"\n1. Insert Element at Begining";
        cout<<"\n2. Insert Element at End";
        cout<<"\n3. Display Link List";
        cout<<"\n4. Exit";
        cout<<"\nEnter your choice:";
        cin>>ch;   // entering the choice for the action to be performed
        switch (ch){
            case 1: L.InsertAtBegening();  // call to function
                    break;
            case 2: L.InsertAtEnd();
                    break;
            case 3: L.Display();   //function call
                    break;
            case 4: exit(0); // to exit the loop
        }
    }while(1);
}