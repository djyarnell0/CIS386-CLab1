#include <stdio.h>  
#include <string.h>
#include <conio.h>


int main()
{
    char inputArray[100], reversedArray[100];
    printf("Enter a string: ");
    scanf("%s", inputArray);
    /* Copy input string and reverse it*/
    strcpy(reversedArray, inputArray);
    /* reverse string */
    strrev(reversedArray);
    /* Compare reversed string with inpit string */
    if(strcmp(inputArray, reversedArray) == 0 )
        printf("true");
    else
        printf("false");
        
    getch();
    return 0;



}