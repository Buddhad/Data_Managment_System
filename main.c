/*
 * @author
 *  -Developed by Apaar Gupta
 *  -Project by Code-to-Contribute
 */
#include<stdio.h>
#include<time.h>
 /*
 * Time.h header file is used here to get current time from system.
 */
int Data(int n);
void reuse();
 FILE *ptr;

struct Students{
    int id;
    char name[20];
    char task[50];
};

int main(){
    time_t t;
    time(&t);
    char name[50];
    ptr = fopen("CodetoContribute.txt","a");
    fprintf(ptr,"\t---------To-Do List--------- \n");
    fprintf(ptr,"\t---------Made By Buddhadeb--------- \n");
    printf("---------To-Do List--------- \n");
    printf("---------Made By Buddhadeb------ \n");
    printf("Enter Your name:  \n", name);
    scanf("%s",&name);
    printf(" \t  Hi! %s Welcome to the TO-DO List  \n",name);
    
    printf("----------------------------------------------------------------- \n ");
    fprintf(ptr,"These entries has been written by %s at (date and time): %s \n",name, ctime(&t));
    fclose(ptr);
    // Date and time will be Printed when data will be written in text file
    reuse();
}
void reuse(){
    int num;
    printf("Press 1 to Continue and Any to Exit \n");
    scanf("%d",&num);
    if(num == 1)
        Data(num);
    else
        printf("Thank You ");
}

int Data(int num){

    struct Students Class10[20];
    FILE *ptr;
    ptr = fopen("CodetoContribute.txt","a");
    int i, no_of_entry;
    char name[50],task[100];
    printf("Please Enter the no. of Entries to be Stored \n");
    scanf("%d", &no_of_entry);

        for (i = 1; i <= no_of_entry; i++) {

            
            printf("Enter the id of Task %d :  \n", i);
            scanf("%d", &Class10[i].id);
            fprintf(ptr, "\tTask - %d \n", Class10[i].id); // Writing all the contents to File

            // printf("Enter Your name:  \n", i);
            // scanf("%s",&Class10[i].name);
            // fprintf(ptr, "\tName - %s \n", Class10[i].name);// Writing all the contents to File
            printf("What you Want to do Today  :  \n");
            scanf("%s",&Class10[i].task);
            fprintf(ptr, "\tTask - %s \n", Class10[i].task);// Writing all the contents to File
    
            fprintf(ptr,"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-* \n ");
            printf("-------------------------------- \n ");
            char a[50];
    reuse();
    return 0;
}
}
