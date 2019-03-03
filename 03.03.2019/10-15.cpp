#include <iostream>
using namespace std;
struct knot // структура для представления узлов дерева
{
	int data;
	unsigned char height;
	knot* left;
	knot* right;
	knot(int k) { key=k;left=right=0; height=1; }
};
class three // структура для представления узлов дерева
{
private:
    knot* a;
public:
int balance(knot* p);
void fixheight(knot* p);
};
int delta(knot* p)
{
	return=height(p->right)-height(p->left);
}
void fixheight(knot* p)
{
	int hl = height(p->left);
	int hr = height(p->right);
	p->height=(hl>hr?hl:hr)+1;
}
knot* r_p(knot* p) // правый поворот вокруг p
{
	knot* q=p->left;
	p->left=q->right;
	q->right=p;
	fixheight(p);
	fixheight(q);
	return q;
}
knot* l_p(knot* p) // правый поворот вокруг p
{
	knot* q=p->right;
	p->right=q->left;
	q->left=p;
	fixheight(p);
	fixheight(q);
return q;
}
knot* balance(knot* p) // балансировка узла p
{
	fixheight(p);
	if( delta(p)==2 )
	{
		if( delta(p->right) < 0 )
			p->right = r_p(p->right);
		return l_p(p);
	}
	if( delta(p)==-2 )
	{
		if( delta(p->left) > 0  )
			p->left = r_l(p->left);
		return r_p(p);
	}
	return p; // балансировка не нужна
}
knot* push(knot* p, int k) // вставка ключа k в дерево с корнем p
{
	if(!p) return new knot(k);
	if(k<p->data)
		p->left=push(p->left,k);
	else
		p->right=push(p->right,k);
	return balance(p);
}
knot* pop(knot* p, int k) // удаление ключа k из дерева p
{
	if(!p) return 0;
	if(k<p->data)
		p->left = pop(p->left,k);
	else if( k>p->data)
		p->right =pop(p->right,k);
    return balance(p);
}
