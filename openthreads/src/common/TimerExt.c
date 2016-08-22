#include <stdio.h>
#include <timers.h>
#include <sys/times.h>
/* see VxWorks timeLib develop guide */
/*
name_of_zone:<(unused)>:time_in_minutes_from_UTC:daylight_start:daylight_end
*/
/* mmddhh */
/*
static void getTimeZone(time_t t, int *min, int *dst)
{
    struct tm dstTm;
    char *tz = getenv(TZ_ENV);
    *dst = (localtime_r(&t, &dstTm)==OK) ? dstTm.tm_isdst : 0;

    if (tz)
    {   

        const char *p = tz;
        int i = 0;
        while ( (i < 2) && (p = strchr(p, ':')) )
        {
           ++p;
           ++i;
        }
        if (p)
        {
            if (sscanf(p, "%d", min)!=1)
            {
                *min = 0;
            }
        }
    }
}
*/

int gettimeofday(struct timeval *tv, struct timezone *tz)
{
    int ret;
    struct timespec tp;

    if  ( (ret=clock_gettime(CLOCK_REALTIME, &tp))==0)
    {
    	tv->tv_sec = tp.tv_sec;
    	tv->tv_usec = (tp.tv_nsec + 500) / 1000;  

        /*if (tz != NULL)
        {
            getTimeZone(tp.tv_sec, &tz->tz_minuteswest, &tz->tz_dsttime);
        }
        */
    }
     return ret;
}

