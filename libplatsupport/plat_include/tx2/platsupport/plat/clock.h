/*
 * Copyright 2018, Data61, CSIRO (ABN 41 687 119 230)
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

/*
 * Clocks presumed to actually be gates, add these back into enum clk_id if these are
 * actually clocks that can have their frequency configured.
 */
/*
    CLK_FUSE
    CLK_GPU
    CLK_PCIE
    CLK_AFI
    CLK_PCIE2_IOBIST
    CLK_PCIERX0
    CLK_PCIERX1
    CLK_PCIERX2
    CLK_PCIERX3
    CLK_PCIERX4
    CLK_SPDIF_IN
    CLK_DTV
    CLK_SE
    CLK_DP2
    CLK_APB2APE
    CLK_CEC
    CLK_DPAUX1
    CLK_DPAUX
    CLK_HDA2HDMICODEC
    CLK_APE
    CLK_SATA_OOB
    CLK_SATA_IOBIST
    CLK_IQC1
    CLK_PLLREFE_PLL_REF
    CLK_XUSB_SS
    CLK_MIPI_CAL
    CLK_DSI
    CLK_DSIB
    CLK_HSIC_TRK
    CLK_USB2_TRK
    CLK_IQC2
    CLK_32K
    CLK_ADSP
    CLK_ADSPNEON
    CLK_MPHY_L0_RX_LS_BIT
    CLK_MPHY_L0_TX_LS_3XBIT
    CLK_MPHY_L0_RX_ANA
    CLK_MPHY_L1_RX_ANA
    CLK_NVDISPLAY_DSC
    CLK_EQOS_AXI
    CLK_KFUSE
    CLK_EQOS_RX
    CLK_M
 */

