/*Strings are used for storing text/characters.
For example, "Hello World" is a string of characters.
--
Unlike many other programming languages, C does not have a String type to easily create string variables. Instead, you must use the char type and create an array of characters to make a string in C:*/

#include<stdio.h>
int main() {
    char greeting[] = ("hello world");
    printf("%s\n", greeting);

    printf("\n\n");
    
    /*INDEXING IN STRING (use %c)*/
    printf("%c", greeting[0]);
    printf("%c", greeting[1]);
    printf("%c", greeting[2]);
    printf("%c", greeting[3]);
    printf("%c", greeting[4]);
    printf("%c", greeting[5]);
    printf("%c", greeting[6]);

    printf("\n\n");

    //Note that we have to use the %c format specifier to print a single character.

    /*you xan also change the index specifying its value*/
    greeting[0] = 'T';
    //lets print the greeting now:
    printf("%s",greeting);
    
    printf("\n\n");

    /*you can also access the string by looping in*/
    char car[] = "Volvo";
    for(int i=0; i<5; i++){
        printf("%c ",car[i]);
    }

    printf("\n\n");

    /*ANOTHER WAY OF CREATING A STRING*/
    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s", greetings);
    /*Why do we include the \0 character at the end? This is known as the "null terminating character", and must be included when creating strings using this method. It tells C that this is the end of the string.*/

    printf("\n\n");

    char greeting2[] = ("Hello Worldy World!");    //which weve learnt before
    printf("%s", greeting2); 


    /*Accesing a string as a whole (string) ? --> %s
      Accessing a character in a string? --> %c
    */
}