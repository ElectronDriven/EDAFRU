# 1 "mcc_generated_files/LINDrivers/lin_app.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 295 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/opt/microchip/xc8/v3.10/pic/include/language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "mcc_generated_files/LINDrivers/lin_app.c" 2
# 41 "mcc_generated_files/LINDrivers/lin_app.c"
# 1 "mcc_generated_files/LINDrivers/lin_app.h" 1
# 41 "mcc_generated_files/LINDrivers/lin_app.h"
# 1 "mcc_generated_files/LINDrivers/lin_master.h" 1
# 42 "mcc_generated_files/LINDrivers/lin_master.h"
# 1 "/opt/microchip/xc8/v3.10/pic/include/c99/stdint.h" 1 3



# 1 "/opt/microchip/xc8/v3.10/pic/include/c99/musl_xc8.h" 1 3
# 5 "/opt/microchip/xc8/v3.10/pic/include/c99/stdint.h" 2 3
# 26 "/opt/microchip/xc8/v3.10/pic/include/c99/stdint.h" 3
# 1 "/opt/microchip/xc8/v3.10/pic/include/c99/bits/alltypes.h" 1 3
# 133 "/opt/microchip/xc8/v3.10/pic/include/c99/bits/alltypes.h" 3
typedef unsigned __int24 uintptr_t;
# 148 "/opt/microchip/xc8/v3.10/pic/include/c99/bits/alltypes.h" 3
typedef __int24 intptr_t;
# 164 "/opt/microchip/xc8/v3.10/pic/include/c99/bits/alltypes.h" 3
typedef signed char int8_t;




typedef short int16_t;




typedef __int24 int24_t;




typedef long int32_t;





typedef long long int64_t;
# 194 "/opt/microchip/xc8/v3.10/pic/include/c99/bits/alltypes.h" 3
typedef long long intmax_t;





typedef unsigned char uint8_t;




typedef unsigned short uint16_t;




typedef __uint24 uint24_t;




typedef unsigned long uint32_t;





typedef unsigned long long uint64_t;
# 235 "/opt/microchip/xc8/v3.10/pic/include/c99/bits/alltypes.h" 3
typedef unsigned long long uintmax_t;
# 27 "/opt/microchip/xc8/v3.10/pic/include/c99/stdint.h" 2 3

typedef int8_t int_fast8_t;

typedef int64_t int_fast64_t;


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;

typedef int24_t int_least24_t;
typedef int24_t int_fast24_t;

typedef int32_t int_least32_t;

typedef int64_t int_least64_t;


typedef uint8_t uint_fast8_t;

typedef uint64_t uint_fast64_t;


typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;

typedef uint24_t uint_least24_t;
typedef uint24_t uint_fast24_t;

typedef uint32_t uint_least32_t;

typedef uint64_t uint_least64_t;
# 148 "/opt/microchip/xc8/v3.10/pic/include/c99/stdint.h" 3
# 1 "/opt/microchip/xc8/v3.10/pic/include/c99/bits/stdint.h" 1 3
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
# 149 "/opt/microchip/xc8/v3.10/pic/include/c99/stdint.h" 2 3
# 43 "mcc_generated_files/LINDrivers/lin_master.h" 2
# 1 "/opt/microchip/xc8/v3.10/pic/include/c99/stdbool.h" 1 3
# 44 "mcc_generated_files/LINDrivers/lin_master.h" 2
# 1 "/opt/microchip/xc8/v3.10/pic/include/c99/string.h" 1 3
# 10 "/opt/microchip/xc8/v3.10/pic/include/c99/string.h" 3
# 1 "/opt/microchip/xc8/v3.10/pic/include/c99/features.h" 1 3
# 11 "/opt/microchip/xc8/v3.10/pic/include/c99/string.h" 2 3
# 25 "/opt/microchip/xc8/v3.10/pic/include/c99/string.h" 3
# 1 "/opt/microchip/xc8/v3.10/pic/include/c99/bits/alltypes.h" 1 3
# 128 "/opt/microchip/xc8/v3.10/pic/include/c99/bits/alltypes.h" 3
typedef unsigned size_t;
# 421 "/opt/microchip/xc8/v3.10/pic/include/c99/bits/alltypes.h" 3
typedef struct __locale_struct * locale_t;
# 26 "/opt/microchip/xc8/v3.10/pic/include/c99/string.h" 2 3

