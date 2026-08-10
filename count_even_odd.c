#include <stdio.h>
void count_even_odd(int start, int end) {
    int even = 0, odd = 0;

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Total even number is = %d\n", even);
    printf("Total odd number is = %d\n", odd);
}

int main() {
    int start, end;

    printf("Input the starting point: ");
    scanf("%d", &start);

    printf("Input the ending point: ");
    scanf("%d", &end);

    count_even_odd(start, end);

    return 0;
}