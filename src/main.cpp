// main.cpp
#include <iostream>
#include "../include/linkedlist.h"

int main() {
    // 创建一个整数类型的链表
    LinkedList<int> list;

    // 在链表尾部添加元素
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);

    // 打印链表元素
    std::cout << "Initial list: ";
    list.print();

    // 删除链表头部元素
    list.pop_front();
    std::cout << "After pop_front: ";
    list.print();

    // 删除链表尾部元素
    list.pop_back();
    std::cout << "After pop_back: ";
    list.print();

    // 获取链表头部和尾部元素
    if (list.getSize() > 0) {
        std::cout << "Front element: " << list.front() << std::endl;
        std::cout << "Back element: " << list.back() << std::endl;
    }

    return 0;
}    