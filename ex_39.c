# include <stdio.h>
int main () {
    char name[50];
    int students;
    int i;
    int subject_1 ;
    int subject_2;
    int subject_3;
    char grade;
    int class_total = 0;
    double class_average;
    int highest_total = 0;
    int lowest_total = 0;
    printf("Enter how many students details you have: ");
    scanf("%d",&students);
    for (i = 1 ; i <= students; i++){
        printf("Enter the name: ");
        scanf(" %49[^\n]", name);
        
        printf("enter  marks for three subject: ");
        scanf("%d %d %d",&subject_1,&subject_2,&subject_3);
      
        int total_marks = subject_1 + subject_2 + subject_3;
       
        if (i == 1) {
        highest_total = total_marks;
         }
        else if (total_marks > highest_total) {
         highest_total = total_marks;
        }

        if ( i == 1){
            lowest_total = total_marks;
        }
        else if (total_marks < lowest_total){
            lowest_total = total_marks;
        }
        class_total += total_marks;
        class_average = (double) class_total / students ;
        double average = total_marks / 3.00;
        printf("Name: %s\n",name);
        printf("Average%.2f\n",average);
        if ( average >= 80){
            grade = 'A';
        }
        else if (average >= 70){
            grade = 'B';
        }
        else if (average >= 60){
            grade = 'C';
        }
        else if (average >= 50){
            grade = 'D';
        }
        else {
            grade = 'F';
        }
        printf("Grade:%c\n",grade);
    }
    

    printf("Class total:%d\n",class_total);
    printf("Class Average:%.2f",class_average);
    printf("Highest%d",highest_total);
    printf("Lowest%d",lowest_total);
    return 0 ;
}