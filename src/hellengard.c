		//#Vera.setDataPort 0

		//; set screen to 320x240
		//#Vera.setScreenRes 320,240

		//; setup layer 0: mode=0/e=1, map=32x32, map=$0000, tile=font0, h/v-scroll=0
		//#Vera.layerSetup 0, %01100001, $00, L0_MAP_BASE, Vera.FONT_LPETSCII, $0000, $0000
		//; setup layer 1: mode=0/e=1, map=64x32, map=$4000, tile=font0, h/v-scroll=0
		//#Vera.layerSetup 1, %01100001, $01, L1_MAP_BASE, Vera.FONT_LPETSCII, $0000, $0000

		//; copy the palette data over to VERA
		//#Vera.copyDataToVera palette, Vera.PALETTE, 512
		//; copy the 'font' data into low PETSCII location only copying 64 characters
		//#Vera.copyDataToVera font, Vera.FONT_LPETSCII, 64*4*8

		//; fill window: mapBase, numMapCols, c, r, w, h, chr, clr
		//#Vera.fillWindow L0_MAP_BASE, 32, 1, 1, 32, 32, 24, 0			; clear layer0
		//#Vera.fillWindow L1_MAP_BASE, 64, 1, 1, 28, 28, 0, 0			; HUD clear viewport to see layer0
		//#Vera.fillWindow L1_MAP_BASE, 64, 0, 0, 40, 1, 3, 0				; HUD top H line
		//#Vera.fillWindow L1_MAP_BASE, 64, 0, 29, 40, 1, 3, 0			; HUD bottom H line
		//#Vera.fillWindow L1_MAP_BASE, 64, 0, 0, 1, 30, 4, 0				; HUD left V line
		//#Vera.fillWindow L1_MAP_BASE, 64, 29, 0, 1, 30, 4, 0			; HUD mid V line
		//#Vera.fillWindow L1_MAP_BASE, 64, 39, 0, 1, 30, 4, 0			; HUD right V line
		//#Vera.fillWindow L1_MAP_BASE, 64, 30, 1, 9, 9, 1, 0				; HUD smallmap text area fill
		//#Vera.fillWindow L1_MAP_BASE, 64, 29, 9, 11, 1, 3, 0			; HUD smallmap separator
		//#Vera.fillChar L1_MAP_BASE, 64, 0, 0, 5, 0						; HUD top left corner
		//#Vera.fillChar L1_MAP_BASE, 64, 29, 0, 9, 0						; HUD top mid T
		//#Vera.fillChar L1_MAP_BASE, 64, 39, 0, 6, 0						; HUD top right corner
		//#Vera.fillChar L1_MAP_BASE, 64, 0, 29, 7, 0						; HUD bot left corner
		//#Vera.fillChar L1_MAP_BASE, 64, 29, 29, 10, 0					; HUD bot mid T
		//#Vera.fillChar L1_MAP_BASE, 64, 39, 29, 8, 0					; HUD bot right corner
		//#Vera.fillChar L1_MAP_BASE, 64, 29, 9, 11, 0					; HUD smallmap left T
		//#Vera.fillChar L1_MAP_BASE, 64, 39, 9, 12, 0					; HUD smallmap right T
		//#Vera.fillWindow L1_MAP_BASE, 64, 30, 10, 9, 19, 2, 0			; HUD right text area fill

/* 
/ main.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "vera.h"

int main() {
    //uint8_t p = 0;

	setDataPort(0);
	setScreenScale(64, 64);
	layer0Setup(0x61, 0x00, (L0_MAP_BASE >> 2), (FONT_LPETSCII >> 2), 0x0000, 0x0000);
	layer1Setup(0x61, 0x01, (L1_MAP_BASE >> 2), (FONT_LPETSCII >> 2), 0x0000, 0x0000);
	copyData();
	//printf("%u\n",p);
	while(1){}
    return 0;
 }