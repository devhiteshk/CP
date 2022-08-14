#include <bits/stdc++.h>
using namespace std;

//STACK --> LINEAR DS 
//Follows --> LIFO Last in First Out Principle
//Operations --> Push, Pop, isEmpty, IsFull, Peek

#define MAX 10

int Size = 0;

struct STACK{
    int items[MAX];
    int top;
};

void createStack(STACK *s){
    s->top = -1;
}

int isFull(STACK *s){
    if(s->top == MAX-1){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(STACK *s){
    if(s->top == -1){
        return 1;
    }else{
        return 0;
    }
}

void push(STACK *s, int x){
    if(isFull(s)){
        std::cout << "STACK IS FULL" << std::endl;
    }else{
        s->top++;
        s->items[s->top] = x;  
    }
    Size++;
}

void pop(STACK *s){
    if(isEmpty(s)){
        std::cout << "STACCK IS EMPTY" << std::endl;
    }else{
        std::cout << "Item Popped = "<<s->items[s->top]<< std::endl;
        s->top--;
    }
    Size--;
}

void printStack(STACK *s){
    std::cout << "STACK: "<<endl;
    for (int i = 0; i < Size; i++){
        std::cout << s->items[i]<<"->";
    }std::cout<< std::endl;
}


int main(){
    STACK *s = (STACK *)malloc(sizeof(STACK));

    createStack(s);

    cout<<isEmpty(s)<<endl;

    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    push(s,5);
    push(s,6);
    push(s,7);
    push(s,8);
    push(s,9);
    push(s,10);

    cout<<isFull(s)<<endl;

    printStack(s);

    pop(s);

    printStack(s);

    return 0;
}

