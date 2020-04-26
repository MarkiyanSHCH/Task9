#include <iostream>
using namespace std;

// Створюємо Клас 
class stack {
private:
    // Створюємо Структуру Node, Яка Буде Зберігати Улеменет(data) І Посилання На Наступний елемент(next)
    struct node {
        int data;
        node* next;

        // Конструктор Структури. У Параметрах Передаємо Значення Елементу І Посилання. Такоє Задаємо Їм Default Значення 
        node(int pData = NULL, node* pNext = nullptr) {
            data = pData;
            next = pNext;

        }
    };
    // Змінна Розміру Нашого Стека
    int size;
    // Вказівник На Перший Елемент Списку
    node* Head;
public:
    // Конструктор Класу 
    stack();

    // Деконструктор Класу
    ~stack();
    // Функція Добалення Елементів В Стек
    void push_back(int data);
    void pop();
    int len();
    int& value();
    void delAll();

};