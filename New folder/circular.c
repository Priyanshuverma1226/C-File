#include<stdio.h>
#define SIZE 5
int queue[SIZE],rear,front=-1;
void enque(int x){

    if(front==-1)front =0;
    rear=(rear+1) % SIZE;
    queue[rear]=x;
    // printf("Inserting");
}

int deque(){
    if (front==rear)
    {
        front,rear=-1;
    }
    front = (front+1)%SIZE;



}


void display(){

    for (int i = front; i != rear; i = (i + 1) % SIZE) 

    {
        /* code */
        printf("%d ", queue[i]);
    }
    
}
int main(){

    enque(25);
    enque(35);
    enque(85);
    enque(95);
    display();

}
