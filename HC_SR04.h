/**************************************************************************************************
 [ HC_SR04.h ]
  - 超音波距離センサ(HC-SR04)クラスヘッダ
  - [ 関数 ]
    - コンストラクタ
      - HC_SR04(int trigger_pin, int input_pin);
    - デストラクタ
      - ~HC_SR04();
    - センサー値取得関数
      - void GetData(double* pdata);

**************************************************************************************************/


// [ インクルードガード ]
#ifndef _HC_SR04_H_
#define _HC_SR04_H_


// [ ヘッダファイル読み込み ]
#include "Sensor.h"


// [ クラス定義 ]
class HC_SR04 : public Sensor{
public:
    HC_SR04(int trigger_pin, int input_pin);
    ~HC_SR04();
    void GetData(double* pdata);
private:
    const unsigned short int m_TRIGGER_PIN;
    const unsigned short int m_INPUT_PIN;
    const unsigned short int m_TRIGGER_TIME;
    const double m_SPEED_OF_SOUND;
};


#endif
