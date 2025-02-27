the code dont npt compile: ERROR

student@student-09:~/px24 c/helloworld/WorkflowTest$ gcc Bubblesort.c -o test.o
Bubblesort.c: In function ‘sort_func’:
Bubblesort.c:12:12: warning: returning ‘int *’ from a function with return type ‘int’ makes integer from pointer without a cast [-Wint-conversion]
   12 |     return array;
      |            ^~~~~
Bubblesort.c: In function ‘main’:
Bubblesort.c:16:5: warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
   16 |     printf("Please, enter length or an array\n");
      |     ^~~~~~
Bubblesort.c:1:1: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
  +++ |+#include <stdio.h>
    1 | int sort_func(int array[], int length){
Bubblesort.c:16:5: warning: incompatible implicit declaration of built-in function ‘printf’ [-Wbuiltin-declaration-mismatch]
   16 |     printf("Please, enter length or an array\n");
      |     ^~~~~~
Bubblesort.c:16:5: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
Bubblesort.c:17:5: warning: implicit declaration of function ‘scanf’ [-Wimplicit-function-declaration]
   17 |     scanf("%d",&length);
      |     ^~~~~
Bubblesort.c:17:5: note: include ‘<stdio.h>’ or provide a declaration of ‘scanf’
Bubblesort.c:17:5: warning: incompatible implicit declaration of built-in function ‘scanf’ [-Wbuiltin-declaration-mismatch]
Bubblesort.c:17:5: note: include ‘<stdio.h>’ or provide a declaration of ‘scanf’
Bubblesort.c:21:13: warning: format ‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘int *’ [-Wformat=]
   21 |     scanf("%s",array);
      |            ~^  ~~~~~
      |             |  |
      |             |  int *
      |             char *
      |            %ls
Bubblesort.c:24:14: warning: format ‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘int *’ [-Wformat=]
   24 |     printf("%s\n",array);
      |             ~^    ~~~~~
      |              |    |
      |              |    int *
      |              char *
      |             %ls
student@student-09:~/px24 c/helloworld/WorkflowTest$ 