enum clk_id {
    CLK_PLLC_OUT_ISP,
    CLK_PLLC_OUT_VE,
    CLK_PLLC_OUT_AON,
    CLK_SOR_SAFE,
    CLK_I2S2,
    CLK_I2S3,
    CLK_SPDIF_DOUBLER,
    CLK_SPI3,
    CLK_I2C1,
    CLK_I2C5,
    CLK_SPI1,
    CLK_VI,
    CLK_SDMMC1,
    CLK_SDMMC2,
    CLK_SDMMC4,
    CLK_UARTA,
    CLK_UARTB,
    CLK_HOST1X,
    CLK_EMC,
    CLK_EXTPERIPH4,
    CLK_SPI4,
    CLK_I2C3,
    CLK_SDMMC3,
    CLK_UARTD,
    CLK_I2S1,
    CLK_TSEC,
    CLK_I2S4,
    CLK_I2S5,
    CLK_I2C4,
    CLK_AHUB,
    CLK_HDA2CODEC_2X,
    CLK_EXTPERIPH1,
    CLK_EXTPERIPH2,
    CLK_EXTPERIPH3,
    CLK_I2C_SLOW,
    CLK_SOR1,
    CLK_SOR0,
    CLK_SATA,
    CLK_HDA,
    CLK_PLLREFE_OUT,
    CLK_PLLC4_OUT,
    CLK_XUSB,
    CLK_XUSB_DEV,
    CLK_XUSB_HOST,
    CLK_DSIA_LP,
    CLK_DSIB_LP,
    CLK_DMIC1,
    CLK_DMIC2,
    CLK_AUD_MCLK,
    CLK_I2C6,
    CLK_UART_FST_MIPI_CAL,
    CLK_VIC,
    CLK_SDMMC_LEGACY_TM,
    CLK_NVDEC,
    CLK_NVJPG,
    CLK_NVENC,
    CLK_QSPI,
    CLK_VI_I2C,
    CLK_MAUD,
    CLK_TSECB,
    CLK_MPHY_L0_RX_SYMB,
    CLK_MPHY_L0_TX_SYMB,
    CLK_MPHY_IOBIST,
    CLK_MPHY_TX_1MHZ_REF,
    CLK_MPHY_CORE_PLL_FIXED,
    CLK_AXI_CBB,
    CLK_DMIC3,
    CLK_DMIC4,
    CLK_DSPK1,
    CLK_DSPK2,
    CLK_I2S6,
    CLK_NVDISPLAY_P0,
    CLK_NVDISPLAY_DISP,
    CLK_NVDISPLAYHUB,
    CLK_NVDISPLAY_P1,
    CLK_NVDISPLAY_P2,
    CLK_TACH,
    CLK_UFSHC,
    CLK_UFSDEV_REF,
    CLK_NVCSI,
    CLK_NVCSILP,
    CLK_I2C7,
    CLK_I2C9,
    CLK_I2C12,
    CLK_I2C13,
    CLK_I2C14,
    CLK_PWM1,
    CLK_PWM2,
    CLK_PWM3,
    CLK_PWM5,
    CLK_PWM6,
    CLK_PWM7,
    CLK_PWM8,
    CLK_UARTE,
    CLK_UARTF,
    CLK_DBGAPB,
    CLK_BPMP_CPU_NIC,
    CLK_BPMP_APB,
    CLK_ACTMON,
    CLK_AON_CPU_NIC,
    CLK_CAN1,
    CLK_CAN1_HOST,
    CLK_CAN2,
    CLK_CAN2_HOST,
    CLK_AON_APB,
    CLK_UARTC,
    CLK_UARTG,
    CLK_AON_UART_FST_MIPI_CAL,
    CLK_I2C2,
    CLK_I2C8,
    CLK_I2C10,
    CLK_AON_I2C_SLOW,
    CLK_SPI2,
    CLK_DMIC5,
    CLK_AON_TOUCH,
    CLK_PWM4,
    CLK_TSC,
    CLK_MSS_ENCRYPT,
    CLK_SCE_CPU_NIC,
    CLK_SCE_APB,
    CLK_DSIC,
    CLK_DSIC_LP,
    CLK_DSID,
    CLK_DSID_LP,
    CLK_PEX_SATA_USB_RX_BYP,
    CLK_SPDIF_OUT,
    CLK_EQOS_PTP_REF,
    CLK_EQOS_TX,
    CLK_USB2_HSIC_TRK,
    CLK_XUSB_CORE_SS,
    CLK_XUSB_CORE_DEV,
    CLK_XUSB_FALCON,
    CLK_XUSB_FS,
    CLK_PLL_A_OUT0,
    CLK_SYNC_I2S1,
    CLK_SYNC_I2S2,
    CLK_SYNC_I2S3,
    CLK_SYNC_I2S4,
    CLK_SYNC_I2S5,
    CLK_SYNC_I2S6,
    CLK_SYNC_DSPK1,
    CLK_SYNC_DSPK2,
    CLK_SYNC_DMIC1,
    CLK_SYNC_DMIC2,
    CLK_SYNC_DMIC3,
    CLK_SYNC_DMIC4,
    CLK_SYNC_SPDIF,
    CLK_PLLREFE_OUT_GATED,
    CLK_PLLREFE_OUT1,
    CLK_PLLD_OUT1,
    CLK_PLLP_OUT0,
    CLK_PLLP_OUT5,
    CLK_PLLA,
    CLK_ACLK,
    CLK_PLL_U_48M,
    CLK_PLL_U_480M,
    CLK_PLLC4_OUT0,
    CLK_PLLC4_OUT1,
    CLK_PLLC4_OUT2,
    CLK_PLLC4_OUT_MUX,
    CLK_DFLLDISP_DIV,
    CLK_PLLDISPHUB_DIV,
    CLK_PLLP_DIV8,
    CLK_BPMP_NIC,
    CLK_PLL_A_OUT1,
    CLK_GPC2CLK,
    CLK_PLLE_PWRSEQ,
    CLK_PLLREFE_REF,
    CLK_SOR0_OUT,
    CLK_SOR1_OUT,
    CLK_PLLREFE_OUT1_DIV5,
    CLK_UTMIP_PLL_PWRSEQ,
    CLK_PEX_USB_PAD0_MGMT,
    CLK_PEX_USB_PAD1_MGMT,
    CLK_UPHY_PLL0_PWRSEQ,
    CLK_UPHY_PLL1_PWRSEQ,
    CLK_PLLREFE_PLLE_PASSTHROUGH,
    CLK_PLLREFE_PEX,
    CLK_PLLREFE_IDDQ,
    CLK_QSPI_OUT,
    CLK_GPCCLK,
    CLK_AON_NIC,
    CLK_SCE_NIC,
    CLK_PLLE,
    CLK_PLLC,
    CLK_PLLP,
    CLK_PLLD,
    CLK_PLLD2,
    CLK_PLLREFE_VCO,
    CLK_PLLC2,
    CLK_PLLC3,
    CLK_PLLDP,
    CLK_PLLC4_VCO,
    CLK_PLLA1,
    CLK_PLLNVCSI,
    CLK_PLLDISPHUB,
    CLK_PLLD3,
    CLK_PLLBPMPCAM,
    CLK_PLLAON,
    CLK_PLLU,
    CLK_PLLC4_VCO_DIV2,
    CLK_NAFLL_AXI_CBB,
    CLK_NAFLL_BPMP,
    CLK_NAFLL_ISP,
    CLK_NAFLL_NVDEC,
    CLK_NAFLL_NVENC,
    CLK_NAFLL_NVJPG,
    CLK_NAFLL_SCE,
    CLK_NAFLL_SE,
    CLK_NAFLL_TSEC,
    CLK_NAFLL_TSECB,
    CLK_NAFLL_VI,
    CLK_NAFLL_VIC,
    CLK_NAFLL_DISP,
    CLK_NAFLL_GPU,
    CLK_NAFLL_MCPU,
    CLK_NAFLL_BCPU,
    CLK_PLL_REF,
    CLK_OSC,
    CLK_EQOS_RX_INPUT,
    CLK_DTV_INPUT,
    CLK_SOR0_PAD_CLKOUT,
    CLK_SOR1_PAD_CLKOUT,
    CLK_I2S1_SYNC_INPUT,
    CLK_I2S2_SYNC_INPUT,
    CLK_I2S3_SYNC_INPUT,
    CLK_I2S4_SYNC_INPUT,
    CLK_I2S5_SYNC_INPUT,
    CLK_I2S6_SYNC_INPUT,
    CLK_SPDIFIN_SYNC_INPUT,
    NCLOCKS
};

