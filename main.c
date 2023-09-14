#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    int op;
    printf("entre une valure");
    scanf("%f",&x);
    printf("entre une valuer");
    scanf("%f",&y);
    printf("b1,c2,d3,e4");
    scanf("%d",&op);
    if(op==1){

    float z = x + y;
    printf("resultat %.2f",z);
}
    if(op == 2){
    float z = x - y;
    printf("resultat %.2f",z);
}
    if(op==3){
        float z = x * y;
        printf("resultat%.2f",z);

        }
        if (op==4){
            float z = x / y;
            printf("resultat%.2f",z);

    }
    return 0;
}
