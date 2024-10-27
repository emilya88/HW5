#include <stdio.h>

 struct Time{
    int hours;
    int minutes;
    int seconds;
 
};
struct Time add_times(struct Time t1, struct Time t2){
    struct Time final;
    final.seconds= t1.seconds + t2.seconds;
    final.minutes= t1.minutes + t2.minutes+ (final.seconds/60);
    final.seconds %= 60;
    final.hours= t1.hours + t2.hours + (final.minutes/60);
    final.minutes %= 60;
    return final;
}


int main(){
    struct Time t1, t2, final;

    printf("Enter first time\n");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
    
     printf("Enter second time\n");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);
    
    final=add_times(t1, t2);

    printf( " Time : %02d:%02d:%02d\n", final.hours, final.minutes, final.seconds);

    return 0;
    
    }