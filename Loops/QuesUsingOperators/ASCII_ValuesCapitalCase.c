#include <stdio.h>
int main( ){
    // WAP to print all the ASCII values and their equivalent characters of 26 alphabets(capital case) using while loop
    char ch = 'A';
    for(int i=1; i<=26; i++){
        printf("ASCII Value of %c = %d\n",ch, ch);
        ch++;   
    }

    // alternate method using typecasting
    for(int i=65; i<=90; i++){
        printf("%d is ASCII Value of ",i);
        char ch = (char)i;
        printf("%c\n",ch);
    }
    return 0;
}