#include<iostream>

using namespace std;
#define MAX 6

    int queue[MAX];
    int front=0,rear = -1,itemCount = 0;
    
    
    bool isFull(){
        return itemCount == MAX;
    }

    bool isEmpty(){
        return itemCount == 0;
    }

    int removeData(){
        int data = queue[front++];
        if(front == MAX) {
            front = 0;
        }
        itemCount--;
        return data;
    }
    void insert(int data){
        if(!isFull()) {
            if(rear == MAX-1) {
                rear = -1;
            }
            intArray[++rear] = data;
            itemCount++;
        }
    }

int main(){
   insert(3);
   insert(5);
   insert(9);
   insert(1);
   insert(12);
   insert(15);
   printf("Queue: ");
   while(!isEmpty()) {
      int n = removeData();
      printf("%d ",n);
   }
}


