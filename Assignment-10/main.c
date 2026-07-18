#include<stdio.h>

void inputArray(int a[],int *N);
void displayArray(int a[],int N);
void largestElement(int a[],int N);
void secondLargest(int a[],int N);
void smallestElement(int a[],int N);
void secondSmallest(int a[],int N);
void reverseArray(int a[],int N);
void removeDuplicates(int a[],int *N);
void countFrequency(int a[],int N);
void linearSearch(int a[],int N);
void sortArray(int a[],int N);

int main() {

    int a[100];
    int N=0;
    int choice;

    do {

        printf("\n-------------------------------\n");
        printf("            MAIN MENU");
        printf("\n-------------------------------\n");

        printf("1. Enter Array\n");
        printf("2. Display Array\n");
        printf("3. Find Largest Element\n");
        printf("4. Find Second Largest Element\n");
        printf("5. Find Smallest Element\n");
        printf("6. Find Second Smallest Element\n");
        printf("7. Reverse Array\n");
        printf("8. Remove Duplicates\n");
        printf("9. Count Frequency\n");
        printf("10. Linear Search\n");
        printf("11. Sort Array\n");
        printf("12. Exit\n");

        printf("\nEnter Choice : ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
                inputArray(a,&N);
                break;

            case 2:
                displayArray(a,N);
                break;

            case 3:
                largestElement(a,N);
                break;

            case 4:
                secondLargest(a,N);
                break;

            case 5:
                smallestElement(a,N);
                break;

            case 6:
                secondSmallest(a,N);
                break;

            case 7:
                reverseArray(a,N);
                printf("Array Reversed Successfully!!\n");
                break;

            case 8:
                removeDuplicates(a,&N);
                break;

            case 9:
                countFrequency(a,N);
                break;

            case 10:
                linearSearch(a,N);
                break;

            case 11:
                sortArray(a,N);
                printf("Array Sorted Successfully!!\n");
                break;

            case 12:
                printf("Program Ended!!\n");
                break;

            default:
                printf("Invalid Choice!!\n");
        }

    } while(choice!=12);

    return 0;
}

void inputArray(int a[],int *N) {

    printf("Enter Number of Elements : ");
    scanf("%d",N);

    for(int i=0;i<*N;i++) {

        printf("Enter Element %d : ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Array Entered Successfully!!\n");
}

void displayArray(int a[],int N) {

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

void largestElement(int a[],int N) {

    if(N==0) {

        printf("Array is Empty!!\n");
        return;
    }

    int largest=a[0];

    for(int i=1;i<N;i++) {

        if(a[i]>largest)
            largest=a[i];
    }

    printf("Largest Element : %d\n",largest);
}

void secondLargest(int a[],int N) {

    if(N<2) {

        printf("Not Enough Elements!!\n");
        return;
    }

    int largest=a[0];
    int second=a[0];

    for(int i=1;i<N;i++) {

        if(a[i]>largest) {

            second=largest;
            largest=a[i];
        }

        else if(a[i]>second && a[i]!=largest)
            second=a[i];
    }

    printf("Second Largest Element : %d\n",second);
}

void smallestElement(int a[],int N) {

    if(N==0) {

        printf("Array is Empty!!\n");
        return;
    }

    int smallest=a[0];

    for(int i=1;i<N;i++) {

        if(a[i]<smallest)
            smallest=a[i];
    }

    printf("Smallest Element : %d\n",smallest);
}

void secondSmallest(int a[],int N) {

    if(N<2) {

        printf("Not Enough Elements!!\n");
        return;
    }

    int smallest=a[0];
    int second=a[0];

    for(int i=1;i<N;i++) {

        if(a[i]<smallest) {

            second=smallest;
            smallest=a[i];
        }

        else if(a[i]<second && a[i]!=smallest)
            second=a[i];
    }

    printf("Second Smallest Element : %d\n",second);
}

void reverseArray(int a[],int N) {

    int temp;

    for(int i=0;i<N/2;i++) {

        temp=a[i];
        a[i]=a[N-i-1];
        a[N-i-1]=temp;
    }
}

void removeDuplicates(int a[],int *N) {

    for(int i=0;i<*N;i++) {

        for(int j=i+1;j<*N;j++) {

            if(a[i]==a[j]) {

                for(int k=j;k<*N-1;k++) {
                    a[k]=a[k+1];
                }

                (*N)--;
                j--;
            }
        }
    }

    printf("Duplicates Removed Successfully!!\n");
}

void countFrequency(int a[],int N) {

    int visited[100]={0};

    for(int i=0;i<N;i++) {

        if(visited[i]==1)
            continue;

        int count=1;

        for(int j=i+1;j<N;j++) {

            if(a[i]==a[j]) {

                count++;
                visited[j]=1;
            }
        }

        printf("%d occurs %d times\n",a[i],count);
    }
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
