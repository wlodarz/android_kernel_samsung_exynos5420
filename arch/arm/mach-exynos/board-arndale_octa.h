/*
 * Copyright (c) 2013 Samsung Electronics Co., Ltd.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __MACH_EXYNOS_BOARD_ARNDALE_OCTA_H
#define __MACH_EXYNOS_BOARD_ARNDALE_OCTA_H

#if defined(CONFIG_PREVENT_SOC_JUMP)
extern int fg_reset;
#endif

void exynos5_arndale_octa_power_init(void);
void exynos5_arndale_octa_clock_init(void);
void exynos5_arndale_octa_mmc_init(void);
void exynos5_arndale_octa_usb_init(void);
void exynos5_arndale_octa_audio_init(void);
void exynos5_arndale_octa_input_init(void);
void exynos5_arndale_octa_display_init(void);
void exynos5_arndale_octa_media_init(void);
void exynos5_arndale_octa_mfd_init(void);
void exynos5_arndale_octa_sensor_init(void);
void exynos5_arndale_octa_gpio_init(void);
#endif
