/*
** @source __MAIN_C__
**
** __ShortDescription__
**
** @author Copyright (C) 2019 Author: Vikramvel
** @version 2019
**
********************************************************************/
#include "main.h"

/* Function to intialize uart_config
 * baud_rate,
 * data_bits,
 * parity,
 * stop_bits,
 * flow_ctrl
 */
void init_uart(void) 
{
    const uart_config_t uart_config = {
        .baud_rate  = 115200,
        .data_bits  = UART_DATA_8_BITS,
        .parity     = UART_PARITY_DISABLE,
        .stop_bits  = UART_STOP_BITS_1,
        .flow_ctrl  = UART_HW_FLOWCTRL_DISABLE
    };
    uart_param_config(uart_num, &uart_config);
    ESP_ERROR_CHECK(uart_set_pin(uart_num, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE));
    // We won't use a buffer for sending data.
    uart_driver_install(uart_num, RX_BUF_SIZE * 2, 0, 0, NULL, 0);
}

/* API for tx of UART data */
int txData(const char* data)
{
    const int len = strlen(data);
    const int txBytes = uart_write_bytes(uart_num, data, len);
    return txBytes;
}

/* Task for receiving data from UART */
static void rx_task(void *atx)
{

}

/* Main Function */
void app_main()
{

}
