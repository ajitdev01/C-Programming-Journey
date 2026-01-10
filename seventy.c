#include <stdio.h>

#define SIZE 10

int hashTable[SIZE];

void insert(int key) {
    int index = key % SIZE;
    hashTable[index] = key;
}

void display() {
    for (int i = 0; i < SIZE; i++) {
        printf("Index %d: %d\n", i, hashTable[i]);
    }
}

int main() {
    insert(10);
    insert(22);
    insert(37);
    insert(40);

    display();
    return 0;
}
