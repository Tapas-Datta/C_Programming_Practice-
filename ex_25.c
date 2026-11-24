# include <stdio.h>
int main () {
    int num;
    int i ;
    char name[50]; 
    int salary ; 
    int hours; 
    int final_salary;
   
    printf("how many employee salary you want to calculate: ");
    scanf("%d",&num);
    for (i = 1 ; i <= num; i++){
        printf("enter the name of your employee:\n ");
        scanf("%49s",name);
        printf("Enter your basic salary:\n ");
        scanf("%d",&salary);
        printf("plesase,enter your working hours:\n ");
        scanf("%d",&hours);
        if (hours > 40) {
            final_salary = salary + ((hours - 40) * 15);
        }
        else {
            final_salary = salary;
        }
        printf("Name: %s\n",name);
        printf("Final Salary: %d\n",final_salary);
    }

    return 0;
}