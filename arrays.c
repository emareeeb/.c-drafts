/*Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
To create an array, define the data type (like int) and specify the name of the array followed by square brackets [].
To insert values to it, use a comma-separated list, inside curly braces:*/

#include<stdio.h>
int main() {
    int numArray[] = {10,20,30,40,50};
    //can not prit the elements of array directly like a variable, NEED TO USE LOOPS and print elements one by one.
    for(int i=0; i<5 ; i++){
        printf("%d\n",numArray[i]);
        // printf("%d ", numArray[i]); this would be horizontal representation
    }
}

