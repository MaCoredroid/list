#include <iostream>
#include"list.h"
using namespace std;

int main()
{

    int n1,n2;
    LinkList La,Lb,Lc;
    cout<<"����La����ʼ:��������Ҫ�����Ľ�����";
    cin>>n1;
    creat_list(La,n1);
    cout<<"La������Ϣ����:";
    print_list(La);
    cout<<"����Lb����ʼ:��������Ҫ�����Ľ�����";
    cin>>n2;
    creat_list(Lb,n2);
    cout<<"Lb������Ϣ����:";
    print_list(Lb);
    cout<<"�ϲ��������������:";
    merge_list(La,Lb,Lc);
    print_list(Lc);
}

