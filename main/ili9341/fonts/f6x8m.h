#ifndef _F6X8M_H
#define _F6X8M_H

#include "esp_system.h"


#define f6x8_MONO_WIDTH         6
#define f6x8_MONO_HEIGHT        8

#define f6x8m_NOFCHARS           256


uint8_t *f6x8m_GetCharTable(uint8_t Char);

#endif
