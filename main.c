#include <stdio.h>


int print_whole_ascii_table() {
    char i=0;
    for(i=0; i<127; ++i){
        printf("%d\n",i);
    }
}


int print_whole_ascii_table_using_while() {
    char i=0;
    while( i<127){
        printf("%d-%c\n", i, i);
        i++;
    }
}


int main() {
    print_whole_ascii_table_using_while();
    return 1;
}



