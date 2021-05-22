/**************************************************************************************************
 [ Sensor.h ]
  - 各種センサー用抽象クラスヘッダ
  - [ 関数 ]
    - センサー値取得関数
      - virtual void GetData(double* pdata);

**************************************************************************************************/


// [ インクルードガード ]
#ifndef _SENSOR_H_
#define _SENSOR_H_


// [ 前方宣言 ]
class HardwareSerial;
class Wire;


// [ クラス定義 ]
class Sensor {
public:
    virtual void GetData(double* pdata) = 0;
    virtual ~Sensor();
protected:
    Wire* m_pWire;
    unsigned short int m_digital_pin;
    unsigned short int m_analog_pin;
};


#endif
