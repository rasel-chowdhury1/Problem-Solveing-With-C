#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],even_arr[21],odd_arr[21],even_l=0,odd_l=0,odd_sum=0,even_sum=0,one_even=0;
    for(int i=0; i<n; i++)
    {
        if(n>0)
        {
            scanf("%d",&arr[i]);
        }
    }
    for(int i=0,j=0,k=0; i<n; i++)
    {
        if(arr[i]%2 == 0 || arr[i] == 0)
        {
            even_l++;
            even_arr[j] = arr[i];
            j++;
        }
        else if(arr[i]%2 != 0)
        {
            odd_l++;
            odd_arr[k]= arr[i];
            k++;
        }
    }
//Even

    if(even_l==1)
    {
        even_sum = even_arr[0];
        //printf("%d",one_even);
        //return 0;
    }
    else if(even_l>1)
    {
        int even_large1,even_large2,temp;
        even_large1 = even_arr[0];
        even_large2 = even_arr[1];
        if(even_large1<even_large2)
        {
            temp = even_large1;
            even_large1 = even_large2;
            even_large2 = temp;
        }
        for(int j = 2; j<even_l; j++)
        {
            if(even_arr[j]>=even_large1)
            {
                even_large2 = even_large1;
                even_large1 = even_arr[j];
            }
            else if(even_arr[j]>=even_large2)
            {
                even_large2 = even_arr[j];
            }
        }

        even_sum = even_large1 + even_large2;
    }

//odd

   /* if(odd_l==2)
    {
        int sum = odd_arr[0] + odd_arr[1];
        printf("%d",sum);
        return 0;
    }
    */
    if(odd_l>1)
    {
        int odd_large1,odd_large2,temp2;
        odd_large1 = odd_arr[0];
        odd_large2 = odd_arr[1];
        if(odd_large1<odd_large2)
        {
            temp2 = odd_large1;
            odd_large1 = odd_large2;
            odd_large2 = temp2;
        }
        for(int k = 2; k<odd_l; k++)
        {
            if(odd_arr[k]>=odd_large1)
            {
                odd_large2 = odd_large1;
                odd_large1 = odd_arr[k];
            }
            else if(odd_arr[k]>= odd_large2)
            {
                odd_large2 = odd_arr[k];
            }
        }

        odd_sum = odd_large1 + odd_large2;

        if(even_sum>odd_sum)
        {
            printf("%d",even_sum);
        }
        else if(even_sum<=odd_sum)
        {
            printf("%d",odd_sum);
        }
        return 0;
    }

//end odd

    printf("%d\n",even_sum);
}