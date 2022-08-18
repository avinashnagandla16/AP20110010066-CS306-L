#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char input[20];
    printf("Enter Input String\t :");
    scanf("%s",input);
    int l=strlen(input);
    printf("%c",input[l]);
    
    if(input[l-1]==input[l-2])
    printf("String Accepted");
    else
    printf("String Not Accepted");   
}
