#include<stdio.h>

void displayAddress(int *p);
void dereferencePointer(int *p);
void swapNumbers(int *a,int *b);
void traverseArray(int arr[],int n);
void pointerArithmetic(int arr[],int n);

int main() {

    int num;
    int a,b;
    int arr[5];

    printf("Enter a Number : ");
    scanf("%d",&num);

    displayAddress(&num);
    dereferencePointer(&num);

    printf("\nEnter First Number : ");
    scanf("%d",&a);

    printf("Enter Second Number : ");
    scanf("%d",&b);

    printf("Before Swapping : %d %d\n",a,b);
    swapNumbers(&a,&b);
    printf("After Swapping : %d %d\n",a,b);

    printf("\nEnter 5 Array Elements : ");
    for(int i=0;i<5;i++) {
        scanf("%d",&arr[i]);
    }

    traverseArray(arr,5);
    pointerArithmetic(arr,5);

    return 0;
}

void displayAddress(int *p) {
    printf("Memory Address : %p\n",p);
}

void dereferencePointer(int *p) {
    printf("Value Using Pointer : %d\n",*p);
}

void swapNumbers(int *a,int *b) {
    int temp;

    temp=*a;
    *a=*b;
    *b=temp;
}

void traverseArray(int arr[],int n) {
    int *p=arr;

    printf("\nArray Elements Using Pointer : ");

    for(int i=0;i<n;i++) {
        printf("%d ",*(p+i));
    }

    printf("\n");
}

void pointerArithmetic(int arr[],int n) {

    int *p1=&arr[1];
    int *p2=&arr[4];

    printf("\nPointer Arithmetic :\n");

    printf("Initial Value of p1 : %d\n",*p1);
    printf("Initial Value of p2 : %d\n",*p2);

    printf("Difference Between Pointers : %ld\n",p2-p1);

    p1=p1+2;
    printf("After p1+2 : %d\n",*p1);

    p2=p2-1;
    printf("After p2-1 : %d\n",*p2);

    printf("Difference Between Pointers Now : %ld\n",p2-p1);
}