enum clock_gate {
    CLK_GATE_FUSE,
    CLK_GATE_GPU,
    CLK_GATE_PCIE,
    CLK_GATE_AFI,
    CLK_GATE_PCIE2_IOBIST,
    CLK_GATE_PCIERX0,
    CLK_GATE_PCIERX1,
    CLK_GATE_PCIERX2,
    CLK_GATE_PCIERX3,
    CLK_GATE_PCIERX4,
    CLK_GATE_PLLC_OUT_ISP,
    CLK_GATE_PLLC_OUT_VE,
    CLK_GATE_PLLC_OUT_AON,
    CLK_GATE_SOR_SAFE,
    CLK_GATE_I2S2,
    CLK_GATE_I2S3,
    CLK_GATE_SPDIF_IN,
    CLK_GATE_SPDIF_DOUBLER,
    CLK_GATE_SPI3,
    CLK_GATE_I2C1,
    CLK_GATE_I2C5,
    CLK_GATE_SPI1,
    CLK_GATE_ISP,
    CLK_GATE_VI,
    CLK_GATE_SDMMC1,
    CLK_GATE_SDMMC2,
    CLK_GATE_SDMMC4,
    CLK_GATE_UARTA,
    CLK_GATE_UARTB,
    CLK_GATE_HOST1X,
    CLK_GATE_EMC,
    CLK_GATE_EXTPERIPH4,
    CLK_GATE_SPI4,
    CLK_GATE_I2C3,
    CLK_GATE_SDMMC3,
    CLK_GATE_UARTD,
    CLK_GATE_I2S1,
    CLK_GATE_DTV,
    CLK_GATE_TSEC,
    CLK_GATE_DP2,
    CLK_GATE_I2S4,
    CLK_GATE_I2S5,
    CLK_GATE_I2C4,
    CLK_GATE_AHUB,
    CLK_GATE_HDA2CODEC_2X,
    CLK_GATE_EXTPERIPH1,
    CLK_GATE_EXTPERIPH2,
    CLK_GATE_EXTPERIPH3,
    CLK_GATE_I2C_SLOW,
    CLK_GATE_SOR1,
    CLK_GATE_CEC,
    CLK_GATE_DPAUX1,
    CLK_GATE_DPAUX,
    CLK_GATE_SOR0,
    CLK_GATE_HDA2HDMICODEC,
    CLK_GATE_SATA,
    CLK_GATE_SATA_OOB,
    CLK_GATE_SATA_IOBIST,
    CLK_GATE_HDA,
    CLK_GATE_SE,
    CLK_GATE_APB2APE,
    CLK_GATE_APE,
    CLK_GATE_IQC1,
    CLK_GATE_IQC2,
    CLK_GATE_PLLREFE_OUT,
    CLK_GATE_PLLREFE_PLL_REF,
    CLK_GATE_PLLC4_OUT,
    CLK_GATE_XUSB,
    CLK_GATE_XUSB_DEV,
    CLK_GATE_XUSB_HOST,
    CLK_GATE_XUSB_SS,
    CLK_GATE_DSI,
    CLK_GATE_MIPI_CAL,
    CLK_GATE_DSIA_LP,
    CLK_GATE_DSIB,
    CLK_GATE_DSIB_LP,
    CLK_GATE_DMIC1,
    CLK_GATE_DMIC2,
    CLK_GATE_AUD_MCLK,
    CLK_GATE_I2C6,
    CLK_GATE_UART_FST_MIPI_CAL,
    CLK_GATE_VIC,
    CLK_GATE_SDMMC_LEGACY_TM,
    CLK_GATE_NVDEC,
    CLK_GATE_NVJPG,
    CLK_GATE_NVENC,
    CLK_GATE_QSPI,
    CLK_GATE_VI_I2C,
    CLK_GATE_HSIC_TRK,
    CLK_GATE_USB2_TRK,
    CLK_GATE_MAUD,
    CLK_GATE_TSECB,
    CLK_GATE_ADSP,
    CLK_GATE_ADSPNEON,
    CLK_GATE_MPHY_L0_RX_SYMB,
    CLK_GATE_MPHY_L0_RX_LS_BIT,
    CLK_GATE_MPHY_L0_TX_SYMB,
    CLK_GATE_MPHY_L0_TX_LS_3XBIT,
    CLK_GATE_MPHY_L0_RX_ANA,
    CLK_GATE_MPHY_L1_RX_ANA,
    CLK_GATE_MPHY_IOBIST,
    CLK_GATE_MPHY_TX_1MHZ_REF,
    CLK_GATE_MPHY_CORE_PLL_FIXED,
    CLK_GATE_AXI_CBB,
    CLK_GATE_DMIC3,
    CLK_GATE_DMIC4,
    CLK_GATE_DSPK1,
    CLK_GATE_DSPK2,
    CLK_GATE_I2S6,
    CLK_GATE_NVDISPLAY_P0,
    CLK_GATE_NVDISPLAY_DISP,
    CLK_GATE_NVDISPLAY_DSC,
    CLK_GATE_NVDISPLAYHUB,
    CLK_GATE_NVDISPLAY_P1,
    CLK_GATE_NVDISPLAY_P2,
    CLK_GATE_TACH,
    CLK_GATE_EQOS_AXI,
    CLK_GATE_EQOS_RX,
    CLK_GATE_UFSHC,
    CLK_GATE_UFSDEV_REF,
    CLK_GATE_NVCSI,
    CLK_GATE_NVCSILP,
    CLK_GATE_I2C7,
    CLK_GATE_I2C9,
    CLK_GATE_I2C12,
    CLK_GATE_I2C13,
    CLK_GATE_I2C14,
    CLK_GATE_PWM1,
    CLK_GATE_PWM2,
    CLK_GATE_PWM3,
    CLK_GATE_PWM5,
    CLK_GATE_PWM6,
    CLK_GATE_PWM7,
    CLK_GATE_PWM8,
    CLK_GATE_UARTE,
    CLK_GATE_UARTF,
    CLK_GATE_DBGAPB,
    CLK_GATE_BPMP_CPU_NIC,
    CLK_GATE_BPMP_APB,
    CLK_GATE_ACTMON,
    CLK_GATE_AON_CPU_NIC,
    CLK_GATE_CAN1,
    CLK_GATE_CAN1_HOST,
    CLK_GATE_CAN2,
    CLK_GATE_CAN2_HOST,
    CLK_GATE_AON_APB,
    CLK_GATE_UARTC,
    CLK_GATE_UARTG,
    CLK_GATE_AON_UART_FST_MIPI_CAL,
    CLK_GATE_I2C2,
    CLK_GATE_I2C8,
    CLK_GATE_I2C10,
    CLK_GATE_AON_I2C_SLOW,
    CLK_GATE_SPI2,
    CLK_GATE_DMIC5,
    CLK_GATE_AON_TOUCH,
    CLK_GATE_PWM4,
    CLK_GATE_TSC,
    CLK_GATE_MSS_ENCRYPT,
    CLK_GATE_SCE_CPU_NIC,
    CLK_GATE_SCE_APB,
    CLK_GATE_DSIC,
    CLK_GATE_DSIC_LP,
    CLK_GATE_DSID,
    CLK_GATE_DSID_LP,
    CLK_GATE_PEX_SATA_USB_RX_BYP,
    CLK_GATE_SPDIF_OUT,
    CLK_GATE_EQOS_PTP_REF,
    CLK_GATE_EQOS_TX,
    CLK_GATE_USB2_HSIC_TRK,
    CLK_GATE_XUSB_CORE_SS,
    CLK_GATE_XUSB_CORE_DEV,
    CLK_GATE_XUSB_FALCON,
    CLK_GATE_XUSB_FS,
    CLK_GATE_PLL_A_OUT0,
    CLK_GATE_SYNC_I2S1,
    CLK_GATE_SYNC_I2S2,
    CLK_GATE_SYNC_I2S3,
    CLK_GATE_SYNC_I2S4,
    CLK_GATE_SYNC_I2S5,
    CLK_GATE_SYNC_I2S6,
    CLK_GATE_SYNC_DSPK1,
    CLK_GATE_SYNC_DSPK2,
    CLK_GATE_SYNC_DMIC1,
    CLK_GATE_SYNC_DMIC2,
    CLK_GATE_SYNC_DMIC3,
    CLK_GATE_SYNC_DMIC4,
    CLK_GATE_SYNC_SPDIF,
    CLK_GATE_PLLREFE_OUT_GATED,
    CLK_GATE_PLLREFE_OUT1,
    CLK_GATE_PLLD_OUT1,
    CLK_GATE_PLLP_OUT0,
    CLK_GATE_PLLP_OUT5,
    CLK_GATE_PLLA,
    CLK_GATE_ACLK,
    CLK_GATE_PLL_U_48M,
    CLK_GATE_PLL_U_480M,
    CLK_GATE_PLLC4_OUT0,
    CLK_GATE_PLLC4_OUT1,
    CLK_GATE_PLLC4_OUT2,
    CLK_GATE_PLLC4_OUT_MUX,
    CLK_GATE_DFLLDISP_DIV,
    CLK_GATE_PLLDISPHUB_DIV,
    CLK_GATE_PLLP_DIV8,
    CLK_GATE_BPMP_NIC,
    CLK_GATE_PLL_A_OUT1,
    CLK_GATE_GPC2CLK,
    CLK_GATE_KFUSE,
    CLK_GATE_PLLE_PWRSEQ,
    CLK_GATE_PLLREFE_REF,
    CLK_GATE_SOR0_OUT,
    CLK_GATE_SOR1_OUT,
    CLK_GATE_PLLREFE_OUT1_DIV5,
    CLK_GATE_UTMIP_PLL_PWRSEQ,
    CLK_GATE_PEX_USB_PAD0_MGMT,
    CLK_GATE_PEX_USB_PAD1_MGMT,
    CLK_GATE_UPHY_PLL0_PWRSEQ,
    CLK_GATE_UPHY_PLL1_PWRSEQ,
    CLK_GATE_PLLREFE_PLLE_PASSTHROUGH,
    CLK_GATE_PLLREFE_PEX,
    CLK_GATE_PLLREFE_IDDQ,
    CLK_GATE_QSPI_OUT,
    CLK_GATE_GPCCLK,
    CLK_GATE_AON_NIC,
    CLK_GATE_SCE_NIC,
    CLK_GATE_PLLE,
    CLK_GATE_PLLC,
    CLK_GATE_PLLP,
    CLK_GATE_PLLD,
    CLK_GATE_PLLD2,
    CLK_GATE_PLLREFE_VCO,
    CLK_GATE_PLLC2,
    CLK_GATE_PLLC3,
    CLK_GATE_PLLDP,
    CLK_GATE_PLLC4_VCO,
    CLK_GATE_PLLA1,
    CLK_GATE_PLLNVCSI,
    CLK_GATE_PLLDISPHUB,
    CLK_GATE_PLLD3,
    CLK_GATE_PLLBPMPCAM,
    CLK_GATE_PLLAON,
    CLK_GATE_PLLU,
    CLK_GATE_PLLC4_VCO_DIV2,
    CLK_GATE_NAFLL_AXI_CBB,
    CLK_GATE_NAFLL_BPMP,
    CLK_GATE_NAFLL_ISP,
    CLK_GATE_NAFLL_NVDEC,
    CLK_GATE_NAFLL_NVENC,
    CLK_GATE_NAFLL_NVJPG,
    CLK_GATE_NAFLL_SCE,
    CLK_GATE_NAFLL_SE,
    CLK_GATE_NAFLL_TSEC,
    CLK_GATE_NAFLL_TSECB,
    CLK_GATE_NAFLL_VI,
    CLK_GATE_NAFLL_VIC,
    CLK_GATE_NAFLL_DISP,
    CLK_GATE_NAFLL_GPU,
    CLK_GATE_NAFLL_MCPU,
    CLK_GATE_NAFLL_BCPU,
    CLK_GATE_32K,
    CLK_GATE_M,
    CLK_GATE_PLL_REF,
    CLK_GATE_OSC,
    CLK_GATE_EQOS_RX_INPUT,
    CLK_GATE_DTV_INPUT,
    CLK_GATE_SOR0_PAD_CLKOUT,
    CLK_GATE_SOR1_PAD_CLKOUT,
    CLK_GATE_I2S1_SYNC_INPUT,
    CLK_GATE_I2S2_SYNC_INPUT,
    CLK_GATE_I2S3_SYNC_INPUT,
    CLK_GATE_I2S4_SYNC_INPUT,
    CLK_GATE_I2S5_SYNC_INPUT,
    CLK_GATE_I2S6_SYNC_INPUT,
    CLK_GATE_SPDIFIN_SYNC_INPUT,
    NCLKGATES
};
