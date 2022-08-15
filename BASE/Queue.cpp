#include <bits/stdc++.h>
using namespace std;

//QUEUE -> Linear DS
//QUEUE follows FIFO (First in First Out) principle 
//QUEUE Operations -> Enqueue, Dequeue, isEmpty, isFull, Peek

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
            if(front == 0 && rear == SIZE-1){
                return true;
            }
            return false;
        }

        bool isEmpty(){
            if(front == -1){
                return true;
            }
            return false;
        }

        void Enqueue(int x){
            if(isFull()){
                cout<<"QUeue isFull"<<endl;
            }else{
                if(front == -1){front = 0;}
                rear++;
                items[rear] = x;
                std::cout << "element inserted: "<<x<< std::endl;
            }
        }

        int Dequeue(){
            int x;
            if(isEmpty()){
                std::cout << "Queue is Empty" << std::endl;
                return -1;
            }
            else{
                x = items[front];
                if(front>=rear){ //Queue has only 1 element then delete queue and reset front and rear.
                    front = -1;
                    rear = -1;
                }else{
                    front++;
                }
                cout<<"Deleted -> "<<x<<endl;
                return x;
            }     
        }

        void display(){
            if(isEmpty()){
                cout<<"Queue is Empty"<<endl;
            }else{
                for (int i = front; i < rear; i++)
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
    q.Enqueue(11);

    q.display();

    q.Dequeue();
    q.Dequeue();
    q.Dequeue();

    q.display();

    return 0;
}

