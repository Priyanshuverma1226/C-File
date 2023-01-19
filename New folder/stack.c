#include<stdio.h>


#define SIZE 10

int stack[SIZE],top=-1;

void push(int x)
{
    top++;
    stack[top]=x;
}

void pop()
{
    top--;
}

void display(){
    for (int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}
int main(){

push(25);
push(35);
push(45);
push(55);
push(65);
display();
pop();
display();

}