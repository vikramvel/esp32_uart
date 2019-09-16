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

/**
 * @brief UART intialization
 *
 * API to assign the neccessary UART intialization params.
 * 
 *
 * @param  void
 * 
 * @return void
 */
void init_uart(void);

/**
 * @brief Transmission of data through UART
 *
 * Function to send the UART tx bytes from UART number initialized.
 * Primary NULL check should be done for the data to be sent across.
 *
 * @param  data to be sent.
 * 
 * @return 
 *  - (-1) Parameter error
 *  - OTHERS (>=0) The number of bytes pushed to the TX FIFO
 */
int txData(const char* data);

/**
 * @brief   Function to receive RX bytes received in ESP.
 *
 * This function is to retrieve the data received by UART and saved in Rx FIFO,
 *
 * @param   atx     pvParameter NULL is passed as parameter
 *
 * @return 
 *  - (-1) Error
 *  - OTHERS (>=0) The number of bytes read from UART FIFO
 */
static void rx_task(void *atx);

#endif
