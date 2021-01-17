#include <stdio.h>
#include <stdlib.h>
 
int main() {
    FILE *file_path;
    char name[50];
    int roll_no,  i, n;
    float marks;
 
    file_path = fopen("ledger.txt", "w");
 
    if(file_path == NULL) {
        printf("file can't be opened\n");
        exit(1);
    }
 
    printf("Enter the number of student details you want to enter: ");
    scanf("%d", &n);
 
    for(i = 0; i < n; i++) {
        fflush(stdin);
        printf("\nEnter the details of student %d \n\n", i +1);
        printf("Enter name of the student: ");
        gets(name);
 
        printf("Enter roll no: ");
        scanf("%d", &roll_no);
 
        printf("Enter marks: ");
        scanf("%f", &marks);
 
        fprintf(file_path, "Name: %s\t Roll no: %d \tMarks: %f \n", name, roll_no, marks);
 
        printf("\n Details successfully written to the file\n\n");
    }
 
    fclose(file_path);
 
    return 0;
}