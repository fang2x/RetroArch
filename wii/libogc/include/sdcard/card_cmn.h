#ifndef __CARD_CMN_H__
#define __CARD_CMN_H__

#include <gctypes.h>

#define CARDIO_ERROR_READY				 0
#define CARDIO_ERROR_BUSY				-1
#define CARDIO_ERROR_WRONGDEVICE		-2
#define CARDIO_ERROR_NOCARD				-3
#define CARDIO_ERROR_IDLE				-4
#define CARDIO_ERROR_IOERROR			-5
#define CARDIO_ERROR_IOTIMEOUT			-6

#define CARDIO_ERROR_NOTPERMITTED		-107
#define CARDIO_ERROR_ROOTENTRY			-108
#define CARDIO_ERROR_OUTOFROOTENTRY		-109
#define CARDIO_ERROR_FILEEXIST			-110
#define CARDIO_ERROR_NOEMPTYCLUSTER		-111
#define CARDIO_ERROR_EOF				-112
#define CARDIO_ERROR_SYSTEMPARAM		-113
#define CARDIO_ERROR_FILEOPENED			-114
#define CARDIO_ERROR_FILENOTOPENED		-115
#define CARDIO_ERROR_FILENAMETOOLONG	-116
#define CARDIO_ERROR_INVALIDNAME		-117
#define CARDIO_ERROR_NOLONGNAME			-118
#define CARDIO_ERROR_INCORRECTFAT		-119
#define CARDIO_ERROR_NOTFOUND			-120
#define CARDIO_ERROR_OUTOFMEMORY		-121
#define CARDIO_ERROR_INVALIDFAT			-122
#define CARDIO_ERROR_INVALIDMBR			-123
#define CARDIO_ERROR_INVALIDPBR			-124
#define CARDIO_ERROR_NOEMPTYBLOCK		-125
#define CARDIO_ERROR_INTERNAL			-126
#define CARDIO_ERROR_INVALIDPARAM		-127
#define CARDIO_ERROR_FATALERROR			-128

#define MAX_DRIVE						2
#define SECTOR_SIZE						512

#define NOT_INITIALIZED					0
#define INITIALIZING					1
#define INITIALIZED						2

#ifdef __cplusplus
   extern "C" {
#endif /* __cplusplus */

typedef struct _dev_info {
	u32 CpV;
	u32 HpC;
	u32 SpH;
	u32 allS;
	u32 szS;
	u32 PBpV;
	u32 LBpV;
	u32 SpB;
	u32 PpB;
	u32 szP;
} DEV_INFO;

#ifdef __cplusplus
   }
#endif /* __cplusplus */

#endif
