# include <stdio.h>
int main () {
    char name[50];
    int marks;
    int i;
    int subject_1;
    int subject_2;
    int subject_3;
    int total ;
    float average;
    printf("Enter how many students marks you want to calculate:");
    scanf("%d",&marks);
    for ( i = 1 ; i <= marks; i++ ) {
        printf("Enter your name");
        scanf(" %49[^\n]", name);
        printf("Enter your first subject marks: ");
        scanf("%d",&subject_1);
        printf("Enter your second subject marks: ");
        scanf("%d",&subject_2);
        printf("Enter your third subject marks: ");
        scanf("%d",&subject_3);
        total =(subject_1 + subject_2 + subject_3 ) ;
        average = (double) total / 3;
        if (average >= 50){
            printf("your are passed\n");
        }
        else {
            printf("you are failled\n");
        }
        printf("Student name:%s\n",name);
        printf("Your student total marks is:%d\n", total);
        printf("your average is:%.2f\n",average);
    }
    return 0 ;
}