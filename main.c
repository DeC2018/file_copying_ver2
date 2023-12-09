/*
copy input to output; 1st version
read a character
while (charater is not end-of-file indicator)
output the character just read
read a character
*/

#include <stdio.h>

int main(){
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);
}
