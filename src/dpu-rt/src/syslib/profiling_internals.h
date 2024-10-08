/* Copyright 2021 UPMEM. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

/* Shared with backends */

#ifndef DPUSYSCORE_PROFILING_INTERNALS_H
#define DPUSYSCORE_PROFILING_INTERNALS_H

/**
 * @file profiling_internals.h
 * @brief Code section profiling internals.
 */

#include <stdint.h>

#include <dpu_characteristics.h>

#ifndef NR_THREADS
#ifdef DPU_NR_THREADS
/**
 * @brief The number of profiled threads.
 */
#define NR_THREADS DPU_NR_THREADS
#else
#error "DPU_NR_THREADS and NR_THREADS are undefined"
#endif /* DPU_NR_THREADS */
#endif /* !NR_THREADS */

/**
 * @struct dpu_profiling_t
 * @brief A profiling context.
 */
typedef struct {
    uint32_t start[NR_THREADS]; /**< The start perfcounter value. */
    uint32_t count[NR_THREADS]; /**< The number of cycles spent in the code section. */
} dpu_profiling_t;

#endif /* DPUSYSCORE_PROFILING_INTERNALS_H */
