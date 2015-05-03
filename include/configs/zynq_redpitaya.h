/*
 * (C) Copyright 2012 Xilinx
 *
 * Configuration for Zynq Evaluation and Development Board - ZedBoard
 * See zynq_common.h for Zynq common configs
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __CONFIG_RED_PITAYA_H
#define __CONFIG_RED_PITAYA_H

#define CONFIG_SYS_SDRAM_SIZE		(512 * 1024 * 1024)


#define CONFIG_ZYNQ_SERIAL_UART0
#define CONFIG_ZYNQ_GEM0
#define CONFIG_ZYNQ_GEM_PHY_ADDR0   1

#define CONFIG_SYS_NO_FLASH

#define CONFIG_ZYNQ_SDHCI0



#define CONFIG_CPU_FREQ_HZ      666666687
#define CONFIG_SYS_HZ           1000

#define CONFIG_ENV_IS_NOWHERE

#include <configs/zynq-common.h>

#undef CONFIG_SYS_MALLOC_LEN
#define CONFIG_SYS_MALLOC_LEN		0x400000

#undef CONFIG_SYS_PROMPT
#define CONFIG_SYS_PROMPT       "zynq-rp-uboot> "

#undef CONFIG_SYS_PBSIZE
#define CONFIG_SYS_PBSIZE       (CONFIG_SYS_CBSIZE + \
                    sizeof(CONFIG_SYS_PROMPT) + 16)

#undef CONFIG_SYS_PROMPT_HUSH_PS2 
#define CONFIG_SYS_PROMPT_HUSH_PS2  "> "

#undef CONFIG_SYS_I2C_ZYNQ_SLAVE
#define CONFIG_SYS_I2C_ZYNQ_SLAVE		1

#define CONFIG_ZYNQ_EEPROM

#define CONFIG_CMD_EEPROM
#define CONFIG_SYS_I2C_EEPROM_ADDR_LEN         2   /* Bytes */
#define CONFIG_SYS_DEF_EEPROM_ADDR             0x50
#define CONFIG_SYS_I2C_EEPROM_ADDR             0x50
#define CONFIG_SYS_EEPROM_PAGE_WRITE_BITS      5   /* 32 Bytes page */
#define CONFIG_SYS_EEPROM_PAGE_WRITE_DELAY_MS  5
#define CONFIG_SYS_EEPROM_SIZE                 8192 /* Bytes */

#undef CONFIG_ENV_IS_NOWHERE
#define CONFIG_ENV_IS_IN_EEPROM
#define CONFIG_ENV_EEPROM_IS_ON_I2C

#undef CONFIG_ENV_OFFSET
#define CONFIG_ENV_OFFSET           (2048*3) /* WP area starts at last 1/4 of 8k eeprom */
#undef CONFIG_ENV_SIZE
#define CONFIG_ENV_SIZE             1024 /* Total Size of Environment Sector */
#undef CONFIG_ENV_SECT_SIZE
#define CONFIG_ENV_SECT_SIZE        CONFIG_ENV_SIZE
#undef CONFIG_CMD_SAVEENV
#define CONFIG_CMD_SAVEENV         /* Command to save ENV to Flash */

#undef CONFIG_SYS_MEMTEST_END
#define CONFIG_SYS_MEMTEST_END		(CONFIG_SYS_SDRAM_BASE + CONFIG_SYS_SDRAM_SIZE - (16 * 1024 * 1024))

#endif /* __CONFIG_RED_PITAYA_H */
