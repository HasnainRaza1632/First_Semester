#include  <stdio.h>

int main() {
    int a[] = {53,73,23,13,43,33,63};
    int size = sizeof(a) / sizeof(a[0]);
    int average , sum;
    for (int i = 0 ; i < size ; i++) {
        sum = sum + a[i];
    }
    average = sum/size;
    printf("Average %d" , average);return 0;

}
