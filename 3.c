#include <stdio.h>

union SensorData{
    int temperature;
    float pressure;
    float humidity;
};


int main(){
    union SensorData sensor;
    int choice;


    printf("select the type of sensor\n");
    printf("1 - ttemperature\n");
    printf("2 - pressure\n");
    printf("3 - humidity");
    printf(" ennter your hoice\n");
    scanf("%d", &choice);


    if (choice==1){
        printf("enter temperature");
        scanf("%d", &sensor.temperature);
        printf("temperature sensor reading %d\n", sensor.temperature);

    }

    else if (choice==2){
        printf("enter pressure");
        scanf("%f", &sensor.pressure);
        printf("temperature sensor reading %.2f\n", sensor.pressure);

    }

    else{
        printf("enter humidity");
        scanf("%f", &sensor.humidity);
        printf("temperature sensor reading %.2f\n", sensor.humidity);
    }


    return 0;



}