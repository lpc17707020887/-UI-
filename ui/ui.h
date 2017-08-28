#ifndef _UI_H
#define _UI_H

#include "oled_bsp.h"
#include "oled_font.h"

typedef enum
{
    PAGE_1 = 0,
    PAGE_2,
    PAGE_3,
}
CurrentPage;

typedef enum
{
    OK_KEY = 0,
    ESC_KEY,
    UP_KEY,
    DOWN_KEY,
}
TriggleKey;




void OLED_Update_Task(void);

#endif


