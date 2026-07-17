#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int N);
void statistics(int arr[],int N);

int main() {

    int *arr;
    int N;

    printf("Enter the Number of Students : ");
    scanf("%d",&N);

    arr=(int *)malloc(N*sizeof(int));

    if(arr==NULL) {
        printf("Memory Allocation Failed!!\n");
        return 0;
    }

    printf("Enter the Marks of %d Students\n",N);

    for(int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }

    display(arr,N);
    statistics(arr,N);

    free(arr);

    printf("Memory Released Successfully!!\n");

    return 0;
}

void display(int arr[],int N) {

    printf("\nStudent Marks:\n");

    for(int i=0;i<N;i++) {
        printf("Student [%d] : %d\n",i+1,arr[i]);
    }
}

void statistics(int arr[],int N) {

    int highest=arr[0];
    int lowest=arr[0];
    int sum=0;
    float average;

    for(int i=0;i<N;i++) {

        if(arr[i]>highest)
            highest=arr[i];

        if(arr[i]<lowest)
            lowest=arr[i];

        sum=sum+arr[i];
    }

    average=(float)sum/N;

    printf("\nStatistics\n");
    printf("Highest Marks : %d\n",highest);
    printf("Lowest Marks : %d\n",lowest);
    printf("Total Marks : %d\n",sum);
    printf("Average Marks : %.2f\n",average);
}