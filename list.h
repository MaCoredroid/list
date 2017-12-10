#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include<stdlib.h>
#include<iostream>
using namespace std;
struct LNode
{
    int data;
    LNode *next;
};
typedef LNode * LinkList;
void creat_list(LinkList &L,int n)
{
    int i;
    int a;
    LinkList p,q;
    L=(LinkList)malloc(sizeof(LNode));
    L->next=NULL;//建立头结点
    q=L;
    for (i=1; i<=n; i++)
    {
        p=(LinkList)malloc(sizeof(LNode));
        cout<<"请输入第"<<i<<"个节点的数据";
        cin>>a;
        p->data=a;
        q->next=p;
        q=q->next;//q后移
    }
    p->next=NULL;//最后一个节点是尾结点
}
void merge_list(LinkList &La,LinkList &Lb,LinkList &Lc)
{
    LinkList pa,pb,pc;
    pa=La->next;
    pb=Lb->next;//a，b链表均指向自己的第一个结点
    pc=Lc=La;
    while(pa&&pb)//不指向末尾
    {
        if (pa->data<=pb->data)//插入La
        {
            pc->next=pa;
            pc=pa;//pc后移
            pa=pa->next;//La后移
        }
        else
        {
            pc->next=pb;
            pc=pb;
            pb=pb->next;
        }
    }//结束该循环后应该会剩下一个链表没合并完(假设俩个链表长度不一样)
    pc->next=pa?pa:pb;//剩余

}
void print_list(LinkList L)
{
    LinkList p=L->next;//指向第一个结点
    while(p)
    {
       cout<<(p->data)<<' ';
        p=p->next;
    }
    cout<<endl;;
}



#endif // LIST_H_INCLUDED
