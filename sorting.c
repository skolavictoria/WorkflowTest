#include <stdio.h> 

int main(void){
    int len, i = 0, j = 1, num, temp; 

    printf("Enter length of array >>> "); 
    scanf("%d", &len);

    int array[len]; 

    for (i = 0; i < len; i++) 
    {
        printf("Enter %d number >>> ", i + 1);
        scanf("%d", &array[i]);
    }

    i = 0;

    if (len == 1)
    {
        printf("Input array is already sorted");
        return 1; 
    }
    else
    { 
        for (i = 0; i < len - 1; i++)
        {
            for (j = 0; j < len - i - 1; j++) 
            {
                if (array[j] > array[j + 1])
                {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        } 
    } 
    
    printf("Sorted array >>> "); 

    for (i = 0; i < len; i++)
    {
        printf("%d", array[i]); 
    }
    
    printf("\n"); 

    return 0; 
}