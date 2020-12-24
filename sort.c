#include<stdio.h>

int main()
{
    int arr[5] = {2,30,5,9,11};
    int arrInd, temp,element;

    for(element = 0; element<5; element++){

    for(arrInd=element+1; arrInd<5; arrInd++)
    {
        if(arr[element]<arr[arrInd])
            {
            temp = arr[element];
            arr[element] = arr[arrInd];
            arr[arrInd] = temp;
            }
    }
    }
    for(arrInd = 0; arrInd<5; arrInd++)
    {
    printf("%d ", arr[arrInd]);
    }
return 0;
}




