#include "MainTask.h"

// Функція Переміщає Елементи Між Стаками 
void put(int from, int to, stack* mas) {
    mas[to - 1].push_back(mas[from - 1].value());
    mas[from - 1].pop();
}
// Рекурсивна Функція Яка Визначає Який Елемент Куди Помістити
void move(int from, int to, int tmp, int n, stack* mas) {
    if (n == 0)
        return;
    // Переміщає n-1 Елемент На Temp
    move(from, tmp, to, n - 1, mas);
    put(from, to, mas);
    // Переміщає n-1 Елемент З Temp На To
    move(tmp, to, from, n - 1, mas);

}

void inputStack(stack* arr, int n) {
    for (int i = 0; i < n; i++) {
        int elem;
        cout << "Enter Elem: ";
        cin >> elem;
        arr[0].push_back(elem);
    }
}