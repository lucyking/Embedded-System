//
// led.c
// complement the paomadeng function
// @Author:Íõ½¨»ª
// copyright 2013 by HDU Embeded Lab.
// All rights reserved.
//
#include "configure.h"

#ifdef __PAOMADENG_EN
#define LED_ADDR *(unsigned char*)0x02000000

void main()
{
	LED_ADDR |= 0xf<<4;
	while(1)
	{
		LED_ADDR = 0xe<<4;
		Delay(1000);
		LED_ADDR = 0xd<<4;
		Delay(1000);
		LED_ADDR = 0x??<4;             //<-------将??修改成正确的值 实现跑马灯效果
		Delay(1000);
		LED_ADDR = 0x??<<4;
		Delay(1000); 
	}
}
#endif //__PAOMADENG_EN
