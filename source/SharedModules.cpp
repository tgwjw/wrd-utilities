/*
 * Copyright (c) 2016, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "mbed-drivers/mbed.h"

#if YOTTA_CFG_HARDWARE_WRD_INTERFACE_SPI_SIZE > 0
SPI YOTTA_CFG_HARDWARE_WRD_INTERFACE_SPI_SPI0_NAME(
    YOTTA_CFG_HARDWARE_WRD_INTERFACE_SPI_SPI0_MOSI,
    YOTTA_CFG_HARDWARE_WRD_INTERFACE_SPI_SPI0_MISO,
    YOTTA_CFG_HARDWARE_WRD_INTERFACE_SPI_SPI0_SCLK);
#endif

#if YOTTA_CFG_HARDWARE_WRD_INTERFACE_SPI_SIZE > 1
SPI YOTTA_CFG_HARDWARE_WRD_INTERFACE_SPI_SPI1_NAME(
    YOTTA_CFG_HARDWARE_WRD_INTERFACE_SPI_SPI1_MOSI,
    YOTTA_CFG_HARDWARE_WRD_INTERFACE_SPI_SPI1_MISO,
    YOTTA_CFG_HARDWARE_WRD_INTERFACE_SPI_SPI1_SCLK);
#endif

#if YOTTA_CFG_HARDWARE_WRD_INTERFACE_SPI_SIZE > 2
SPI YOTTA_CFG_HARDWARE_WRD_INTERFACE_SPI_SPI2_NAME(
    YOTTA_CFG_HARDWARE_WRD_INTERFACE_SPI_SPI2_MOSI,
    YOTTA_CFG_HARDWARE_WRD_INTERFACE_SPI_SPI2_MISO,
    YOTTA_CFG_HARDWARE_WRD_INTERFACE_SPI_SPI2_SCLK);
#endif
