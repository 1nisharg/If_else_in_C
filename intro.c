//If-else
#include <stdio.h>

int main()
{
    int i=20;
    if(i>15){
        printf("hey babe");
    }
    else{
        printf("no!!");
    }
}


//Nested-If
#include <stdio.h>

int main()
{
    int i=20;

    if (i == 10){
        if(i<15)
        printf("i is smaller than 15\n");

        if(i<12)
        printf("i is smaller than 12 too\n");
        else
        printf("i is greater than 15");
    }

    return 0;
}