+#include<stdio.h>
#include <time.h>
int main()
{

   //----------------------------------------------X----Time part starts----x-----------------------------------------------------------------------

    
    time_t current_time;

    
    current_time = time(NULL);

    
    if (current_time == ((time_t)-1)) {
        printf("Error: Unable to get the current time.\n");
        return 1;
    }

    
    struct tm *local_time = localtime(&current_time);

    
    if (local_time == NULL) {
        printf("Error: Unable to convert time to local time.\n");
        return 1;
    }

    
    printf("Current Time:  %02d:%02d\n",
           
           local_time->tm_hour, local_time->tm_min);
    //-------------------------------------------X----Time Part ends----X---------------------------------------------------------------------


    //-------------------------------------------X----Day part starts----X---------------------------------------------------------------------
    time_t currentTimestamp;

    
    currentTimestamp = time(NULL);

  
    if (currentTimestamp == ((time_t)-1)) {
        printf("Error: Unable to get the current time.\n");
        return 1;
    }

   
    struct tm *localTimestamp = localtime(&currentTimestamp);

    
    if (localTimestamp == NULL) {
        printf("Error: Unable to convert time to local time.\n");
        return 1;
    }

    
    const char *weekDays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    
    int currentDay = localTimestamp->tm_wday;

    
    printf("Today is: %s\n", weekDays[currentDay]);

    //----------------------------------------------------X----Day part ends----X------------------------------------------------------------------

    char monday[7][10]={"Period 1" , "Period 2", "Period 3" , "Lunch" , "Period 4" , "Period 5" , "Period 6" , "Period 7"};
    char tuesday[7][10]={"Period 1" , "Period 2", "Period 3" , "Lunch" , "Period 4" , "Period 5" , "Period 6" , "Period 7"};
    char wednesday[7][10]={"Period 1" , "Period 2", "Period 3" , "Lunch" , "Period 4" , "Period 5" , "Period 6" , "Period 7"};
    char thursday[7][10]={"Period 1" , "Period 2", "Period 3" , "Lunch" , "Period 4" , "Period 5" , "Period 6" , "Period 7"};
    char friday[7][10]={"Period 1" , "Period 2", "Period 3" , "Lunch" , "Period 4" , "Period 5" , "Period 6" , "Period 7"};
//-------------------------------------------------------------------------------------------------------------------------------------------------
    if (weekDays[currentDay]=="Monday")
    {
        if (local_time->tm_hour == 9 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , monday[0]);
        }
        else if (local_time->tm_hour == 10 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , monday[1]);
        }
        else if (local_time->tm_hour == 11 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , monday[2]);
        }
        else if (local_time->tm_hour == 12 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Its Lunch time you Nigga");
        }
        else if (local_time->tm_hour == 13 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , monday[4]);
        }
        else if (local_time->tm_hour == 14 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , monday[5]);
        }
        else if (local_time->tm_hour == 15 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , monday[6]);
        }
        else if (local_time->tm_hour == 16 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , monday[7]);
        }
        else
        {
            printf("Konse samay mei jii raha hai bhai tu");
        }
        
        
        
    }
    else if (weekDays[currentDay]=="Tuesday")
    {
        if (local_time->tm_hour == 9 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , tuesday[0]);
        }
        else if (local_time->tm_hour == 10 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , tuesday[1]);
        }
        else if (local_time->tm_hour == 11 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , tuesday[2]);
        }
        else if (local_time->tm_hour == 12 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Its lunch time you Nigga");
        }
        else if (local_time->tm_hour == 13 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , tuesday[4]);
        }
        else if (local_time->tm_hour == 14 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , tuesday[5]);
        }
        else if (local_time->tm_hour == 15 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , tuesday[6]);
        }
        else if (local_time->tm_hour == 16 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , tuesday[7]);
        }
        
    }
    else if (weekDays[currentDay]=="Wednesday")
    {
        if (local_time->tm_hour == 9 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , wednesday[0]);
        }
        else if (local_time->tm_hour == 10 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , wednesday[1]);
        }
        else if (local_time->tm_hour == 11 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , wednesday[2]);
        }
        else if (local_time->tm_hour == 12 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Its lunch time you Nigga");
        }
        else if (local_time->tm_hour == 13 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , wednesday[4]);
        }
        else if (local_time->tm_hour == 14 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , wednesday[5]);
        }
        else if (local_time->tm_hour == 15 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , wednesday[6]);
        }
        else if (local_time->tm_hour == 16 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , wednesday[7]);
        }
        
    }
    else if (weekDays[currentDay]=="Thursday")
    {
        if (local_time->tm_hour == 9 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , thursday[0]);
        }
        else if (local_time->tm_hour == 10 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , thursday[1]);
        }
        else if (local_time->tm_hour == 11 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , tuesday[2]);
        }
        else if (local_time->tm_hour == 12 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Its lunch time you Nigga");
        }
        else if (local_time->tm_hour == 13 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , thursday[4]);
        }
        else if (local_time->tm_hour == 14 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , thursday[5]);
        }
        else if (local_time->tm_hour == 15 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , thursday[6]);
        }
        else if (local_time->tm_hour == 16 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , thursday[7]);
        }
        
    }
    else if (weekDays[currentDay]=="Friday")
    {
        if (local_time->tm_hour == 9 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , friday[0]);
        }
        else if (local_time->tm_hour == 10 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , friday[1]);
        }
        else if (local_time->tm_hour == 11 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , friday[2]);
        }
        else if (local_time->tm_hour == 12 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Its lunch time you Nigga");
        }
        else if (local_time->tm_hour == 13 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , friday[4]);
        }
        else if (local_time->tm_hour == 14 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , friday[5]);
        }
        else if (local_time->tm_hour == 15 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , friday[6]);
        }
        else if (local_time->tm_hour == 16 && (local_time->tm_min == 0 || local_time->tm_min < 59) )
        {
            printf("Your current period is %s\n" , friday[7]);
        }
        
    }
    else
    {
        printf("Enjoy your holidays Nigga");
    }
    
    
    

    




    return 0;
}