void *memcpy (void *restrict, const void *restrict, size_t);
void *memmove (void *, const void *, size_t);
void *memset (void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void *memchr (const void *, int, size_t);

char *strcpy (char *restrict, const char *restrict);
char *strncpy (char *restrict, const char *restrict, size_t);

char *strcat (char *restrict, const char *restrict);
char *strncat (char *restrict, const char *restrict, size_t);

int strcmp (const char *, const char *);
int strncmp (const char *, const char *, size_t);

int strcoll (const char *, const char *);
size_t strxfrm (char *restrict, const char *restrict, size_t);

char *strchr (const char *, int);
char *strrchr (const char *, int);

size_t strcspn (const char *, const char *);
size_t strspn (const char *, const char *);
char *strpbrk (const char *, const char *);
char *strstr (const char *, const char *);
char *strtok (char *restrict, const char *restrict);

size_t strlen (const char *);

char *strerror (int);




char *strtok_r (char *restrict, const char *restrict, char **restrict);
int strerror_r (int, char *, size_t);
char *stpcpy(char *restrict, const char *restrict);
char *stpncpy(char *restrict, const char *restrict, size_t);
size_t strnlen (const char *, size_t);
char *strdup (const char *);
char *strndup (const char *, size_t);
char *strsignal(int);
char *strerror_l (int, locale_t);
int strcoll_l (const char *, const char *, locale_t);
size_t strxfrm_l (char *restrict, const char *restrict, size_t, locale_t);




void *memccpy (void *restrict, const void *restrict, int, size_t);
# 45 "mcc_generated_files/LINDrivers/lin_master.h" 2

typedef enum {
    LIN_IDLE,
    LIN_TX_IP,
    LIN_RX_IP,
    LIN_RX_RDY
}lin_state_t;

typedef enum {
    TRANSMIT,
    RECEIVE
}lin_packet_type_t;

typedef struct {
    uint8_t cmd;
    lin_packet_type_t type;
    uint8_t length;
    uint8_t timeout;
    uint8_t period;
    uint8_t* data;
}lin_cmd_packet_t;

typedef union {
    struct {
        uint8_t PID;
        uint8_t data[8];
        uint8_t checksum;
        uint8_t length;
    };
    uint8_t rawPacket[11];
}lin_packet_t;

typedef union {
    struct {
        uint8_t cmd;
        uint8_t rxLength;
        uint8_t data[8];
        uint8_t checksum;
        uint8_t timeout;
    };
    uint8_t rawPacket[12];
}lin_rxpacket_t;

typedef union {
    struct {
        unsigned ID0: 1;
        unsigned ID1: 1;
        unsigned ID2: 1;
        unsigned ID3: 1;
        unsigned ID4: 1;
        unsigned ID5: 1;
        unsigned P0: 1;
        unsigned P1: 1;
    };
    uint8_t rawPID;
}lin_pid_t;



void LIN_init(uint8_t tableLength, const lin_cmd_packet_t* const table, void (*processData)(void));

void LIN_queuePacket(uint8_t cmd, uint8_t* data);

_Bool LIN_receivePacket(void);

void LIN_sendPacket(void);

uint8_t LIN_getPacket(uint8_t* data);

lin_state_t LIN_handler(void);

uint8_t LIN_getChecksum(uint8_t length, uint8_t* data);

uint8_t LIN_calcParity(uint8_t CMD);


void LIN_startTimer(uint8_t timeout);

void LIN_timerHandler(void);

void LIN_setTimerHandler(void);

void LIN_stopTimer(void);

void LIN_startPeriod(void);

void LIN_stopPeriod(void);

void LIN_enableRx(void);

void LIN_disableRx(void);

void LIN_sendBreak(void);

void LIN_sendPeriodicTx(void);
# 42 "mcc_generated_files/LINDrivers/lin_app.h" 2





typedef enum {
    UNLOCK = 0x00,
    RSSI = 0x01,
    LFRX = 0x02
}lin_cmd_t;

uint8_t UNLOCK_Data[1];
uint8_t RSSI_Data[1];
uint8_t LFRX_Data[8];

const lin_cmd_packet_t scheduleTable[] = {

    {UNLOCK, TRANSMIT, 1, 0, 100, UNLOCK_Data },
    {RSSI, TRANSMIT, 1, 0, 20, RSSI_Data },
    {LFRX, RECEIVE, 8, 100, 0, LFRX_Data }
};


void LIN_Master_Initialize(void);

void processLIN(void);
# 42 "mcc_generated_files/LINDrivers/lin_app.c" 2

void LIN_Master_Initialize(void){

    LIN_init((sizeof(scheduleTable)/sizeof(lin_cmd_packet_t)), scheduleTable, processLIN);

}

void processLIN(void){
    uint8_t tempRxData[8];
    uint8_t cmd;

    cmd = LIN_getPacket(tempRxData);
    switch(cmd){
        case UNLOCK:
            break;
        case RSSI:
            break;
        case LFRX:
            break;
        default:
            break;
    }
}
