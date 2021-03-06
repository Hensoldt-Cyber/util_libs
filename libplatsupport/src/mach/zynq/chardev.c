/*
 * Copyright 2017, Data61, CSIRO (ABN 41 687 119 230)
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

/**
 * Contains the definition for all character devices on this platform.
 * Currently this is just a simple patch.
 */

#include "../../chardev.h"
#include "../../common.h"
#include <utils/util.h>

static const int uart0_irqs[] = {UART0_IRQ, -1};
static const int uart1_irqs[] = {UART1_IRQ, -1};

#define UART_DEFN(devid) {          \
    .id      = ZYNQ_UART##devid,    \
    .paddr   = UART##devid##_PADDR, \
    .size    = BIT(12),             \
    .irqs    = uart##devid##_irqs,  \
    .init_fn = &uart_init           \
}

static const struct dev_defn dev_defn[] = {
    UART_DEFN(0),
    UART_DEFN(1),
};

struct ps_chardevice*
ps_cdev_init(enum chardev_id id, const ps_io_ops_t* o, struct ps_chardevice* d) {
    unsigned int i;
    for (i = 0; i < ARRAY_SIZE(dev_defn); i++) {
        if (dev_defn[i].id == id) {
            return (dev_defn[i].init_fn(dev_defn + i, o, d)) ? NULL : d;
        }
    }
    return NULL;
}

ps_chardevice_t*
ps_cdev_static_init(const ps_io_ops_t *o, ps_chardevice_t* d, void *params)
{

    if (params == NULL) {
        return NULL;
    }

    void* vaddr = params;

    return uart_static_init(vaddr, o, d) ? NULL : d;
}
