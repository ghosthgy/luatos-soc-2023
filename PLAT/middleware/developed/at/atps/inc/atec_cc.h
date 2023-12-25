/******************************************************************************

*(C) Copyright 2018 AirM2M International Ltd.

* All Rights Reserved

******************************************************************************
*  Filename: atec_cc.h
*
*  Description: Macro definition for IMS CC service related AT commands
*
*  History:
*
*  Notes:
*
******************************************************************************/
#ifndef  __AT_EC_CC_H__
#define  __AT_EC_CC_H__

#include <stdint.h>
#include "at_util.h"

/* AT+CSTA */
#define ATC_CSTA_0_VAL_MIN                       129
#define ATC_CSTA_0_VAL_MAX                       161
#define ATC_CSTA_0_VAL_DEFAULT                   145

/* AT+CVHU */
#define ATC_CVHU_0_VAL_MIN                       0
#define ATC_CVHU_0_VAL_MAX                       1
#define ATC_CVHU_0_VAL_DEFAULT                   0

/* AT+CRC */
#define ATC_CRC_0_VAL_MIN                       0
#define ATC_CRC_0_VAL_MAX                       1
#define ATC_CRC_0_VAL_DEFAULT                   0

/* AT+CLIP */
#define ATC_CLIP_0_VAL_MIN                       0
#define ATC_CLIP_0_VAL_MAX                       1
#define ATC_CLIP_0_VAL_DEFAULT                   0

/* AT+COLP */
#define ATC_COLP_0_VAL_MIN                       0
#define ATC_COLP_0_VAL_MAX                       1
#define ATC_COLP_0_VAL_DEFAULT                   0

/* AT+CCWA */
#define ATC_CCWA_0_VAL_MIN                       0
#define ATC_CCWA_0_VAL_MAX                       1
#define ATC_CCWA_0_VAL_DEFAULT                   0
#define ATC_CCWA_1_VAL_MIN                       0
#define ATC_CCWA_1_VAL_MAX                       2
#define ATC_CCWA_1_VAL_DEFAULT                   0
#define ATC_CCWA_2_VAL_MIN                       1
#define ATC_CCWA_2_VAL_MAX                       4
#define ATC_CCWA_2_VAL_DEFAULT                   1

/* AT+CHLD */
#define ATC_CHLD_0_VAL_MIN                       0
#define ATC_CHLD_0_VAL_MAX                       27
#define ATC_CHLD_0_VAL_DEFAULT                   0

/* AT+VTS */
#define ATC_VTS_0_STR_MAX_LEN                   32
#define ATC_VTS_0_STR_DEFAULT                   PNULL
#define ATC_VTS_1_VAL_MIN                       1
#define ATC_VTS_1_VAL_MAX                       10
#define ATC_VTS_1_VAL_DEFAULT                   1

/* AT+VTD */
#define ATC_VTD_0_VAL_MIN                       1
#define ATC_VTD_0_VAL_MAX                       10
#define ATC_VTD_0_VAL_DEFAULT                   1

CmsRetId  ccCSTA(const AtCmdInputContext *pAtCmdReq);
CmsRetId  ccCVHU(const AtCmdInputContext *pAtCmdReq);
CmsRetId  ccCHUP(const AtCmdInputContext *pAtCmdReq);
CmsRetId  ccCLCC(const AtCmdInputContext *pAtCmdReq);
CmsRetId  ccCRC(const AtCmdInputContext *pAtCmdReq);
CmsRetId  ccCLIP(const AtCmdInputContext *pAtCmdReq);
CmsRetId  ccCOLP(const AtCmdInputContext *pAtCmdReq);
CmsRetId  ccCCWA(const AtCmdInputContext *pAtCmdReq);
CmsRetId  ccCHLD(const AtCmdInputContext *pAtCmdReq);

CmsRetId  ccVTS(const AtCmdInputContext *pAtCmdReq);
CmsRetId  ccVTD(const AtCmdInputContext *pAtCmdReq);

#endif

