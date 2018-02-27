#ifndef LOWLEVEL_H_

#include <libopencm3/stm32/gpio.h>
#include <libopencm3/stm32/rcc.h>

// LED for debugging
#define PORT_LED GPIOB
#define GPIO_LED GPIO8
// Lines for troubleshooting timing and logic
#define PORT_SIG GPIOC
#define GPIO_SIG0 GPIO0
#define GPIO_SIG1 GPIO1
#define GPIO_SIG2 GPIO2
#define GPIO_SIG3 GPIO3

//PORT B
#define SPI_PORT GPIOB
//PB3
#define SCK	GPIO3
//PB5
#define MOSI GPIO5
//Below are controlled in software
//PA8
#define RST	GPIO8
//PB0
#define CSN	GPIO0

// ******* Low_init *******
// Enables low-level initialization of clocks, pins, and peripherals.
//  Inputs: none
// Outputs: none
void Low_init(void);

// ******* rcc_init *******
// Enables the clock for GPIO and other peripherals.
//  Inputs: none
// Outputs: none
void rcc_init(void);

// ******* gpio_init *******
// Initializes the GPIO registers and sets up peripheral and other output pins.
//  Inputs: none
// Outputs: none
void gpio_init(void);


#define LOWLEVEL_H_ 1
#endif