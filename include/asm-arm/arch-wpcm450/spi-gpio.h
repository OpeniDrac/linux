/* linux/include/asm-arm/arch-wpcm450/spi.h
 *
 * Copyright (c) 2006 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * WPCM450 - SPI Controller platfrom_device info
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_SPIGPIO_H
#define __ASM_ARCH_SPIGPIO_H __FILE__

struct wpcm450_spigpio_info;
struct spi_board_info;

struct wpcm450_spigpio_info {
	unsigned long		 pin_clk;
	unsigned long		 pin_mosi;
	unsigned long		 pin_miso;

	unsigned long		 board_size;
	struct spi_board_info	*board_info;

	void (*chip_select)(struct wpcm450_spigpio_info *spi, int cs);
};


#endif /* __ASM_ARCH_SPIGPIO_H */
