/****************************************************************************
 * arch/risc-v/src/fe310/fe310_memorymap.h
 *
 *   Copyright (C) 2019 Masayuki Ishikawa. All rights reserved.
 *   Author: Masayuki Ishikawa <masayuki.ishikawa@gmail.com>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#ifndef _ARCH_RISCV_SRC_FE310_FE310_MEMORYMAP_H
#define _ARCH_RISCV_SRC_FE310_FE310_MEMORYMAP_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "hardware/fe310_memorymap.h"
#include "hardware/fe310_uart.h"
#include "hardware/fe310_clint.h"
#include "hardware/fe310_plic.h"
#include "hardware/fe310_prci.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Idle thread stack starts from _ebss */

#ifndef __ASSEMBLY__
#define FE310_IDLESTACK_BASE  (uint32_t)&_ebss
#else
#define FE310_IDLESTACK_BASE  _ebss
#endif

#define FE310_IDLESTACK_SIZE (CONFIG_IDLETHREAD_STACKSIZE & ~3)
#define FE310_IDLESTACK_TOP  (FE310_IDLESTACK_BASE + FE310_IDLESTACK_SIZE)

#endif  /* _ARCH_RISCV_SRC_FE310_FE310_MEMORYMAP_H */

