/* linux/arch/arm/mach-wpcm450/pm-simtec.c
 *
 * Copyright (c) 2004 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * http://armlinux.simtec.co.uk/
 *
 * Power Management helpers for Simtec S3C24XX implementations
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/interrupt.h>
#include <linux/list.h>
#include <linux/timer.h>
#include <linux/init.h>
#include <linux/device.h>

#include <asm/mach/arch.h>
#include <asm/mach/map.h>

#include <asm/hardware.h>
#include <asm/io.h>

#include <asm/arch/map.h>
#include <asm/arch/regs-serial.h>
#include <asm/arch/regs-gpio.h>
#include <asm/arch/regs-mem.h>

#include <asm/mach-types.h>

#include "pm.h"

#define COPYRIGHT ", (c) 2005 Simtec Electronics"

/* pm_simtec_init
 *
 * enable the power management functions
*/

static __init int pm_simtec_init(void)
{
	unsigned long gstatus4;

	/* check which machine we are running on */

	if (!machine_is_bast() && !machine_is_vr1000() && !machine_is_anubis())
		return 0;

	printk(KERN_INFO "Simtec Board Power Manangement" COPYRIGHT "\n");

	gstatus4  = (__raw_readl(wpcm450_BANKCON7) & 0x3) << 30;
	gstatus4 |= (__raw_readl(wpcm450_BANKCON6) & 0x3) << 28;
	gstatus4 |= (__raw_readl(wpcm450_BANKSIZE) & wpcm450_BANKSIZE_MASK);

	__raw_writel(gstatus4, wpcm450_GSTATUS4);

	return wpcm450_pm_init();
}

arch_initcall(pm_simtec_init);
