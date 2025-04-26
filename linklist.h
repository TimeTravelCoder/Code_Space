#ifndef LINKLIST_H
#define LINKLIST_H
//@TimeTravelCoder:链表的接口
// 必要的头文件
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    /* data */
int data;
linklist next;


}node,*linklist;
//构造函数
linklist Newnode( int data);
//插入函数
void InsertNode(linklist head,linklist p);
//删除函数
void Deletenode(linklist head);
//查询函数
void FindNode(linklist head,int pos);
//遍历节点
linklist Access(linklist head);


#endif // LINKLIST_H
