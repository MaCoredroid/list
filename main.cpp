#include <iostream>
#include"list.h"
using namespace std;

int main()
{

    int n1,n2;
    LinkList La,Lb,Lc;
    cout<<"建立La链表开始:请先输入要建立的结点个数";
    cin>>n1;
    creat_list(La,n1);
    cout<<"La链表信息如下:";
    print_list(La);
    cout<<"建立Lb链表开始:请先输入要建立的结点个数";
    cin>>n2;
    creat_list(Lb,n2);
    cout<<"Lb链表信息如下:";
    print_list(Lb);
    cout<<"合并完两链表后如下:";
    merge_list(La,Lb,Lc);
    print_list(Lc);
}

