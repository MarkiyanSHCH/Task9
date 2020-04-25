#include "stack.h"

stack::stack() {
    size = 0;
    Head = nullptr;
}

// Деконструктор Класу
stack::~stack() {
    delete Head;
}

// Функція Добалення Елементів В Стек
void stack::push_back(int data) {
    // Перевірка Чи Head Пуста
    if (Head == nullptr) {
        // Виділяємо Память Для Head І Передаємо Туди Наш Елемент
        Head = new node(data);
    }
    else {
        node* current = this->Head;
        // Перебираємо Циклом Наші Структури Поки Не Дойдемо До Останнього
        while (current->next != nullptr) {
            current = current->next;
        }
        // Виділяємо Память Для Current І Передаємо Туди Наш Елемент
        current->next = new node(data);
    }
    ++size;
}

void stack::pop() {
    node* current = this->Head;
    // Цикл Який Знаходить Передостанній Node Щоб Видалити В Ньому Посилання На Останній
    for (int i = 1; i < size - 1; i++) {
        current = current->next;
    }

    // Якщо Стек Складається Тільки З Одного Елемента Просто Очищаємо Весь Head
    if (size == 1) {
        Head = nullptr;
    }

    current->next = nullptr;
    --size;
}

int stack::len() {
    return size;
}


int& stack::value() {
    node* current = this->Head;
    // Перебираємо Циклом Наші Структури Поки Не Дойдемо До Останньої
    while (current->next != nullptr) {
        current = current->next;
    }
    return current->data;
}

