#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Consoles{
    public : void WriteLine(const char *c){
        printf(c);
    };

};
Consoles Console;