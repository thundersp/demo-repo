#include<stdio.h>
int main()
{
    int a,b,c,d;
    b=123;
    for(a=97;a<b;a++){
        printf("%c",a);
        if(a=='g'){
            break;
        }
    printf("\n");}
    for(a=97;a<b;a++){
        printf("h%c",a);
        if(a=='e'){
            break;
        }
    printf("\n");}
    return 0;
}