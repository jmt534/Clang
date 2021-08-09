/* Project Name   - 2.c */
/* Created On     - 07/10/21, 12:13:23 AM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <stdio.h>

typedef struct Node node;
struct Node {
    int value;
    node *next;
};

void print(node *);
int main()
{
    node a;
    node b;
    node c;

    a.value = 42;
    a.next  = &b;

    b.value = 34;
    b.next  = &c;

    c.value = 27;
    c.next  = NULL;

    print(&a);
    print(&b);
    print(&c);

    return 0;
}

void print(node *var)
{
    printf("Address: %d => Value: %d Next Address: %d\n", var, var -> value, var -> next);
}
