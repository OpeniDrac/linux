/* linux/include/asm/hardware/wpcm450/regs-gpioj.h
 *
 * Copyright (c) 2004 Simtec Electronics <linux@simtec.co.uk>
 *		      http://www.simtec.co.uk/products/SWLINUX/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * S3C2440 GPIO J register definitions
 *
 *  Changelog:
 *    11-Aug-2004     BJD     Created file
 *    10-Feb-2005     BJD     Fix GPJ12 definition (Guillaume Gourat)
*/


#ifndef __ASM_ARCH_REGS_GPIOJ_H
#define __ASM_ARCH_REGS_GPIOJ_H "gpioj"

/* Port J consists of 13 GPIO/Camera pins
 *
 * GPJCON has 2 bits for each of the input pins on port F
 *   00 = 0 input, 1 output, 2 Camera
 *
 * pull up works like all other ports.
*/

#define S3C2440_GPIO_BANKJ  (416)

#define S3C2440_GPJCON	    WPCM450_GPIOREG(0xd0)
#define S3C2440_GPJDAT	    WPCM450_GPIOREG(0xd4)
#define S3C2440_GPJUP	    WPCM450_GPIOREG(0xd8)

#define S3C2440_GPJ0            WPCM450_GPIONO(S3C2440_GPIO_BANKJ, 0)
#define S3C2440_GPJ0_INP        (0x00 << 0)
#define S3C2440_GPJ0_OUTP       (0x01 << 0)
#define S3C2440_GPJ0_CAMDATA0   (0x02 << 0)

#define S3C2440_GPJ1            WPCM450_GPIONO(S3C2440_GPIO_BANKJ, 1)
#define S3C2440_GPJ1_INP        (0x00 << 2)
#define S3C2440_GPJ1_OUTP       (0x01 << 2)
#define S3C2440_GPJ1_CAMDATA1   (0x02 << 2)

#define S3C2440_GPJ2            WPCM450_GPIONO(S3C2440_GPIO_BANKJ, 2)
#define S3C2440_GPJ2_INP        (0x00 << 4)
#define S3C2440_GPJ2_OUTP       (0x01 << 4)
#define S3C2440_GPJ2_CAMDATA2   (0x02 << 4)

#define S3C2440_GPJ3            WPCM450_GPIONO(S3C2440_GPIO_BANKJ, 3)
#define S3C2440_GPJ3_INP        (0x00 << 6)
#define S3C2440_GPJ3_OUTP       (0x01 << 6)
#define S3C2440_GPJ3_CAMDATA3   (0x02 << 6)

#define S3C2440_GPJ4            WPCM450_GPIONO(S3C2440_GPIO_BANKJ, 4)
#define S3C2440_GPJ4_INP        (0x00 << 8)
#define S3C2440_GPJ4_OUTP       (0x01 << 8)
#define S3C2440_GPJ4_CAMDATA4   (0x02 << 8)

#define S3C2440_GPJ5            WPCM450_GPIONO(S3C2440_GPIO_BANKJ, 5)
#define S3C2440_GPJ5_INP        (0x00 << 10)
#define S3C2440_GPJ5_OUTP       (0x01 << 10)
#define S3C2440_GPJ5_CAMDATA5   (0x02 << 10)

#define S3C2440_GPJ6            WPCM450_GPIONO(S3C2440_GPIO_BANKJ, 6)
#define S3C2440_GPJ6_INP        (0x00 << 12)
#define S3C2440_GPJ6_OUTP       (0x01 << 12)
#define S3C2440_GPJ6_CAMDATA6   (0x02 << 12)

#define S3C2440_GPJ7            WPCM450_GPIONO(S3C2440_GPIO_BANKJ, 7)
#define S3C2440_GPJ7_INP        (0x00 << 14)
#define S3C2440_GPJ7_OUTP       (0x01 << 14)
#define S3C2440_GPJ7_CAMDATA7   (0x02 << 14)

#define S3C2440_GPJ8            WPCM450_GPIONO(S3C2440_GPIO_BANKJ, 8)
#define S3C2440_GPJ8_INP        (0x00 << 16)
#define S3C2440_GPJ8_OUTP       (0x01 << 16)
#define S3C2440_GPJ8_CAMPCLK    (0x02 << 16)

#define S3C2440_GPJ9            WPCM450_GPIONO(S3C2440_GPIO_BANKJ, 9)
#define S3C2440_GPJ9_INP        (0x00 << 18)
#define S3C2440_GPJ9_OUTP       (0x01 << 18)
#define S3C2440_GPJ9_CAMVSYNC   (0x02 << 18)

#define S3C2440_GPJ10           WPCM450_GPIONO(S3C2440_GPIO_BANKJ, 10)
#define S3C2440_GPJ10_INP       (0x00 << 20)
#define S3C2440_GPJ10_OUTP      (0x01 << 20)
#define S3C2440_GPJ10_CAMHREF   (0x02 << 20)

#define S3C2440_GPJ11           WPCM450_GPIONO(S3C2440_GPIO_BANKJ, 11)
#define S3C2440_GPJ11_INP       (0x00 << 22)
#define S3C2440_GPJ11_OUTP      (0x01 << 22)
#define S3C2440_GPJ11_CAMCLKOUT (0x02 << 22)

#define S3C2440_GPJ12           WPCM450_GPIONO(S3C2440_GPIO_BANKJ, 12)
#define S3C2440_GPJ12_INP       (0x00 << 24)
#define S3C2440_GPJ12_OUTP      (0x01 << 24)
#define S3C2440_GPJ12_CAMRESET  (0x02 << 24)

#endif	/* __ASM_ARCH_REGS_GPIOJ_H */

