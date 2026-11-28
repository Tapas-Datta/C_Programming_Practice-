# include <stdio.h>
int main () {
    int previous_odometer ;
    int current_odometer ;
    int used_fuel ;
    int total_travel;
    printf("Enter the Previous odometer reading (KM)");
    scanf("%d",&previous_odometer);
    printf("Enter the current odometer reading (KM)");
    scanf("%d",&current_odometer);
     if (previous_odometer > current_odometer){
        printf("you did wrong,please check");
        return 0;
    }
    printf("enter your used fuels: ");
    scanf("%d",&used_fuel);
    total_travel =  current_odometer -previous_odometer;
    int fuel_efficency = total_travel / used_fuel;
    int fuel_consumption =  (used_fuel / total_travel) * 100;
    printf("Total travel:%d\n",total_travel);
    printf("Fuel Efficency:%d\n",fuel_efficency);
    printf("Fuel Consumption:%d\n",fuel_consumption);
    return 0;
}