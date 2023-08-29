/*
 * profit.c
 *
 *  Created: 6/8/2023 11:43:43 PM
 *  Author: Azza Saeed
 */
#include "profit.h"

/*
	Function Name        : profit
	Function Returns     : int
	Function Arguments   : array , start, end
	Function Description : return the maximum profit
*/

int profit(int *arr, int st,int en)
{
    if(en<=st)
          return 0;
    int maximumProfit=0;

    int i,j;
    for(i=st;i<en;i++)
    {
            j=i+1;
            if(arr[j]>arr[i])
            {
                int pro_now=arr[j]-arr[i];
                maximumProfit=max(maximumProfit,pro_now);
                j++;
            }

    }
    return maximumProfit;
}
