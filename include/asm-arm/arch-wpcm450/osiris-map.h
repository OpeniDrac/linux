/* linux/include/asm-arm/arch-wpcm450/osiris-map.h
 *
 * (c) 2005 Simtec Electronics
 *	http://www.simtec.co.uk/products/
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * OSIRIS - Memory map definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Changelog:
*/

/* needs arch/map.h including with this */

#ifndef __ASM_ARCH_OSIRISMAP_H
#define __ASM_ARCH_OSIRISMAP_H

/* start peripherals off after the WPCM450 */

#define OSIRIS_IOADDR(x)	(WPCM450_ADDR((x) + 0x05000000))

#define OSIRIS_PA_CPLD		(WPCM450_CS1 | (3<<25))

/* we put the CPLD registers next, to get them out of the way */

#define OSIRIS_VA_CTRL1	    OSIRIS_IOADDR(0x00000000)	 /* 0x01300000 */
#define OSIRIS_PA_CTRL1	    (OSIRIS_PA_CPLD)

#define OSIRIS_VA_CTRL2	    OSIRIS_IOADDR(0x00100000)	 /* 0x01400000 */
#define OSIRIS_PA_CTRL2	    (OSIRIS_PA_CPLD + (1<<24))

#define OSIRIS_VA_CTRL3	    OSIRIS_IOADDR(0x00200000)	 /* 0x01500000 */
#define OSIRIS_PA_CTRL3	    (OSIRIS_PA_CPLD + (2<<24))

#define OSIRIS_VA_CTRL4	    OSIRIS_IOADDR(0x00300000)	 /* 0x01600000 */
#define OSIRIS_PA_CTRL4	    (OSIRIS_PA_CPLD + (3<<24))

#endif /* __ASM_ARCH_OSIRISMAP_H */
