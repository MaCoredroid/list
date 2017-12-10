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
    L->next=NULL;//����ͷ���
    q=L;
    for (i=1; i<=n; i++)
    {
        p=(LinkList)malloc(sizeof(LNode));
        cout<<"�������"<<i<<"���ڵ������";
        cin>>a;
        p->data=a;
        q->next=p;
        q=q->next;//q����
    }
    p->next=NULL;//���һ���ڵ���β���
}
void merge_list(LinkList &La,LinkList &Lb,LinkList &Lc)
{
    LinkList pa,pb,pc;
    pa=La->next;
    pb=Lb->next;//a��b�����ָ���Լ��ĵ�һ�����
    pc=Lc=La;
    while(pa&&pb)//��ָ��ĩβ
    {
        if (pa->data<=pb->data)//����La
        {
            pc->next=pa;
            pc=pa;//pc����
            pa=pa->next;//La����
        }
        else
        {
            pc->next=pb;
            pc=pb;
            pb=pb->next;
        }
    }//������ѭ����Ӧ�û�ʣ��һ������û�ϲ���(�������������Ȳ�һ��)
    pc->next=pa?pa:pb;//ʣ��

}
void print_list(LinkList L)
{
    LinkList p=L->next;//ָ���һ�����
    while(p)
    {
       cout<<(p->data)<<' ';
        p=p->next;
    }
    cout<<endl;;
}



#endif // LIST_H_INCLUDED
