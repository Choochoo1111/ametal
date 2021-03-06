/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/
/**
 * \file
 * \brief FGPIO 硬件层引脚输入输出例子
 *
 * - 操作：
 *   1.将J14的key和PIOC_0短接在一起;
 *   2.将J9的LED0和PIOC_4短接在一起;
 *   3.将J10的LED1和PIOC_8短接在一起;
 *
 * -实现现象：程序下载到demo板后，按下一次按键LED0会进行一次翻转，若长按，demo板上的LED0会闪。
 *
 * \par 源代码
 * \snippet demo_amks16z_core_hw_fgpio.c src_amks16z_core_hw_fgpio
 *
 * \internal
 * \par Modification History
 * - 1.01 16-09-18  nwt, make some changes.
 * - 1.00 15-10-16  wxj, first implementation.
 * \endinternal
 */
 
/**
 * \addtogroup demo_amks16z_core_if_hw_fgpio
 * \copydoc demo_amks16z_core_hw_fgpio.c
 */
 
/** [src_amks16z_core_hw_fgpio] */
#include "ametal.h"
#include "am_vdebug.h"
#include "am_board.h"
#include "demo_fsl_entrys.h"

/**
 * \brief 例程入口
 */
void demo_amks16z_core_hw_fgpio_entry (void)
{
    AM_DBG_INFO("demo amks16z_core hw fgpio!\r\n");

    demo_kl26_hw_fgpio_entry();
}

/** [src_amks16z_core_hw_fgpio] */
 
/* end of file */
