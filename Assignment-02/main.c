#include<stdio.h>
#include<string.h>

void length(char str[]);
void reverse(char str[]);
void palindrome(char str[]);
void countVowels(char str[]);
void countDigits(char str[]);
void countSpaces(char str[]);
void charFrequency(char str[]);

int main() {

    char str[100];
    int choice;

    do {
        printf("\n-------------------------------\n");
        printf("            MAIN MENU");
        printf("\n-------------------------------\n");

        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Check Palindrome\n");
        printf("4. Count Vowels\n");
        printf("5. Count Digits\n");
        printf("6. Count Spaces\n");
        printf("7. Character Frequency\n");
        printf("8. Exit\n");

        printf("\nEnter Choice : ");
        scanf("%d",&choice);

        if(choice!=8) {
            printf("\nEnter a String : ");
            scanf(" %[^\n]",str);
        }

        switch(choice) {
            case 1:
                length(str);
                break;

            case 2:
                reverse(str);
                break;

            case 3:
                palindrome(str);
                break;

            case 4:
                countVowels(str);
                break;

            case 5:
                countDigits(str);
                break;

            case 6:
                countSpaces(str);
                break;

            case 7:
                charFrequency(str);
                break;

            case 8:
                printf("Program Ended!!\n");
                break;

            default:
                printf("Invalid Choice!!\n");
        }

    } while(choice != 8);

    return 0;
}

void length(char str[]) {
    int count=0;

    for(int i=0;str[i]!='\0';i++) {
        count++;
    }

    printf("Length of String : %d\n",count);
}

void reverse(char str[]) {
    int n=strlen(str);
    char rev[100];

    for(int i=0;i<n;i++) {
        rev[i]=str[n-1-i];
    }

    rev[n]='\0';

    printf("Reversed String : %s\n",rev);
}

void palindrome(char str[]) {
    int n=strlen(str);
    int isPalindrome=1;
    char a,b;

    for(int i=0;i<n/2;i++) {
        a=str[i];
        b=str[n-1-i];

        if(a>='A' && a<='Z')
            a=a+32;

        if(b>='A' && b<='Z')
            b=b+32;

        if(a!=b) {
            isPalindrome=0;
            break;
        }
    }

    if(isPalindrome)
        printf("The String is a Palindrome\n");
    else
        printf("The String is Not a Palindrome\n");
}

void countVowels(char str[]) {
    int count=0;

    for(int i=0;str[i]!='\0';i++) {
        char c=str[i];

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
            count++;
        }
    }

    printf("Number of Vowels : %d\n",count);
}

void countDigits(char str[]) {
    int count=0;

    for(int i=0;str[i]!='\0';i++) {
        if(str[i]>='0' && str[i]<='9')
            count++;
    }

    printf("Number of Digits : %d\n",count);
}

void countSpaces(char str[]) {
    int count=0;

    for(int i=0;str[i]!='\0';i++) {
        if(str[i]==' ')
            count++;
    }

    printf("Number of Spaces : %d\n",count);
}

void charFrequency(char str[]) {
    char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int count;

    printf("Character Frequency : \n");

    for(int i=0;i<26;i++) {
        count=0;

        for(int j=0;str[j]!='\0';j++) {
            char c=str[j];

            if(c>='A' && c<='Z')
                c=c+32;

            if(c==alphabet[i])
                count++;
        }

        if(count>0)
            printf("%c : %d\n",alphabet[i],count);
    }
}
