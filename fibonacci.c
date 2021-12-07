#include <stdio.h>

int main() {
    int a = 0;
    int result = 0;
    int last_one = 1;
    int last_two = 1;
    do {
        result = last_one + last_two;
        last_two = last_one;
        last_one = result;
        printf(result);
    } while (a == 0);
    return 0;
}
