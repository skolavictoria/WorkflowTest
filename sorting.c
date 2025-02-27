#include <stdio.h>
int main(){
    int array[] = {};
    int i = 0;
    int j = 0;
    int size;
    printf("Enter size of the array: \n"); // for testing
    scanf("%d",&size);
    for(i=0;i<=size;i++){
    printf("Enter array: \n");
    scanf("%d",&array[i]);
    }
    start:
    if (array[j] > array[j+1]) {
        array[j] = array[j+1];
        j++;
        if(j < size - i - 1) {
            
            goto start;
        }
        
        else { 
            j=0;
            i++;
            if( i < size - 1){
                for(i=0;i<=size;i++){
                printf("%ls",&array[i]);
                }
                return 0;
            }
        }
    }
    else if(array[j] > array[j+1]){
        j++;
        goto start;
    }
    

}