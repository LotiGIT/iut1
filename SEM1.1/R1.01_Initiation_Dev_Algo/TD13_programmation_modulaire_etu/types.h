#ifndef TYPES_H
#define TYPES_H

#include "const.h"

// definition des types
typedef char t_message [MAX_CAR];

typedef char t_dateStr[MAX_CAR_DATE];

typedef struct 
{
    t_message message;
    t_dateStr dateStr;
}t_element;

typedef struct 
{
    t_element tabElt[MAX_MESSAGE];
    int nbElt;
}t_file;

#endif

