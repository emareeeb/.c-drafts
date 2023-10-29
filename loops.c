#include<stdio.h>
int main() {
    //while loop :
    int i = 0;
    while(i<=10){
        printf("%d\n",i);
        i++;
    }
    printf("\n\n");
    
    
    //do while loop
    int j = 10;
    do{
        printf("%d\n",j);
        j--;
    }while(j>=0);

    printf("\n\n");
    
    
    //for loop : 
    // for(initialization ; condition ; incre/decrement) 
    for(int x = 0; x <= 10; x++){
        printf("%d",x);
    }
    
    printf("\n\n");
    
    for(int z = 9; z>=0; z--){
        printf("%d",z);
    }
}
