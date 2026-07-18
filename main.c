#include<stdio.h>
#include<string.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float tax;
    float grossSalary;
    float netSalary;
};

void addEmployee(struct Employee e[],int *N);
void displayEmployees(struct Employee e[],int N);
void searchEmployee(struct Employee e[],int N);
void updateEmployee(struct Employee e[],int N);
void sortEmployees(struct Employee e[],int N);

int main() {

    struct Employee e[100];
    int N=0;
    int choice;

    do {

        printf("\n-------------------------------\n");
        printf("            MAIN MENU");
        printf("\n-------------------------------\n");

        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Sort by Net Salary\n");
        printf("6. Exit\n");

        printf("\nEnter Choice : ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
                addEmployee(e,&N);
                break;

            case 2:
                displayEmployees(e,N);
                break;

            case 3:
                searchEmployee(e,N);
                break;

            case 4:
                updateEmployee(e,N);
                break;

            case 5:
                sortEmployees(e,N);
                printf("Employees Sorted Successfully!!\n");
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

void addEmployee(struct Employee e[],int *N) {

    printf("Enter Employee ID : ");
    scanf("%d",&e[*N].id);

    printf("Enter Employee Name : ");
    scanf(" %[^\n]",e[*N].name);

    printf("Enter Basic Salary : ");
    scanf("%f",&e[*N].basicSalary);

    e[*N].hra=e[*N].basicSalary*0.20;
    e[*N].da=e[*N].basicSalary*0.10;
    e[*N].grossSalary=e[*N].basicSalary+e[*N].hra+e[*N].da;

    if(e[*N].grossSalary>50000)
        e[*N].tax=e[*N].grossSalary*0.10;
    else
        e[*N].tax=e[*N].grossSalary*0.05;

    e[*N].netSalary=e[*N].grossSalary-e[*N].tax;

    (*N)++;

    printf("Employee Added Successfully!!\n");
}

void displayEmployees(struct Employee e[],int N) {

    if(N==0) {
        printf("No Employees Found!!\n");
        return;
    }

    printf("\nEmployee Details:\n");

    for(int i=0;i<N;i++) {

        printf("\nEmployee %d\n",i+1);
        printf("Employee ID : %d\n",e[i].id);
        printf("Employee Name : %s\n",e[i].name);
        printf("Basic Salary : %.2f\n",e[i].basicSalary);
        printf("HRA : %.2f\n",e[i].hra);
        printf("DA : %.2f\n",e[i].da);
        printf("Tax : %.2f\n",e[i].tax);
        printf("Gross Salary : %.2f\n",e[i].grossSalary);
        printf("Net Salary : %.2f\n",e[i].netSalary);
    }
}

void searchEmployee(struct Employee e[],int N) {

    int id;

    printf("Enter Employee ID to Search : ");
    scanf("%d",&id);

    for(int i=0;i<N;i++) {

        if(e[i].id==id) {

            printf("Employee ID : %d\n",e[i].id);
            printf("Employee Name : %s\n",e[i].name);
            printf("Basic Salary : %.2f\n",e[i].basicSalary);
            printf("HRA : %.2f\n",e[i].hra);
            printf("DA : %.2f\n",e[i].da);
            printf("Tax : %.2f\n",e[i].tax);
            printf("Gross Salary : %.2f\n",e[i].grossSalary);
            printf("Net Salary : %.2f\n",e[i].netSalary);

            return;
        }
    }

    printf("Employee Not Found!!\n");
}

void updateEmployee(struct Employee e[],int N) {

    int id;

    printf("Enter Employee ID to Update : ");
    scanf("%d",&id);

    for(int i=0;i<N;i++) {

        if(e[i].id==id) {

            printf("Enter Employee Name : ");
            scanf(" %[^\n]",e[i].name);

            printf("Enter New Basic Salary : ");
            scanf("%f",&e[i].basicSalary);

            e[i].hra=e[i].basicSalary*0.20;
            e[i].da=e[i].basicSalary*0.10;
            e[i].grossSalary=e[i].basicSalary+e[i].hra+e[i].da;

            if(e[i].grossSalary>50000)
                e[i].tax=e[i].grossSalary*0.10;
            else
                e[i].tax=e[i].grossSalary*0.05;

            e[i].netSalary=e[i].grossSalary-e[i].tax;

            printf("Employee Updated Successfully!!\n");

            return;
        }
    }

    printf("Employee Not Found!!\n");
}

void sortEmployees(struct Employee e[],int N) {

    struct Employee temp;

    for(int i=0;i<N-1;i++) {

        for(int j=0;j<N-i-1;j++) {

            if(e[j].netSalary>e[j+1].netSalary) {

                temp=e[j];
                e[j]=e[j+1];
                e[j+1]=temp;
            }
        }
    }
}