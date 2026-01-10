#include <stdio.h>
#include <stdlib.h>

struct Poly {
    int coeff;
    int power;
    struct Poly *next;
};

void display(struct Poly *head) {
    while (head != NULL) {
        printf("%dx^%d", head->coeff, head->power);
        if (head->next != NULL)
            printf(" + ");
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Poly *p1, *p2, *p3;

    p1 = (struct Poly *)malloc(sizeof(struct Poly));
    p2 = (struct Poly *)malloc(sizeof(struct Poly));
    p3 = (struct Poly *)malloc(sizeof(struct Poly));

    p1->coeff = 5;
    p1->power = 2;
    p1->next = p2;

    p2->coeff = 3;
    p2->power = 1;
    p2->next = p3;

    p3->coeff = 7;
    p3->power = 0;
    p3->next = NULL;

    display(p1);
    return 0;
}
