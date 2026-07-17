#include<stdio.h>
#include<string.h>

struct Product {
    int id;
    char name[50];
    float price;
    int quantity;
};

void addProduct(struct Product p[],int *N);
void displayProducts(struct Product p[],int N);
void searchProduct(struct Product p[],int N);
void updateProduct(struct Product p[],int N);
void sortProducts(struct Product p[],int N);
void totalValue(struct Product p[],int N);

int main() {

    struct Product p[100];
    int N=0;
    int choice;

    do {

        printf("\n-------------------------------\n");
        printf("            MAIN MENU");
        printf("\n-------------------------------\n");

        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Product\n");
        printf("5. Sort by Price\n");
        printf("6. Calculate Total Inventory Value\n");
        printf("7. Exit\n");

        printf("\nEnter Choice : ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
                addProduct(p,&N);
                break;

            case 2:
                displayProducts(p,N);
                break;

            case 3:
                searchProduct(p,N);
                break;

            case 4:
                updateProduct(p,N);
                break;

            case 5:
                sortProducts(p,N);
                printf("Products Sorted Successfully!!\n");
                break;

            case 6:
                totalValue(p,N);
                break;

            case 7:
                printf("Program Ended!!\n");
                break;

            default:
                printf("Invalid Choice!!\n");
        }

    } while(choice!=7);

    return 0;
}

void addProduct(struct Product p[],int *N) {

    printf("Enter Product ID : ");
    scanf("%d",&p[*N].id);

    printf("Enter Product Name : ");
    scanf(" %[^\n]",p[*N].name);

    printf("Enter Product Price : ");
    scanf("%f",&p[*N].price);

    printf("Enter Product Quantity : ");
    scanf("%d",&p[*N].quantity);

    (*N)++;

    printf("Product Added Successfully!!\n");
}

void displayProducts(struct Product p[],int N) {

    if(N==0) {
        printf("No Products Found!!\n");
        return;
    }

    printf("\nProduct Details:\n");

    for(int i=0;i<N;i++) {

        printf("\nProduct %d\n",i+1);
        printf("Product ID : %d\n",p[i].id);
        printf("Product Name : %s\n",p[i].name);
        printf("Product Price : %.2f\n",p[i].price);
        printf("Product Quantity : %d\n",p[i].quantity);
    }
}

void searchProduct(struct Product p[],int N) {

    int id;

    printf("Enter Product ID to Search : ");
    scanf("%d",&id);

    for(int i=0;i<N;i++) {

        if(p[i].id==id) {

            printf("Product ID : %d\n",p[i].id);
            printf("Product Name : %s\n",p[i].name);
            printf("Product Price : %.2f\n",p[i].price);
            printf("Product Quantity : %d\n",p[i].quantity);

            return;
        }
    }

    printf("Product Not Found!!\n");
}

void updateProduct(struct Product p[],int N) {

    int id;

    printf("Enter Product ID to Update : ");
    scanf("%d",&id);

    for(int i=0;i<N;i++) {

        if(p[i].id==id) {

            printf("Enter New Product Name : ");
            scanf(" %[^\n]",p[i].name);

            printf("Enter New Product Price : ");
            scanf("%f",&p[i].price);

            printf("Enter New Product Quantity : ");
            scanf("%d",&p[i].quantity);

            printf("Product Updated Successfully!!\n");

            return;
        }
    }

    printf("Product Not Found!!\n");
}

void sortProducts(struct Product p[],int N) {

    struct Product temp;

    for(int i=0;i<N-1;i++) {

        for(int j=0;j<N-i-1;j++) {

            if(p[j].price>p[j+1].price) {

                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
}

void totalValue(struct Product p[],int N) {

    float total=0;

    for(int i=0;i<N;i++) {
        total=total+(p[i].price*p[i].quantity);
    }

    printf("Total Inventory Value : %.2f\n",total);
}
