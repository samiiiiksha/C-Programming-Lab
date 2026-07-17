#include<stdio.h>
#include<string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

void addStudent(struct Student s[],int *N);
void displayStudents(struct Student s[],int N);
void searchStudent(struct Student s[],int N);
void updateStudent(struct Student s[],int N);
void deleteStudent(struct Student s[],int *N);

int main() {

    struct Student s[100];
    int N=0;
    int choice;

    do {
        printf("\n-------------------------------\n");
        printf("            MAIN MENU");
        printf("\n-------------------------------\n");

        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("\nEnter Choice : ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
                addStudent(s,&N);
                break;

            case 2:
                displayStudents(s,N);
                break;

            case 3:
                searchStudent(s,N);
                break;

            case 4:
                updateStudent(s,N);
                break;

            case 5:
                deleteStudent(s,&N);
                break;

            case 6:
                printf("Program Ended!!\n");
                break;

            default:
                printf("Invalid Choice!!\n");
        }

    } while(choice!=6);

    return 0;
}

void addStudent(struct Student s[],int *N) {

    printf("Enter Roll Number : ");
    scanf("%d",&s[*N].rollNo);

    printf("Enter Name : ");
    scanf(" %[^\n]",s[*N].name);

    printf("Enter Marks : ");
    scanf("%f",&s[*N].marks);

    (*N)++;

    printf("Student Added Successfully!!\n");
}

void displayStudents(struct Student s[],int N) {

    if(N==0) {
        printf("No Student Records Found!!\n");
        return;
    }

    printf("\nStudent Records:\n");

    for(int i=0;i<N;i++) {
        printf("\nStudent %d\n",i+1);
        printf("Roll Number : %d\n",s[i].rollNo);
        printf("Name : %s\n",s[i].name);
        printf("Marks : %.2f\n",s[i].marks);
    }
}

void searchStudent(struct Student s[],int N) {

    int roll;

    printf("Enter Roll Number to Search : ");
    scanf("%d",&roll);

    for(int i=0;i<N;i++) {
        if(s[i].rollNo==roll) {
            printf("Roll Number : %d\n",s[i].rollNo);
            printf("Name : %s\n",s[i].name);
            printf("Marks : %.2f\n",s[i].marks);
            return;
        }
    }

    printf("Student Not Found!!\n");
}

void updateStudent(struct Student s[],int N) {

    int roll;

    printf("Enter Roll Number to Update : ");
    scanf("%d",&roll);

    for(int i=0;i<N;i++) {

        if(s[i].rollNo==roll) {

            printf("Enter New Name : ");
            scanf(" %[^\n]",s[i].name);

            printf("Enter New Marks : ");
            scanf("%f",&s[i].marks);

            printf("Record Updated Successfully!!\n");
            return;
        }
    }

    printf("Student Not Found!!\n");
}

void deleteStudent(struct Student s[],int *N) {

    int roll;

    printf("Enter Roll Number to Delete : ");
    scanf("%d",&roll);

    for(int i=0;i<*N;i++) {

        if(s[i].rollNo==roll) {

            for(int j=i;j<*N-1;j++) {
                s[j]=s[j+1];
            }

            (*N)--;

            printf("Record Deleted Successfully!!\n");
            return;
        }
    }

    printf("Student Not Found!!\n");
}
