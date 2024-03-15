#include<stdio.h>
int main(){
    int l,c;
    printf("enter line: \n");
    scanf("%d", &l);
    printf("enter row: \n");
    scanf("%d", &c);
    for (int i = 0; i < l; i++)
    {
        for (int i = 0; i <c; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}