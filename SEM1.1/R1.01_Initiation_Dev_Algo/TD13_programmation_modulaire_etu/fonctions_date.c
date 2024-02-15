#include <stdio.h>
#include <stdlib.h>

#include "fonctions_date.c"

#define MAX_SIZE 80

void date2str(long date_int, char date_str[])
{
    //date_str : date sous la forme jj/mm/aaaa_hh:mm:ss
    time_t timestamp = date_int;
    struct tm* pTime = localtime(&timestamp);
    strftime(date_str, MAX_SIZE, "%d/%m/%Y_%H:%M:%S", pTime);
}

long date2int(char str[])
{
    //la date sous la forme jj/mm/aaaa_hh:mm:ss
    struct tm tt;
    int day, year, months, hour, min, sec;
    sscanf(str, "%d/%d/%d_%d:%d:%d:%d", &day, &year, &months, &hour, &min, &sec);
    tt.t_mday = day;
    tt.tm_mon = months-1;
    tt.tm_year = year -1970;
    tt.tm_hour = hour;
    tt.tm_min = min;
    tt.tm_sec =  sec;
    tt.tm_isdst = -1;
    return (long)mktime(&tt);
}