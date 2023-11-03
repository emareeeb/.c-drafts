#include<stdio.h>
int main() {
    printf("Hello @emareeeb!\n");
    int num = 10;
    printf("%d", num);
    // Explicit (manual conversion of data type:)
    float div = (float) 5 / 2;
    printf("%f\n", div);   //run the code without additional statements - displays 'compiler issue'
    float implicit = 4/2;
    printf("%f\n", implicit);
}
