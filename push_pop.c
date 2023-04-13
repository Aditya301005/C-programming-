
#include <stdio.h>

int main() {
    int i, j, stack[100], top, choice;
    printf("Enter the number of elements of stack: ");
    scanf("%d", &top);
    for (j = 1; j <= top; j++) {
        printf("Enter %d element: ", j);
        scanf("%d", &stack[j]);
    }
    printf("Enter 1 to push or 2 to pop: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            top = top + 1;
            printf("Enter the element you want to insert: ");
            scanf("%d", &i);
            stack[top] = i;
            break;
        case 2:
            i = stack[top];
            top = top - 1;
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    for (j = 1; j <= top; j++) {
        printf("value=%d\n", stack[j]);
    }
    return 0;
}
