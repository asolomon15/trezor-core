#ifndef __BOARDLOADER_LOWLEVEL_H__
#define __BOARDLOADER_LOWLEVEL_H__

#include <stdbool.h>

void flash_set_option_bytes(void);
bool flash_check_option_bytes(void);

#endif
