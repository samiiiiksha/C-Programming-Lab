#include<stdio.h>

void display(int arr[], int N);
void highestLowest(int arr[], int N);
void total(int arr[], int N);
void average(int arr[], int N);
void search(int arr[], int N);
void sort(int arr[], int N);

int main() {

    int arr[100];
    int N;
    int choice;

    printf("Enter the number of students : ");
    scanf("%d",&N);

    printf("Enter the marks of %d students\n",N);

    for(int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }

    do {
        printf("\n-------------------------------\n");
        printf("            MAIN MENU");
        printf("\n-------------------------------\n");

        printf("1. Display Marks\n");
        printf("2. Show Highest & Lowest\n");
        printf("3. Calculate Total\n");
        printf("4. Calculate Average\n");
        printf("5. Search Student Marks\n");
        printf("6. Sort Marks\n");
        printf("7. Exit\n");

        printf("\nEnter Choice : ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                display(arr,N);
                break;

            case 2:
                highestLowest(arr,N);
                break;

            case 3:
                total(arr,N);
                break;

            case 4:
                average(arr,N);
                break;

            case 5:
                search(arr,N);
                break;

            case 6:
                sort(arr,N);
                printf("Marks Sorted!!\n");
                break;

            case 7:
                printf("Program Ended!!\n");
                break;

            default:
                printf("Invalid Choice!!\n");
        }

    } while(choice != 7);

    return 0;
}

void display(int arr[], int N) {
    printf("\nStudent Marks: \n");

    for(int i=0;i<N;i++) {
        printf("Student [%d] : %d\n",i+1,arr[i]);
    }
}

void highestLowest(int arr[], int N) {
    int highest=arr[0];
    int lowest=arr[0];

    for(int i=1;i<N;i++) {
        if(arr[i]>highest)
            highest=arr[i];

        if(arr[i]<lowest)
            lowest=arr[i];
    }

    printf("Highest Marks : %d\n",highest);
    printf("Lowest Marks : %d\n",lowest);
}

void total(int arr[], int N) {
    int sum=0;

    for(int i=0;i<N;i++)
        sum=sum+arr[i];

    printf("Total Marks : %d\n",sum);
}

void average(int arr[], int N) {
    int sum=0;
    float avg;

    for(int i=0;i<N;i++)
        sum=sum+arr[i];

    avg=(float)sum/N;

    printf("Average Marks : %.2f\n",avg);
}

void search(int arr[], int N) {
    int key;

    printf("Enter Student Number to Search: ");
    scanf("%d",&key);

    if(key>=1 && key<=N)
    {
        printf("Marks of Student %d : %d\n",key,arr[key-1]);
        return;
    } else {
        printf("Student Not Found!!\n");
    }
}

void sort(int arr[], int N) {
    int temp;

    for(int i=0;i<N-1;i++) {
        for(int j=0;j<N-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}