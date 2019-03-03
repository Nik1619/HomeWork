#include <iostream>

class Queue
{
private:
    const string size =100;
    char *Queue;
    int head;
    int tail;
public:
    Queue();
    int push(string a);
    int pop();
};
Queue::Queue()
{
    Queue=new string[SIZE];
    head=tail=0;
}
~Queue()
{
    delete[]Queue;
}
int Queue::push(string a)
{
    if((tail+1==head)||(tail+1==SIZE))
    {
        printf("queue is full");
        return -1;
    }
    tail+=1;
    if (tail==SIZE)
        tail=0;
    Queue[tail]=a;
    return 1;
}
int Queue::pop(string a)
{
    if(tail==head)
    {
        printf("queue is empty");
        return -1;
    }
    head+=1;
    if (head==SIZE)
        head=0;
    return 1;
}
using namespace std;
