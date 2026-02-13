#include <iostream>
#include <stdlib.h>
int A[10];
int front = -1;
int rear = -1;

bool isEmpty(){
    if(front == -1 && rear == -1){
        return true;
    }
    else return false;
}
void enqueue(int value){
    if(isEmpty()){
        front =0;
        rear = 0;
        A[rear] = value;
    } else {
        rear++;
        A[rear] = value;
    }
}
int dequeue(){
    if(isEmpty()){
        return -1;
    }
    else if(front == rear){
        int temp = A[front];
        front = -1;
        rear = -1;
        return temp;
    } else {
        return A[front++];
    }
}
void display(){
    for(int i=front ;i<= rear ;i++){
        std::cout << A[i] << " ";
    }
    std::cout << "\n";
}
int peek(){
    if(front == -1 && rear == -1){
        return -1;
    }
    return A[front];
}
int getSize(){
    int count;
    for(int i=front ;i<=rear;i++){
        count++;
    }
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