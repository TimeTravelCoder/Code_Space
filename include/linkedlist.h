// linkedlist.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

// 链表节点结构体
template <typename T>
struct Node {
    T data;
    Node* next;
    Node(const T& value) : data(value), next(nullptr) {}
};

// 链表类
template <typename T>
class LinkedList {
private:
    Node<T>* head;
    Node<T>* tail;
    size_t size;

public:
    // 构造函数
    LinkedList() : head(nullptr), tail(nullptr), size(0) {}

    // 析构函数
    ~LinkedList() {
        while (head) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // 在链表尾部添加元素
    void push_back(const T& value) {
        Node<T>* newNode = new Node<T>(value);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        ++size;
    }

    // 删除链表头部元素
    void pop_front() {
        if (head) {
            Node<T>* temp = head;
            head = head->next;
            if (!head) {
                tail = nullptr;
            }
            delete temp;
            --size;
        }
    }

    // 删除链表尾部元素
    void pop_back() {
        if (!head) return;
        if (head == tail) {
            delete head;
            head = tail = nullptr;
            size = 0;
        } else {
            Node<T>* current = head;
            while (current->next != tail) {
                current = current->next;
            }
            delete tail;
            tail = current;
            tail->next = nullptr;
            --size;
        }
    }

    // 打印链表元素
    void print() const {
        Node<T>* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // 获取链表头部元素
    const T& front() const {
        return head->data;
    }

    // 获取链表尾部元素
    const T& back() const {
        return tail->data;
    }

    // 获取链表大小
    size_t getSize() const {
        return size;
    }
};

#endif // LINKEDLIST_H    