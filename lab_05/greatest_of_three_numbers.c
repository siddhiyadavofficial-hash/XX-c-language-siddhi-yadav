#include <stdio.h>
int main() {
    int a;
    int b;
    int c;

    printf("siddhi yadav\nEnter three numbers: ");
    scanf("%d %d %d",  &a, &b, &c);
    if ( a>b && a>c )
        printf("The greatest number is: %d", a);
    else if(b>a && b>c)
        printf("The greatest number is: %d", b);
    else
        printf("The Greatest number is: %d", c);
        
    return 0;    

}
