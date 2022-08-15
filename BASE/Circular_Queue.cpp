#include <bits/stdc++.h>
using namespace std;

//Circular Queue -> Can utilize the empty memory to fill elements which is not possible with simple Queue.
//Similar operations and principles followed by circular Queue.

#define SIZE 10

class Queue{
    private:
        int items[SIZE], front, rear;
    public:
        Queue(){
            front = -1;
            rear = -1;
        }

        bool isFull(){
            if(front == 0&&rear == SIZE-1){
                return 1;
            }else if(front == rear + 1){
                return 1;
            }else{
                return 0;
            }
        }

        bool isEmpty(){
            if(front == -1){
                return 1;
            }else{
                return 0;
            }
        }

        void Enqueue(int x){
            if(isFull()){
                std::cout << "Queue is Full" << std::endl;
            }else{
                if(front == -1){front = 0;}
                rear = (rear + 1) % SIZE;
                items[rear] = x;
                std::cout << "Item Inserted: "<<x<< std::endl;
                }
            }
    

        int Dequeue(){
            int e;
            if(isEmpty()){
                std::cout << "Queue is Empty" << std::endl;
                return -1;
            }else{
                e = items[front];
                if(front == rear){ //Queue has only one element so reset the Queue
                    front = -1;
                    rear = -1;
                }else{
                    front = (front + 1)% SIZE;
                }
                return e;
            }
        }

        void display(){
            if(isEmpty()){
                std::cout << "Queue is Empty" << std::endl;
            }else{
                for (int i = front ; i != rear; i = (i + 1)%SIZE)
                {
                    std::cout << items[i] <<"->";   
                }std::cout<<items[rear]<<std::endl;
            }
        }
};

int main(){

    Queue q;

    q.Dequeue();

    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);
    q.Enqueue(6);
    q.Enqueue(7);
    q.Enqueue(8);
    q.Enqueue(9);
    q.Enqueue(10);

    q.display();

    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();

    q.Enqueue(11);
    q.Enqueue(12);
    q.Enqueue(13);
    q.Enqueue(14);

    q.isFull();
    q.display();

    q.Dequeue();

    q.display();

    return 0;
}

