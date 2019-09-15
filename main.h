/** @file main.h
 *  @brief Main Common Header file for wifi driver functions.
 *
 *  This contains the prototypes for the app_main
 *  driver and eventually any macros, constants,
 *  or global variables you will need.
 *
 *
 */

#ifndef __MAIN_H__
#define __MAIN_H__

/* ==================================================================== */
/* ========================== include files =========================== */
/* ==================================================================== */
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"

/* ==================================================================== */
/* ============================ constants ============================= */
/* ==================================================================== */


/* ==================================================================== */
/* ======================== global variables ========================== */
/* ==================================================================== */


/* ==================================================================== */
/* ==================== function prototypes =========================== */
/* ==================================================================== */

void init_uart(void);

int txData(const char* data);

static void rx_task(void *atx);

#endif
