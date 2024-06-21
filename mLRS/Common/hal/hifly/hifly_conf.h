//*******************************************************
// Copyright (c) MLRS project
// GPL3
// https://www.gnu.org/licenses/gpl-3.0.de.html
// OlliW @ www.olliw.eu
//*******************************************************
// hal
//*********************************************************
//-------------------------------------------------------
// DIY hardware browsing https://github.com/Hifly-rc/mlrs-elrs-Compatible-hardware
//-------------------------------------------------------
#define DEVICE_NAME_SE77RX10
//#define MLRS_FEATURE_OLED
//#define DEVICE_NAME_SE22TX22
//#define DEVICE_NAME_XLITE_SE28TX22

#ifdef DEBUG_ENABLED
#undef DEBUG_ENABLED
#endif

//-- MLRS Hifly device
//-- RX
//#define MLRS_FEATURE_915_MHZ_FCC
#ifdef RX_HIFLY_WLE5CC
#undef SETUP_RF_BAND
#undef SETUP_MODE
//-- redefine config tx parameter
#undef SETUP_RX_SERIAL_BAUDRATE
#define SETUP_RX_SERIAL_BAUDRATE 3 // 3=57600
#undef SETUP_RX_CHANNEL_ORDER
#define SETUP_RX_CHANNEL_ORDER 0 // AETR

#ifdef DEVICE_NAME_SE77RX10
#define DEVICE_NAME "SE77RX1.0 700M"
#define DEVICE_IS_RECEIVER
#define DEVICE_HAS_SX126x
#define FREQUENCY_BAND_700_MHZ
#define SETUP_RF_BAND SETUP_FREQUENCY_BAND_700_MHZ
#define SETUP_MODE MODE_31HZ
#endif
#endif


//-- TX
#ifdef TX_HIFLY_WLE5CC
#undef SETUP_RF_BAND
#undef SETUP_MODE
//-- redefine config tx parameter
#undef SETUP_TX_SERIAL_BAUDRATE
#define SETUP_TX_SERIAL_BAUDRATE 3 // 3=57600
#undef SETUP_TX_CHANNEL_ORDER
#define SETUP_TX_CHANNEL_ORDER 0 // AETR

#ifdef MLRS_FEATURE_OLED
#define DEVICE_HAS_I2C_DISPLAY_ROT180
#endif
#ifdef DEVICE_NAME_SE77TX10
#define DEVICE_NAME "HIFLY-SE77TX1.0"
#define DEVICE_IS_TRANSMITTER
#define DEVICE_HAS_SX126x
#define FREQUENCY_BAND_700_MHZ
#define FREQUENCY_BAND_915_MHZ_FCC
#define SETUP_RF_BAND SETUP_FREQUENCY_BAND_915_MHZ_FCC
#define SETUP_MODE MODE_31HZ
#endif
#endif

#ifdef TX_HIFLY_F103CB
#undef SETUP_RF_BAND
#undef SETUP_MODE
//-- redefine config tx parameter
#undef SETUP_TX_SERIAL_BAUDRATE
#define SETUP_TX_SERIAL_BAUDRATE 3 // 3=57600
#undef SETUP_TX_CHANNEL_ORDER
#define SETUP_TX_CHANNEL_ORDER 0 // AETR

#ifdef MLRS_FEATURE_OLED
#define DEVICE_HAS_I2C_DISPLAY_ROT180
#endif

#ifdef DEVICE_NAME_SE22TX22
#define DEVICE_NAME "SE22TX2.2 700M"
#define DEVICE_IS_TRANSMITTER
#define DEVICE_HAS_SX126x
#define FREQUENCY_BAND_700_MHZ
#define SETUP_RF_BAND SETUP_FREQUENCY_BAND_700_MHZ
#define SETUP_MODE MODE_31HZ
#endif
#endif
