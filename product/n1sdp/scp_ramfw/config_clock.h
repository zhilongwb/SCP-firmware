/*
 * Arm SCP/MCP Software
 * Copyright (c) 2018-2019, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef CONFIG_CLOCK_H
#define CONFIG_CLOCK_H

#include <fwk_macros.h>

/*
 * SCC & PIK clock rates.
 */
#define SCC_CLK_RATE_IOFPGA_TMIF2XCLK  (120 * FWK_MHZ)
#define SCC_CLK_RATE_IOFPGA_TSIF2XCLK  (120 * FWK_MHZ)
#define SCC_CLK_RATE_SYSAPBCLK         (120 * FWK_MHZ)
#define SCC_CLK_RATE_SCPNICCLK         (300 * FWK_MHZ)
#define SCC_CLK_RATE_SCPI2CCLK         (100 * FWK_MHZ)
#define SCC_CLK_RATE_SCPQSPICLK        (50 * FWK_MHZ)
#define SCC_CLK_RATE_SENSORCLK         (100 * FWK_MHZ)
#define SCC_CLK_RATE_MCPNICCLK         (300 * FWK_MHZ)
#define SCC_CLK_RATE_MCPI2CCLK         (100 * FWK_MHZ)
#define SCC_CLK_RATE_MCPQSPICLK        (50 * FWK_MHZ)
#define SCC_CLK_RATE_PCIEAXICLK        (1200 * FWK_MHZ)
#define SCC_CLK_RATE_CCIXAXICLK        (1200 * FWK_MHZ)
#define SCC_CLK_RATE_PCIEAPBCLK        (200 * FWK_MHZ)
#define SCC_CLK_RATE_CCIXAPBCLK        (200 * FWK_MHZ)

#define PIK_CLK_RATE_CLUS0_CPU         (1600 * FWK_MHZ)
#define PIK_CLK_RATE_CLUS1_CPU         (1600 * FWK_MHZ)
#define PIK_CLK_RATE_CLUS0             (1600 * FWK_MHZ)
#define PIK_CLK_RATE_CLUS1             (1600 * FWK_MHZ)
#define PIK_CLK_RATE_CLUS0_PPU         (300 * FWK_MHZ)
#define PIK_CLK_RATE_CLUS1_PPU         (300 * FWK_MHZ)
#define PIK_CLK_RATE_CLUS0_PCLK        (900 * FWK_MHZ)
#define PIK_CLK_RATE_CLUS0_ATCLK       (900 * FWK_MHZ)
#define PIK_CLK_RATE_CLUS0_GIC         (900 * FWK_MHZ)
#define PIK_CLK_RATE_CLUS0_AMBACLK     (900 * FWK_MHZ)
#define PIK_CLK_RATE_CLUS1_PCLK        (900 * FWK_MHZ)
#define PIK_CLK_RATE_CLUS1_ATCLK       (900 * FWK_MHZ)
#define PIK_CLK_RATE_CLUS1_GIC         (900 * FWK_MHZ)
#define PIK_CLK_RATE_CLUS1_AMBACLK     (900 * FWK_MHZ)

#define PIK_CLK_RATE_SCP_CORECLK       (300 * FWK_MHZ)
#define PIK_CLK_RATE_SCP_AXICLK        (300 * FWK_MHZ)

#define PIK_CLK_RATE_SYS_PPU           (300 * FWK_MHZ)
#define PIK_CLK_RATE_INTERCONNECT      (1600 * FWK_MHZ)
#define PIK_CLK_RATE_PCLKSCP           (300 * FWK_MHZ)
#define PIK_CLK_RATE_SYS_GIC           (800 * FWK_MHZ)
#define PIK_CLK_RATE_SYSPCLKDBG        (300 * FWK_MHZ)
#define PIK_CLK_RATE_SYSPERCLK         (600 * FWK_MHZ)
#define PIK_CLK_RATE_UART              (50 * FWK_MHZ)
#define PIK_CLK_RATE_TCU0              (1200 * FWK_MHZ)
#define PIK_CLK_RATE_TCU1              (1200 * FWK_MHZ)

#define PIK_CLK_RATE_ATCLKDBG          (600 * FWK_MHZ)
#define PIK_CLK_RATE_PCLKDBG           (300 * FWK_MHZ)
#define PIK_CLK_RATE_TRACECLK          (300 * FWK_MHZ)
#define PIK_CLK_RATE_DMC               (800 * FWK_MHZ)

/*
 * N1SDP PLL clock rates.
 */
#define N1SDP_PLL_RATE_CPU_PLL0         (1600 * FWK_MHZ)
#define N1SDP_PLL_RATE_CPU_PLL1         (1600 * FWK_MHZ)
#define N1SDP_PLL_RATE_CLUSTER_PLL      (1600 * FWK_MHZ)
#define N1SDP_PLL_RATE_INTERCONNECT_PLL (1600 * FWK_MHZ)
#define N1SDP_PLL_RATE_SYSTEM_PLL       (2400 * FWK_MHZ)
#define N1SDP_PLL_RATE_DMC_PLL          (800 * FWK_MHZ)

/*
 * CSS clock rates.
 */
