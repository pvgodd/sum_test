#include <stdio.h>
#include "sum.h"

int main(){
    
    int n,i;
    scanf("%d%d",&n,&i);
    int s = sum(n,i);
    printf("%d",s);

    return 0;
}

