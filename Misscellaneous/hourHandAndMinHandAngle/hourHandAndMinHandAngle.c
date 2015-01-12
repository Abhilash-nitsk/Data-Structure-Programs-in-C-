/** \brief Program to find the angle between hour and minute hand of clock  Author : @AbhilashAgarwal */

#include<stdio.h>
#include<process.h>

int main()
{
        float hour, minute, MAngle, HAngle, result;
        printf("\nEnter the Hour hand position : ");
        scanf("%f", &hour);
        printf("\nEnter the Minute hand position : ");
        scanf("%f", &minute);
        if (hour <0 || minute < 0 || hour >12 || minute > 60)
        {printf("Wrong input");
        exit(1);}
        if(hour==12)
                hour= 0;
        if(minute == 60)
                minute = 0;
        MAngle = 6*minute;
        HAngle = ((minute/60) * 30) + (hour * 30);
        result = MAngle-HAngle;
        printf("\nThe resultant Angle is  :  %f", result);
}
