#include <stdio.h>
#include <stdlib.h>

// Function for array allocation
int *allocate(int n){
    int *p;
    p=(int *) malloc(n*sizeof(int));
    return p;
}

// Fill with ones : takes array and array size as input
void fillwithones(int *array, int n){
    int i;
    for (i=0;i<n;i++){
        array[i] = 1;
    }
}

//Print the array
void printarray(int *array, int n){
    int i;
    for(i=0;i<n;i++){
        printf("a[%d]=%d\n",i,array[i]);
    }
}

// Free allocated space in the array
void freearray(int *array){
    free(array);
}


int main(){
    int n, *a;
    printf("Size of the array: \n");
    scanf("%d",&n);

    a = allocate(n);
    fillwithones(a,n);
    printarray(a,n);
    freearray(a);
    
    // Allocating NULL Value to Array
    a=NULL;
    
    return 0;
}