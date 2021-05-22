/**************************************************************************************************
 [ Serial_Sensor_Test.cpp ]
  - テストクラス

**************************************************************************************************/


// [ ライブラリ読み込み ]
#include <HardwareSerial.h>
#include "Serial_Sensor_Test.h"


// [ コンストラクタ ]
Serial_Sensor_Test::Serial_Sensor_Test(HardwareSerial* pSerial)
  :m_pSerial(pSerial){
}


// [ デストラクタ ]
Serial_Sensor_Test::~Serial_Sensor_Test(){
}


// [ センサー値取得関数 ]
void Serial_Sensor_Test::GetData(double* pdata){
  *pdata = 5.0F;
  return;
}
