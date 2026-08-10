#include <stdio.h>
int isArmstrong(int n) {
    int sum = 0, temp = n, digit, count = 0, i;
    while(temp != 0) {
        count++;
        temp /= 10;
    }
    temp = n;
    while(temp != 0) {
        digit = temp % 10;
        int power = 1;
        for(i = 0; i < count; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }
    return sum == n;
}
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(isArmstrong(num))
        printf("Armstrong Number");
    else
        printf("Not Armstrong");

    return 0;
}