#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef char push[2000];

int kotak(push out);


int main() {
    srand(time(NULL)) ;
    push out;

    kotak(out);
    printf(out);

    return 0;
}

int kotak(push out) {
    char b1=32,b2=254,b3=220,b4=222;
    int i, j, x;
    
    strcpy(out, "") ;
    for(i=0;i<20;i++) {
        for(j=0;j<40;j++){
            x = rand() % 4;
            switch(x) {
                case 0:sprintf(out, "%s%c", out, b1) ;break;
                case 1:sprintf(out, "%s%c", out, b2) ;break;
                case 2:sprintf(out, "%s%c", out, b3) ;break;
                case 3:sprintf(out, "%s%c", out, b4) ;break;
            }
        }
        sprintf(out, "%s\n",  out) ;
    }
    return 0;
}
