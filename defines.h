/*
 * defines.h
 *
 *  Created on: Mar 27, 2015
 *      Author: Snap
 */

//#define MODE_DEBUG
//#define DEBUG_CHARGING

/* Sensor Configuration */
#define SENSOR_BATT
#define SENSOR_TEMPINT
//#define SENSOR_DHT11
#define SENSOR_DHT22
//#define SENSOR_CURRENT

//#define SLEEP_UC
//#define SLEEP_XBEE

/* Broadcast */
//#define BROADCAST

/* Enable Debug unicast and Debug broadcast */
//#define DEBUGTX_ENABLE

/* State encoding */

#define	S_RTS1		10
#define S_RTS2		11

#define S_ADDR1		0
#define S_ADDR2		1
#define S_ADDR3		2
#define S_ADDR4		3

#define S_INIT		4
#define S_READY		5
#define S_SENSE		6
#define S_TRACE1	7
#define S_TRACE2	8
#define S_WINDOW	9
#define S_STOP		17
#define S_START     26
#define S_STARTRES  27
#define S_SENSERES  28
#define S_STOPRES   29
#define S_RXBUFOFW  31

#define S_DEBUG		12
#define S_DBRD		13
#define S_DUNI		14
#define S_DATRES    15
#define S_DQRES1	18
#define S_DQRES2    19
#define S_DQRES3    20
#define S_DQRES4    30

#define S_BOOTUP1   21
#define S_BOOTUP2   22
#define S_BOOTUP3   23
#define S_BOOTUP4   24

#define S_SLEEP1    25

/* Timer-relative periods */
/** Sensing Period **/
#define SAMPLE_PERIOD	10
/** "Present" Broadcast Period **/
#define PRES_PERIOD		2
/** Stop window Period **/
#define STOP_PERIOD		5
/** Debug state battery sample period **/
#define STANDBY_SAMPLEBATT 1000

#define MAC_ACK_TIMEOUT	10
#define NODELIST_MAX	20
#define RXBUF_MAX		50
#define TRACE_TIMEOUT	100

#define PARAM_PL	0
#define PARAM_WR    1
#define PARAM_ID    2
#define PARAM_CH    3
#define PARAM_MR    4
#define PARAM_D6    5
#define PARAM_SH    6
#define PARAM_SL    7
#define PARAM_NH    8

/** Debug parse return values **/
#define CHGSINK  7
#define DBRD     1
#define CHGCH    5
#define CHGID    12
#define CHGLOC   13
#define CHGPL    4
#define CHGPER   3
#define DUNI     2
#define COMMIT   11
#define QUESINK  9
#define QUEPL    8
#define QUESTAT  15
#define QUEPER   10
#define START    6
#define SLPTIMED 14
#define CHGFLAG  16
#define QUEFLAG  17
#define QUEVER   18
#define QUEMR    19
#define CHGMR    20
#define CHGNH    21
#define QUENH    22

/** Battery charging thresholds **/
#define BATT_VTHLO 0x02e0 // 3.6V
#define BATT_VTHHI 0x0346 // 4.1V
//#define BATT_VTHLO 0x02f0
//#define BATT_VTHHI 0x0310

/** Node ID maximum length **/
#define MAXIDLEN 20
#define MAXLOCLEN 20

/** Flash **/
#define SEG_D 0x1000
#define SEG_C 0x1040
#define SEG_B 0x1080

/** Buffers **/
#define MAXDATA 32
#define MAXPAYLOAD 55

/** Initialization **/
#define BOOTDELAY 5
