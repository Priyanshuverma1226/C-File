#include<stdio.h>


#define SIZE 10

int queue[SIZE],rear,front=-1;


void enqueu(int x){
    if (front==-1) front=0;

    rear++;
    queue[rear]=x;
    

}
    

void deq(){
    front++;
    if (front >rear) front=rear-1;
    
    
}

void display(){
    int i;
    for(i=front+1;i<=rear;i++){
        printf("%d ",queue[i]);
    }

}
int main(){
    enqueu(25);
    enqueu(35);
    enqueu(55);
    display();


}