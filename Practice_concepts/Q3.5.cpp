#include <iostream>
#include <malloc.h>

using namespace std;

char * allocateMemory();
void main(){
    char *str;
    str=allocateMemory();
    cout << str;
    delete str;
    str = "    ";
    cout << str;
}
char * allocateMemory(){
    char *str="Memory Allocation test, ";
    return str
}

    