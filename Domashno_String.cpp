#include <iostream>
#include<stdio.h>
using namespace std;
int string_copy(char *a, char *b) {
    int br = 0;
    for(int i = 0;a[i] != '\0';i++){
        br++;
        b[i] = a[i];
        //cout<<b[i];
    }
    return br;
}

int main() {
    char a[5] = "hell";
    char b[5];
    int length = string_copy(a,b);
    //b[7] = length;
    printf("%d\n",length);
    printf("%s\n",b);
}


