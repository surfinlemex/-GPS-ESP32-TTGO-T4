#include "font.h"
#include "f6x8m.h"
#include "f16f.h"
#include "f24f.h"
#include "f32f.h"


//A table with pointers on the function of extracting the font symbol table. Font so far
const t_font_getchar font_table_funcs[] =
{
  f6x8m_GetCharTable,
  f10x16f_GetCharTable,
  f24f_GetCharTable,
  f32f_GetCharTable
};


// The feature returns a pointer to the structure that describes the Char symbol
uint8_t *font_GetFontStruct(uint8_t FontID, uint8_t Char)
{
  return font_table_funcs[FontID](Char);
}


// Return Char width
uint8_t font_GetCharWidth(uint8_t *pCharTable)
{
	if (!pCharTable)
		return 0;

	return *pCharTable;  // Pointer to Width
}


// Return Char Height
uint8_t font_GetCharHeight(uint8_t *pCharTable)
{
	if (!pCharTable)
		return 0;

	pCharTable++;
	return *pCharTable;  // Pointer to Height
}
