/*
 * Copyright (C) 2016 Samsung Electronics
 * Thomas Abraham <thomas.ab@samsung.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <asm/armv8/mmu.h>

DECLARE_GLOBAL_DATA_PTR;

#ifdef CONFIG_EXYNOS7420
static struct mm_region exynos7420_mem_map[] = {
	{
		.base	= 0x10000000UL,
		.size	= 0x10000000UL,
		.attrs	= PTE_BLOCK_MEMTYPE(MT_DEVICE_NGNRNE) |
				PTE_BLOCK_NON_SHARE |
				PTE_BLOCK_PXN | PTE_BLOCK_UXN,
	}, {
		.base	= 0x40000000UL,
		.size	= 0x80000000UL,
		.attrs	= PTE_BLOCK_MEMTYPE(MT_NORMAL) |
				PTE_BLOCK_INNER_SHARE,
	}, {
		/* List terminator */
		.base	= 0,
		.size	= 0,
		.attrs	= 0,
	},
};

struct mm_region *mem_map = exynos7420_mem_map;
#endif
