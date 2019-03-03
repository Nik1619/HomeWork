#include <iostream>
using namespace std;
struct knot
{
    int el;
    struct knot* next;
};
class List()
{
private:
  knot* data;
  knot* tail;
public:
  List();
  operator[](List* l,int i);
};
List::List()
{
    knot *head==NULL;
    knot *t=(knot*)malloc(sizeof(knot)) создаем узел
    knot->el=0; присваиваем значению элемента узла 0
    t->next=(*head); указателю т присваиваем адрес предыдущего узла
    (*head)=t;
}
~List()
{
    delete []List();
}
operator[](List* l,int i);
{
    int k=0;
    while(k<i&&head)
    {
        head=head->next;
        k++
    }
  return head;
}
void push_i(knot *head,int i,int data)
{
    int k=0;
    knot *t=NULL;
    while(k<i&&head->next)
    {
        head=head->next;
        k++
    }
    t=(knot*)malloc(sizeof(knot));
    t->el=data;
    if(head->next)
    {
        t->next=head->next;
    }
    else
        t->next=NULL;
    head->next=t;
}
void pop_i(knot **head,int data)
{
    int k=0;
    knot *t=NULL;
    while(k<i-1&&head->next)
    {
        head=head->next;
        k++
    }
    t=(knot*)malloc(sizeof(knot)-1);
    if(head->next)
    {
        t->next=head->next;
    }
    else
        t->next=NULL;
    head->next=t;
}
