#include "font.h"
#include "f32f.h"


const uint8_t f32f_table[f32f_NOFCHARS][64 + 2] = {
  // 0x30
  {
    15,
    f32_FLOAT_HEIGHT,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    _____XXX,XX______,
    ___XXXXX,XXXX____,
    ___XXXXX,XXXX____,
    __XXXX__,_XXXX___,
    __XXXX__,_XXXX___,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    __XXXX__,_XXXX___,
    __XXXX__,_XXXX___,
    ___XXXXX,XXXX____,
    ___XXXXX,XXXX____,
    _____XXX,XX______,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________}
  // 0x31
  ,{
    12,
    f32_FLOAT_HEIGHT,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,XXX_____,
    _______X,XXX_____,
    ______XX,XXX_____,
    _____XXX,XXX_____,
    ___XXXXX,XXX_____,
    __XXXXXX,XXX_____,
    __XXXX_X,XXX_____,
    __XXX__X,XXX_____,
    __X____X,XXX_____,
    _______X,XXX_____,
    _______X,XXX_____,
    _______X,XXX_____,
    _______X,XXX_____,
    _______X,XXX_____,
    _______X,XXX_____,
    _______X,XXX_____,
    _______X,XXX_____,
    _______X,XXX_____,
    _______X,XXX_____,
    _______X,XXX_____,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________}
  // 0x32
  ,{
    15,
    f32_FLOAT_HEIGHT,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    _____XXX,XXX_____,
    ___XXXXX,XXXX____,
    __XXXXXX,XXXXX___,
    __XXXX__,_XXXXX__,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    ________,__XXXX__,
    ________,__XXXX__,
    ________,_XXXX___,
    ________,XXXXX___,
    _______X,XXXX____,
    ______XX,XXX_____,
    _____XXX,XX______,
    ____XXXX,X_______,
    ___XXXXX,________,
    ___XXXX_,________,
    __XXXX__,________,
    __XXXXXX,XXXXXX__,
    _XXXXXXX,XXXXXX__,
    _XXXXXXX,XXXXXX__,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________}
  // 0x33
  ,{
    15,
    f32_FLOAT_HEIGHT,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ____XXXX,XX______,
    ___XXXXX,XXX_____,
    __XXXXXX,XXXX____,
    _XXXXX__,XXXXX___,
    _XXXX___,_XXXX___,
    ________,_XXXX___,
    ________,XXXX____,
    ______XX,XXXX____,
    ______XX,XX______,
    ______XX,XXXX____,
    ________,_XXXX___,
    ________,__XXXX__,
    ________,__XXXX__,
    ________,__XXXX__,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    __XXXX__,_XXXX___,
    __XXXXXX,XXXXX___,
    ___XXXXX,XXXX____,
    _____XXX,XX______,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________}
  // 0x34
  ,{
    16,
    f32_FLOAT_HEIGHT,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,_XXXX___,
    ________,_XXXX___,
    ________,XXXXX___,
    _______X,XXXXX___,
    _______X,XXXXX___,
    ______XX,XXXXX___,
    _____XXX,_XXXX___,
    _____XXX,_XXXX___,
    ____XXX_,_XXXX___,
    ___XXX__,_XXXX___,
    ___XXX__,_XXXX___,
    __XXX___,_XXXX___,
    _XXX____,_XXXX___,
    _XXXXXXX,XXXXXXX_,
    _XXXXXXX,XXXXXXX_,
    _XXXXXXX,XXXXXXX_,
    ________,_XXXX___,
    ________,_XXXX___,
    ________,_XXXX___,
    ________,_XXXX___,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________}
  // 0x35
  ,{
    15,
    f32_FLOAT_HEIGHT,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ___XXXXX,XXXXX___,
    ___XXXXX,XXXXX___,
    __XXXXXX,XXXXX___,
    __XXXX__,________,
    __XXX___,________,
    __XXX___,________,
    __XXX_XX,XXX_____,
    _XXXXXXX,XXXX____,
    _XXXXXXX,XXXXX___,
    _XXXX___,_XXXX___,
    ________,__XXXX__,
    ________,__XXXX__,
    ________,__XXXX__,
    ________,__XXXX__,
    ________,__XXXX__,
    _XXXX___,__XXXX__,
    _XXXXX__,_XXXX___,
    __XXXXXX,XXXX____,
    ___XXXXX,XXXX____,
    ____XXXX,XX______,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________}
  // 0x36
  ,{
    15,
    f32_FLOAT_HEIGHT,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ______XX,XXX_____,
    ____XXXX,XXXX____,
    ___XXXXX,XXXXX___,
    __XXXX__,_XXXXX__,
    __XXXX__,__XXXX__,
    __XXX___,________,
    _XXXX___,________,
    _XXXX_XX,XXX_____,
    _XXXXXXX,XXXX____,
    _XXXXXXX,XXXXX___,
    _XXXXX__,_XXXX___,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    __XXX___,__XXXX__,
    __XXXX__,_XXXX___,
    ___XXXXX,XXXXX___,
    ____XXXX,XXXX____,
    _____XXX,XX______,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________}
  // 0x37
  ,{
    15,
    f32_FLOAT_HEIGHT,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    _XXXXXXX,XXXXXX__,
    _XXXXXXX,XXXXXX__,
    _XXXXXXX,XXXXXX__,
    ________,_XXXXX__,
    ________,XXXXX___,
    ________,XXXX____,
    _______X,XXX_____,
    ______XX,XXX_____,
    ______XX,XX______,
    _____XXX,XX______,
    _____XXX,X_______,
    _____XXX,X_______,
    ____XXXX,________,
    ____XXXX,________,
    ____XXXX,________,
    ____XXXX,________,
    ___XXXX_,________,
    ___XXXX_,________,
    ___XXXX_,________,
    ___XXXX_,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________}
  // 0x38
  ,{
    15,
    f32_FLOAT_HEIGHT,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ____XXXX,XXX_____,
    ___XXXXX,XXXX____,
    __XXXXXX,XXXXX___,
    _XXXXX__,_XXXXX__,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    __XXXX__,_XXXX___,
    ___XXXXX,XXXX____,
    ____XXXX,XXX_____,
    ___XXXXX,XXXX____,
    __XXXX__,_XXXX___,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    _XXXXX__,_XXXXX__,
    __XXXXXX,XXXXX___,
    ___XXXXX,XXXX____,
    _____XXX,XX______,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________}
  // 0x39
  ,{
    15,
    f32_FLOAT_HEIGHT,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    _____XXX,XX______,
    ___XXXXX,XXX_____,
    __XXXXXX,XXXX____,
    __XXXX__,_XXXX___,
    _XXXX___,__XXX___,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    _XXXX___,__XXXX__,
    __XXXX__,_XXXXX__,
    __XXXXXX,XXXXXX__,
    ___XXXXX,XXXXXX__,
    ____XXXX,X_XXXX__,
    ________,__XXXX__,
    ________,__XXX___,
    _XXXX___,_XXXX___,
    _XXXXX__,_XXXX___,
    __XXXXXX,XXXX____,
    __XXXXXX,XXX_____,
    ____XXXX,X_______,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________}
};

const uint8_t f32f_table2[1][64 + 2] = {
  // 0x2D
  {
    13,
    f32_FLOAT_HEIGHT,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    _XXXXXXX,XXXX____,
    _XXXXXXX,XXXX____,
    _XXXXXXX,XXXX____,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________,
    ________,________}
};


uint8_t *f32f_GetCharTable(uint8_t Char)
{
	if ((Char >= 0x30) && (Char <= 0x39))
		return (uint8_t *)(&f32f_table[Char - 0x30][0]);
	if (Char == 0x2D)
		return (uint8_t *)(&f32f_table2[0][0]);

	return 0;
}
