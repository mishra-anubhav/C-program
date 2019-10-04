#include<stdio.h>
struct time
{
int hours;
int minutes;
int seconds;
};
void main()
{
struct time p,q,r;
int day=0;
printf("Enter First Time:\n");
printf("Hours:");
scanf("%d",&p.hours);
printf("\nMinutes:");
scanf("%d",&p.minutes);
printf("\nSecond:");
scanf("%d",&p.seconds);
printf("\n\nEnter Seconnd Time:");
printf("\nHours:");
scanf("%d",&q.hours);
printf("\nMinutes:");
scanf("%d",&q.minutes);
printf("\nSeconds:");
scanf("%d",&q.seconds);
r.hours=p.hours+q.hours;
r.minutes=p.minutes+q.minutes;
r.seconds=p.seconds+q.seconds;
if(r.seconds>60)
{
r.minutes=r.minutes+r.seconds/60;
r.seconds=r.seconds%60;
}
if(r.minutes>60)
{
r.hours+=r.minutes/60;
r.minutes=r.minutes%60;
}
if(r.hours>24)
{
day=r.hours/24;
r.hours=r.hours%24;
}
printf("\n\nTotal Time:\n");
printf("\n Total Day=%d",day);
printf("\n Total Hours %d",r.hours);
printf("\n Total Minutes %d",r.minutes);
printf("\n Total Seconds %d",r.seconds);
}