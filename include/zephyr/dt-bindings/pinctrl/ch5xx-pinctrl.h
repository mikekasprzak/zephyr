/*
 * Copyright (c) 2025 Michael Hope <michaelh@juju.nz>
 * Copyright (c) 2026 Mike Kasprzak (distraction.engineer)
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __CH5XX_PINCTRL_H__
#define __CH5XX_PINCTRL_H__

#define CH5XX_PINMUX_PORT_PA 0
#define CH5XX_PINMUX_PORT_PB 1
#define CH5XX_PINMUX_PORT_PC 2
#define CH5XX_PINMUX_PORT_PD 3

/* Starting bit for the remap field in PCFR1 */
#define CH5XX_PINMUX_SPI1_RM         0
#define CH5XX_PINMUX_I2C1_RM         3
#define CH5XX_PINMUX_USART1_RM       6
#define CH5XX_PINMUX_TIM1_RM         10
#define CH5XX_PINMUX_TIM2_RM         14
#define CH5XX_PINMUX_PA1PA2_RM       17
#define CH5XX_PINMUX_ADC_DTR_GINJ_RM 18
#define CH5XX_PINMUX_ADC_DTR_GREG_RM 19
#define CH5XX_PINMUX_USART2_RM       20

/* Port number with 0-3 */
#define CH5XX_PINCTRL_PORT_SHIFT 0
#define CH5XX_PINCTRL_PORT_MASK  GENMASK(1, 0)
/* Pin number 0-7 */
#define CH5XX_PINCTRL_PIN_SHIFT  2
#define CH5XX_PINCTRL_PIN_MASK   GENMASK(4, 2)
/* Base remap bit 0-31 */
#define CH5XX_PINCTRL_BASE_SHIFT 5
#define CH5XX_PINCTRL_BASE_MASK  GENMASK(9, 5)
/* Function remapping ID 0-7 */
#define CH5XX_PINCTRL_RM_SHIFT   10
#define CH5XX_PINCTRL_RM_MASK    GENMASK(12, 10)

#define CH5XX_PINMUX_DEFINE(port, pin, rm, remapping)                                           	\
	((CH5XX_PINMUX_PORT_##port << CH5XX_PINCTRL_PORT_SHIFT) |           	              	\
	 (pin << CH5XX_PINCTRL_PIN_SHIFT) |                                                     	\
	 (CH5XX_PINMUX_##rm##_RM << CH5XX_PINCTRL_BASE_SHIFT) |                              	\
	 (remapping << CH5XX_PINCTRL_RM_SHIFT))


#endif /* __CH5XX_PINCTRL_H__ */
