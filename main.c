#include<stdio.h>
#include<stdlib.h>

void insertElement(int a[],int *N);
void displayElements(int a[],int N);
void updateElement(int a[],int N);
void deleteElement(int a[],int *N);
void linearSearch(int a[],int N);
void sortArray(int a[],int N);
void binarySearch(int a[],int N);

int main() {

    int a[100];
    int N=0;
    int choice;

    do {

        printf("\n-------------------------------\n");
        printf("            MAIN MENU");
        printf("\n-------------------------------\n");

        printf("1. Insert Element\n");
        printf("2. Display Elements\n");
        printf("3. Update Element\n");
        printf("4. Delete Element\n");
        printf("5. Linear Search\n");
        printf("6. Sort Array\n");
        printf("7. Binary Search\n");
        printf("8. Exit\n");

        printf("\nEnter Choice : ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
                insertElement(a,&N);
                break;

            case 2:
                displayElements(a,N);
                break;

            case 3:
                updateElement(a,N);
                break;

            case 4:
                deleteElement(a,&N);
                break;

            case 5:
                linearSearch(a,N);
                break;

            case 6:
                sortArray(a,N);
                printf("Array Sorted Successfully!!\n");
                break;

            case 7:
                binarySearch(a,N);
                break;

            case 8:
                printf("Program Ended!!\n");
                break;

            default:
                printf("Invalid Choice!!\n");
        }

    } while(choice!=8);

    return 0;
}

void insertElement(int a[],int *N) {

    printf("Enter Element : ");
    scanf("%d",&a[*N]);

    (*N)++;

    printf("Element Inserted Successfully!!\n");
}

void displayElements(int a[],int N) {

    if(N==0) {
        printf("Array is Empty!!\n");
        return;
    }

    printf("Array Elements : ");

    for(int i=0;i<N;i++) {
        printf("%d ",a[i]);
    }

    printf("\n");
}

void updateElement(int a[],int N) {

    int pos;

    printf("Enter Position to Update : ");
    scanf("%d",&pos);

    if(pos<1 || pos>N) {
        printf("Invalid Position!!\n");
        return;
    }

    printf("Enter New Element : ");
    scanf("%d",&a[pos-1]);

    printf("Element Updated Successfully!!\n");
}

void deleteElement(int a[],int *N) {

    int pos;

    printf("Enter Position to Delete : ");
    scanf("%d",&pos);

    if(pos<1 || pos>*N) {
        printf("Invalid Position!!\n");
        return;
    }

    for(int i=pos-1;i<*N-1;i++) {
        a[i]=a[i+1];
    }

    (*N)--;

    printf("Element Deleted Successfully!!\n");
}

void linearSearch(int a[],int N) {

    int key;

    printf("Enter Element to Search : ");
    scanf("%d",&key);

    for(int i=0;i<N;i++) {

        if(a[i]==key) {
            printf("Element Found at Position %d\n",i+1);
            return;
        }
    }

    printf("Element Not Found!!\n");
}

void sortArray(int a[],int N) {

    int temp;

    for(int i=0;i<N-1;i++) {

        for(int j=0;j<N-i-1;j++) {

            if(a[j]>a[j+1]) {

                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void binarySearch(int a[],int N) {

    int key;
    int low=0;
    int high=N-1;
    int mid;

    printf("Enter Element to Search : ");
    scanf("%d",&key);

    while(low<=high) {

        mid=(low+high)/2;

        if(a[mid]==key) {
            printf("Element Found at Position %d\n",mid+1);
            return;
        }

        else if(a[mid]<key)
            low=mid+1;

        else
            high=mid-1;
    }

    printf("Element Not Found!!\n");
}