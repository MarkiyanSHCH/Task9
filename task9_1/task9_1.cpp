﻿#include "MainTask.h"

int main() {
    // Створюємо Динамічний Масив Стеків
    stack* arr = new stack[3];

    int n;

    cout << "Enter Size Stack : ";
    cin >> n;
    
    inputStack(arr, n);

    cout << endl;

    // Викикаєм Фукцію Переміщення Елементів
    move(1, 3, 2, arr[0].len(), arr);
   
    // Розмір Фінального Стека
    int len = arr[2].len();

    // Вивід Фінального Стека

    cout << "Result is : ";
    for (int i = 0; i < len; i++) {
        cout << arr[2].value() << " ";
        arr[2].pop();
    }

    delete[] arr;
    return 0;
}