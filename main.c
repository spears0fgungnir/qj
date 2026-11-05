#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    if (argc < 2) {
        fprintf(stderr, "fatal: No file passed as an argument");
        return 1;
    }

    printf("use jq until this tool builds itself!!!");
    return 0;
}
