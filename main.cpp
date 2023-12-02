#include <iostream>

int vi/*Ошибка в коде*/bor(int razmer, int mass[]) {
    for (int i = 0; i < razmer - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < razmer; j++)
        {
            if (mass[j] /*Ошибка по больше*/< mass[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {

            int a = mass[i];
            mass[i] = mass[min_index];
            mass[min_/*А тут страшная ошмбка вообще жесть*/index] = a;
        }

    }
    return mass;
}

int main() {
    const int n = 1000;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }

    vibor(n, arr);

    return 0;
}