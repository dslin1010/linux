/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2020 Andes Technology Corporation
 */

#ifndef _ASM_HIGHMEM_H
#define _ASM_HIGHMEM_H

#include <asm/kmap_types.h>
#include <asm/cacheflush.h>
#include <asm/pgtable.h>
#include <asm/fixmap.h>

#define PKMAP_BASE		(FIXADDR_START - SZ_2M)
#define LAST_PKMAP		(SZ_2M >> PAGE_SHIFT)
#define LAST_PKMAP_MASK	(LAST_PKMAP - 1)
#define PKMAP_NR(virt)	(((virt) - (PKMAP_BASE)) >> PAGE_SHIFT)
#define PKMAP_ADDR(nr)	(PKMAP_BASE + ((nr) << PAGE_SHIFT))
#define kmap_prot		PAGE_KERNEL
