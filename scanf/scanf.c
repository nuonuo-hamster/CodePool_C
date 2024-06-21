#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 0;
    // int sum = 0;
    char ch;

    printf("input: ");

    while(scanf("%d", &i) == 1){

        printf("%d\n", i);
        // sum += i;

        while( ch == ' ')
            ;
        if (ch == '\n'){

            break;
        }
        ungetc(ch, stdin);
    }
    // printf("%d", sum);

    return 0;
}
