/**************************************************************************************************
 [ Serial_Sensor_Test.h ]
  - シリアル通信を用いるセンサモジュールのテストクラス
  - [ 関数 ]
    - コンストラクタ
      - Serial_Sensor_Test(HardwareSerial* pSerial);
    - デストラクタ
      - ~Serial_Sensor_Test();
    - センサー値取得関数
      - virtual void GetData(double* pdata);

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