#define CSS_CLK_RATE_CPU_GRP0_SUPER_UNDERDRIVE  (1600 * FWK_MHZ)
#define CSS_CLK_RATE_CPU_GRP0_UNDERDRIVE        (2700 * FWK_MHZ)
#define CSS_CLK_RATE_CPU_GRP0_NOMINAL           (2800 * FWK_MHZ)
#define CSS_CLK_RATE_CPU_GRP0_OVERDRIVE         (2900 * FWK_MHZ)
#define CSS_CLK_RATE_CPU_GRP0_SUPER_OVERDRIVE   (3000 * FWK_MHZ)

#define CSS_CLK_RATE_CPU_GRP1_SUPER_UNDERDRIVE  (1600 * FWK_MHZ)
#define CSS_CLK_RATE_CPU_GRP1_UNDERDRIVE        (2700 * FWK_MHZ)
#define CSS_CLK_RATE_CPU_GRP1_NOMINAL           (2800 * FWK_MHZ)
#define CSS_CLK_RATE_CPU_GRP1_OVERDRIVE         (2900 * FWK_MHZ)
#define CSS_CLK_RATE_CPU_GRP1_SUPER_OVERDRIVE   (3000 * FWK_MHZ)


/*
 * Clock indexes.
 */
enum clock_idx {
    CLOCK_IDX_INTERCONNECT,
    CLOCK_IDX_CPU_GROUP0,
    CLOCK_IDX_CPU_GROUP1,
    CLOCK_IDX_COUNT
};

/*
 * SCC & PIK clock indexes.
 */
enum clock_pik_idx {
    /* SCC Clocks */
    CLOCK_SCC_IDX_IOFPGA_TMIF2XCLK,
    CLOCK_SCC_IDX_IOFPGA_TSIF2XCLK,
    CLOCK_SCC_IDX_SYSAPBCLK,
    CLOCK_SCC_IDX_SCPNICCLK,
    CLOCK_SCC_IDX_SCPI2CCLK,
    CLOCK_SCC_IDX_SCPQSPICLK,
    CLOCK_SCC_IDX_SENSORCLK,
    CLOCK_SCC_IDX_MCPNICCLK,
    CLOCK_SCC_IDX_MCPI2CCLK,
    CLOCK_SCC_IDX_MCPQSPICLK,
    CLOCK_SCC_IDX_PCIEAXICLK,
    CLOCK_SCC_IDX_CCIXAXICLK,
    CLOCK_SCC_IDX_PCIEAPBCLK,
    CLOCK_SCC_IDX_CCIXAPBCLK,

    /* PIK Clocks */

    /* CPU element clocks */
    CLOCK_PIK_IDX_CLUS0_CPU0,
    CLOCK_PIK_IDX_CLUS0_CPU1,
    CLOCK_PIK_IDX_CLUS1_CPU0,
    CLOCK_PIK_IDX_CLUS1_CPU1,
    CLOCK_PIK_IDX_CLUS0,
    CLOCK_PIK_IDX_CLUS1,
    CLOCK_PIK_IDX_CLUS0_PPU,
    CLOCK_PIK_IDX_CLUS1_PPU,
    CLOCK_PIK_IDX_CLUS0_PCLK,
    CLOCK_PIK_IDX_CLUS0_ATCLK,
    CLOCK_PIK_IDX_CLUS0_GIC,
    CLOCK_PIK_IDX_CLUS0_AMBACLK,
    CLOCK_PIK_IDX_CLUS1_PCLK,
    CLOCK_PIK_IDX_CLUS1_ATCLK,
    CLOCK_PIK_IDX_CLUS1_GIC,
    CLOCK_PIK_IDX_CLUS1_AMBACLK,
    /* SCP element clocks */
    CLOCK_PIK_IDX_SCP_CORECLK,
    CLOCK_PIK_IDX_SCP_AXICLK,
    /* Top element clocks */
    CLOCK_PIK_IDX_SYS_PPU,
    CLOCK_PIK_IDX_INTERCONNECT,
    CLOCK_PIK_IDX_PCLKSCP,
    CLOCK_PIK_IDX_SYS_GIC,
    CLOCK_PIK_IDX_SYSPCLKDBG,
    CLOCK_PIK_IDX_SYSPERCLK,
    CLOCK_PIK_IDX_UART,
    CLOCK_PIK_IDX_TCU0,
    CLOCK_PIK_IDX_TCU1,
    /* Debug element clocks */
    CLOCK_PIK_IDX_ATCLKDBG,
    CLOCK_PIK_IDX_PCLKDBG,
    CLOCK_PIK_IDX_TRACECLK,
    /* DMC element clock */
    CLOCK_PIK_IDX_DMC,
    /* Number of generated clocks */
    CLOCK_PIK_IDX_COUNT
};

/*
 * CSS clock indexes.
 */
enum clock_css_idx {
    CLOCK_CSS_IDX_CPU_GROUP0,
    CLOCK_CSS_IDX_CPU_GROUP1,
    CLOCK_CSS_IDX_COUNT
};

/*
 * SoC PLL indexes.
 */
enum clock_pll_idx {
    CLOCK_PLL_IDX_CPU0,
    CLOCK_PLL_IDX_CPU1,
    CLOCK_PLL_IDX_CLUS,
    CLOCK_PLL_IDX_INTERCONNECT,
    CLOCK_PLL_IDX_SYS,
    CLOCK_PLL_IDX_DMC,
    CLOCK_PLL_IDX_COUNT
};

#endif /* CONFIG_CLOCK_H */
