#include <stdio.h>
#include <stdlib.h>

int main(){
    char hello[7] = "Hello!";
    char *str = malloc(4);
    //
 
    str[0] = 'H';
    str[1] = 'e';
    str[2] = 'y';
    str[3] = '\0';
    printf("%s,\n", str);
    free(str);
    printf("%s\n", hello);
    printf("\nEnd...\n");
    return(0);
}