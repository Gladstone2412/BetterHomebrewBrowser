#ifndef BHBB_DL_H
#define BHBB_DL_H

#define BHBB_DL_MAGIC 'BG'
#define BHBB_DL_CFG_VER 2
#define BHBB_DL_PIPE_NAME "BGVPK::RxPipe"

typedef struct 
{
    uint16_t magic;     // bhbb_dl magic | cfg version
    uint8_t type;       // 0 - custom path, 1- app
    char path[256];     // This is used when type is set to 0 (custom path)
} BGDLParam;

#endif