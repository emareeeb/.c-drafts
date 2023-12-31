/*Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
To create an array, define the data type (like int) and specify the name of the array followed by square brackets [].
To insert values to it, use a comma-separated list, inside curly braces:*/

#include<stdio.h>
int main() {
    int numArray[] = {10,20,30,40,50}; //CANNOT print the elements of array directly like a variable, NEED TO USE LOOPS and print elements one by one.
    for(int i=0; i<5 ; i++){
        printf("%d\n",numArray[i]);
    // printf("%d ", numArray[i]); this would be horizontal representation of the array getting printed.
    }
    
    printf("\n\n");
    /*INDEXING*/
    int array[] = {1,2,3,4,5};
    printf("%d\n", array[0]);
    printf("%d\n", array[1]);
    printf("%d\n", array[2]);
    printf("%d\n", array[3]);
    printf("%d\n", array[4]);

    printf("\n\n");
    /*SET ARRAY SIZE*/
    int numbers[5] ;

    //now adding the numbers into the array:
    numbers[0] = 5;
    numbers[1] = 6;
    numbers[2] = 7;
    numbers[3] = 8;
    numbers[4] = 9;

    //lets print and check : 
    for(int a=0; a<5; a++){
        printf("%d ",numbers[a]);         //prints 5 6 7 8 9 ---> PERFECT!
    }

    printf("\n\n");

    /*MULTI-DIMENSIONAL ARRAY*/
    /* lets have a matrix like this :
        5 7 9
        4 5 6
    */

    int matrix[2][3] = { {5,7,9} , {4,5,6}};         //the first input is the rows and the second is column.

    //lets now print the matrix elements :

    int x,y;
    for(x=0; x<2; x++){
        for(y=0; y<3; y++){
            printf("%d\n", matrix[x][y]);
        }
        printf("\n");             // enaling this will print space after every rowg
    }



}

