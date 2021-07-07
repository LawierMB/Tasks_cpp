#include <iostream>

constexpr size_t tab_size = 100; //sta³a dla rozmiaru tablicy

int main() {
    int tab[tab_size];

    for (size_t i = 0; i < tab_size; ++i) {
        tab[i] = (2 * i) + 1; // ,Przypisanie do tablicy liczb nieparzystych 1,3,5,7...
    }

    for (size_t i = 0; i < tab_size; ++i) {
        std::cout << tab[i] << "\n"; // wylistowanie tablicy
    }

    return 0;
}

