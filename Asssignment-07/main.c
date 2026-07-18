#include<stdio.h>
#include<string.h>

struct Patient {
    int id;
    char name[50];
    int age;
    char gender[20];
    char disease[50];
};

void registerPatient(struct Patient p[],int *N);
void displayPatients(struct Patient p[],int N);
void searchPatient(struct Patient p[],int N);
void updatePatient(struct Patient p[],int N);
void deletePatient(struct Patient p[],int *N);

int main() {

    struct Patient p[100];
    int N=0;
    int choice;

    do {

        printf("\n-------------------------------\n");
        printf("            MAIN MENU");
        printf("\n-------------------------------\n");

        printf("1. Register Patient\n");
        printf("2. Display Patients\n");
        printf("3. Search Patient\n");
        printf("4. Update Patient\n");
        printf("5. Delete Patient\n");
        printf("6. Exit\n");

        printf("\nEnter Choice : ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
                registerPatient(p,&N);
                break;

            case 2:
                displayPatients(p,N);
                break;

            case 3:
                searchPatient(p,N);
                break;

            case 4:
                updatePatient(p,N);
                break;

            case 5:
                deletePatient(p,&N);
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

void registerPatient(struct Patient p[],int *N) {

    printf("Enter Patient ID : ");
    scanf("%d",&p[*N].id);

    printf("Enter Patient Name : ");
    scanf(" %[^\n]",p[*N].name);

    printf("Enter Patient Age : ");
    scanf("%d",&p[*N].age);

    printf("Enter Patient Gender : ");
    scanf(" %[^\n]",p[*N].gender);

    printf("Enter Disease : ");
    scanf(" %[^\n]",p[*N].disease);

    (*N)++;

    printf("Patient Registered Successfully!!\n");
}

void displayPatients(struct Patient p[],int N) {

    if(N==0) {
        printf("No Patients Found!!\n");
        return;
    }

    printf("\nPatient Details:\n");

    for(int i=0;i<N;i++) {

        printf("\nPatient %d\n",i+1);
        printf("Patient ID : %d\n",p[i].id);
        printf("Patient Name : %s\n",p[i].name);
        printf("Patient Age : %d\n",p[i].age);
        printf("Patient Gender : %s\n",p[i].gender);
        printf("Disease : %s\n",p[i].disease);
    }
}

void searchPatient(struct Patient p[],int N) {

    int id;

    printf("Enter Patient ID to Search : ");
    scanf("%d",&id);

    for(int i=0;i<N;i++) {

        if(p[i].id==id) {

            printf("Patient ID : %d\n",p[i].id);
            printf("Patient Name : %s\n",p[i].name);
            printf("Patient Age : %d\n",p[i].age);
            printf("Patient Gender : %s\n",p[i].gender);
            printf("Disease : %s\n",p[i].disease);

            return;
        }
    }

    printf("Patient Not Found!!\n");
}

void updatePatient(struct Patient p[],int N) {

    int id;

    printf("Enter Patient ID to Update : ");
    scanf("%d",&id);

    for(int i=0;i<N;i++) {

        if(p[i].id==id) {

            printf("Enter New Patient Name : ");
            scanf(" %[^\n]",p[i].name);

            printf("Enter New Patient Age : ");
            scanf("%d",&p[i].age);

            printf("Enter New Patient Gender : ");
            scanf(" %[^\n]",p[i].gender);

            printf("Enter New Disease : ");
            scanf(" %[^\n]",p[i].disease);

            printf("Patient Updated Successfully!!\n");

            return;
        }
    }

    printf("Patient Not Found!!\n");
}

void deletePatient(struct Patient p[],int *N) {

    int id;

    printf("Enter Patient ID to Delete : ");
    scanf("%d",&id);

    for(int i=0;i<*N;i++) {

        if(p[i].id==id) {

            for(int j=i;j<*N-1;j++) {
                p[j]=p[j+1];
            }

            (*N)--;

            printf("Patient Deleted Successfully!!\n");

            return;
        }
    }

    printf("Patient Not Found!!\n");
}
