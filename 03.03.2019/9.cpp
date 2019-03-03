#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct pair
{
 int first;
 unsigned int second;
 pair(int first, unsigned second);
};
 pair[const pair &A]
 {
 first=A.first;
 second=A.second;
 }
struct rationalcopy
{
  struct pair;
  paircopy(int first, unsigned second):(pair(first,second){}
};
~pair()
{
delete[]pair.first;
delete[]pair.second;
}
struct Mass_Pair
{
private:
    int size;
    pair();
    include <pair>;
    Array<pair> A[size];
public:
    Mass_Pair(); // конструктор
    Mass_Pair(int ); // конструктор с параметрами
    Mass_Pair(const Mass_Pair & ); // конструктор копий
    ~Mass_Pair(); // деструктор

    int getSize(); // возвратить размер
    void set_Mass_Pair();
    void get_Mass_Pair();
    void push_back(pair x);
    void push_front(pair x);
    void turn(int k);
       /*тут описаны только push_back/front и простейшие операторы, все
       остальыне функции (сортировки, поиск - бинарный и линейный) точно такие же, как в
       предыдущей работе (class1) только с изменением типа данных на пары*/
    pair operator[](int a);
    const Mass_Pair& operator+(const Mass_Pair& A);
    const Mass_Pair& operator=(const Mass_Pair& A);
};
Mass_Pair::Mass_Pair() // конструктор по умолчанию, без параметров
{
    size=10;
    Arr=new pair [size];
    for (int i=0; i<size; i++)
    {
        Arr.first[i]=0;
        Arr.second[i]=0;
    }
}

Mass_Pair::Mass_Pair(int arrSize)
{
    size=(arraySize > 0 ? arraySize : 10);
    Arr = new pair [size];
    for (int i=0; i<size; i++)
    {
        Arr.first[i]=0;
        Arr.second[i]=0;
    }
}

Mass_Pair::Mass_Pair( const Mass_Pair, &arrayToCopy )
    :size(arrayToCopy.size)
{
    Arr=new pair[size];

    for (int i=0; i<size; i++)
    {
        Arr.first[i]=arrayToCopy.Arr.first[i];
        Arr.second[i]=arrayToCopy.Arr.second[i];
    }
    Arr.first[1]=arrayToCopy.Arr.first[size-1]; /*цикличность*/
    Arr.second[1]=arrayToCopy.Arr.second[size-1];
}

Mass_Pair::~Mass_Pair() // десструктор класса
{
    delete  []A;
}
const Mass_Pair& operator=(const Mass_Pair& A)
{
    swap(Mass_Pair &A);
    return *this;
}
const Mass_Pair& operator+(const Mass_Pair& A,const Mass_Pair& B)
{
    pair temp=new pair[A.size+B.size];
    for (int i=0;i<A.size;i++)
    {
        temp.first[i]=A.first[i];
        temp.second[i]=A.second[i];
    }
    for (int k=A.size;i<B.size;i++)
    {
        temp.first[k]=A.first[k-A.size];
        temp.second[k]=A.second[k-A.size];
    }
    delete[]A;
    A=temp;
}
void turn(int k)
{
    pair* temp=new pair[size];
    int i=1;
    while(i<=size-k)
    {
        temp.first[i+k]=A.first[i];
        temp.second[i+k]=A.second[i];
        i++;
    }
    i=size;
    while(i>size-k)
    {
        temp.first[i-k]=A.first[i];
        temp.second[i-k]=A.second[i];
        i--;
    }
    temp.first[1]=A.first[size];
    temp.second[1]=A.second[size];
    delete[]A;
    A=temp;
}
void push_front(pair x)
{
  pair* temp = new pair[size+1];
  temp.first[0]=x.first;
  temp.second[0]=x.second;
        for (int i=1;i<size+1;i++)
        {
            temp.first[i]=A.first[i];
            temp.second[i]=A.second[i];
        }
        delete[]A;
        A=temp;
}
void push_back(pair x)
{
    pair* temp = new pair[size+1];
    temp.first[size+1]=x.first;
    temp.second[size+1]=x.second;
        for (int i=0;i<size;i++)
        {
            temp.first[i]=A.first[i];
            temp.second[i]=A.second[i];
        }
        delete[]A;
        A=temp;
}
pair operator[](int a)
{
    return A[a];
}

void set_Mass_Pair()
{
    printf("enter size of mass\n");
    scanf("%d",&size);
    for (int i=0;i<size;i++)
    {
        scanf("%d",&A.first[i]);
        scanf("%d",&A.second[i]);
    }
}
void get_Mass_Pair(int size, int* pair)
{
    for (int i=0;i<size;i++)
    {
        printf("%d\n",A.first[i]);
        printf("%d\n",A.second[i]);
    }
}
int getSize()
{
    return size;
}
