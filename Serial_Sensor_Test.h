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

// [ インクルードガード ]
#ifndef _SERIAL_SENSOR_TEST_H_
#define _SERIAL_SENSOR_TEST_H_

// [ ライブラリ読み込み ]
#include "Sensor.h"

// [ 前方宣言 ]
class HardwareSerial;

// [ クラス定義 ]
class Serial_Sensor_Test : public Sensor{
public:
    Serial_Sensor_Test(HardwareSerial* pSerial);
    ~Serial_Sensor_Test();
    void GetData(double* pdata);
private:
    HardwareSerial* m_pSerial;
};

#endif
