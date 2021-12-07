#include <stdio.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int main() {
    long result = 0;
    long last_one = 1;
    printf("%ld\n",last_one);
    long last_two = 1;
    sleep(1);
    printf("%ld\n",last_two);
    sleep(1);
    for (int i=1; i>0; i++) { 
        result = last_one + last_two;
        last_two = last_one;
        last_one = result;
        printf("%ld\n",result);
        sleep(1);
    }
    return 0;
}
