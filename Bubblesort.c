int sort_func(int array[], int length){
int temp;
    for (int j = 0; j<length; j++){
        for (int i = 0; i<length; i++){
            if (array[i] > array[i+1]){
                temp = array[i+1];
                array[i+1] = array[i];
                array[i] = temp;
            }
        }
    }
    return array;
}
int main(){
    int length;
    printf("Please, enter length or an array\n");
    scanf("%d",&length);

    int array[length];
    printf("Please, enter an unsorted array\n");
    scanf("%s",array);

    sort_func(array, length);
    printf("%s\n",array);

    return 0;
} 