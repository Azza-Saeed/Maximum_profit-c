#include <stdio.h>
#include <stdlib.h>

#include "profit.h"

int main()
{
    int arr[]={7,8,4,3,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("max_profit=%d",profit(arr,0,size-1));
    return 0;
}
