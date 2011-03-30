// Serial.cpp: Common code used by different Arduino boards
// Makes things work with simulator.



/* [in] Digital Signal 0: J1 pin 1 (RxD) Read Serial Data */
const int RxD = 0;

/* [out] Digital Signal 1: J1 pin 2 (TxD). Transmit Serial Data.  */
const int TxD = 1;

/* [out] Digital Signal 13: J3 pin 5 (SCK)  LED on Arduino board. Used for testing.    */
const int LED = 13;



// TODO: Expand Serial.cpp (or other files) to include code shared across Arduinos