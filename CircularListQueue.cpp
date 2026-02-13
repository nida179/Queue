#include <iostream>
#include <stdlib.h>

struct Node {
    int data;
    Node *next;
};

Node *front = NULL;
Node *rear = NULL;

bool isEmpty(){
    if(front == NULL && rear== NULL){
        return true;
    }
    else return false;
}

void enqueue(int value){

    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = value;
    temp->next = NULL;

    if(front==NULL && rear ==NULL){
        front = rear = temp;
        temp->next = temp; //Points to itself
        return;
    }
    rear -> next =temp; // Old rear points to new Node (temp)
    temp -> next = front; // New node points to front (circular)
    rear = temp; // Move rear to new Node
}
void dequeue(){
    if(isEmpty()) return;
    if(front == rear){
        std::cout << "Dequeued: " << front->data << "\n";
        free(front);
        front = rear = NULL;
        return;
    }
    std::cout << "Dequeued: " << front->data << "\n";
    Node *curr = front; // store old front
    front = front->next; // move front
    rear->next = front; // Maintain circular link
    free(curr);  // delete old front

}
void display(){
    if(isEmpty()){
        std::cout << "Queue is Empty!!\n";
        return;
    } 
    Node *curr = front;
    do{
        std::cout << curr->data << " ";
        curr = curr->next;
    } while(curr!=front);
    std::cout << "\n";
}
int peek(){
    if(isEmpty()){
      //  std::cout << "Queue is Empty!!\n";
        return 0;
    } 
    return front->data;
}
int getSize(){
    if(isEmpty()){
       // std::cout << "Queue is Empty!!\n";
        return 0;
    } 
    int count =0;
    Node *curr = front;
    do{
        count++;
        curr = curr->next;
    }while(curr!=front);
    return count;
}
int main(){
     while(true){
   std::cout << "Select 1 to enqueue: \n";
   std::cout << "Select 2 to dequeue: \n";
   std::cout << "Select 3 to : display \n";
   std::cout << "Select 4 to : getSize \n";
   std::cout << "Select 5 to : peek \n";
   std::cout << "Select 6 to exit: \n";
    int choice;
   std::cin >> choice;

    switch(choice){

     case 1: {int data;
           std::cout << "Enter the value: ";
           std::cin >> data;
           enqueue(data);
           break;}
    case 2:
           dequeue();
           display();
           break;
     case 3: display();
     break;
     case 4: std::cout << getSize() << "\n";
     break;
     case 5: std::cout << peek() << "\n";
     break;

     case 6: std:: cout << "EXITING!!";
             break;
     default: std::cout << "Invalid choice\n";;
     }
     if(choice==6) break;
    }
    return 0;
}