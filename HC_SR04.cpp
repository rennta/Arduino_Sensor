/**************************************************************************************************
 [ HC_SR04.h ]
  - 超音波距離センサ(HC-SR04)クラス
  - 動作
    (1) triggerピンにHIGHを100ms出力
    (2) inputピンにHIGHが入力される
    (3) inputピンに入力される電圧がLOWになるまでの時間を測定する。
    (4) その時間の半分を音速で割る

**************************************************************************************************/


// [ ライブラリ読み込み ]
#include "HC_SR04.h"
#include "Arduino.h"


// [ コンストラクタ ]
HC_SR04::HC_SR04(int trigger_pin, int input_pin)
    :m_TRIGGER_PIN(trigger_pin), m_INPUT_PIN(input_pin), m_SPEED_OF_SOUND(340.0F), 
     m_TRIGGER_TIME(15U){
}


// [ デストラクタ ]
HC_SR04::~HC_SR04(){
}


// [ センサー値取得関数 ]
void HC_SR04::GetData(double* pdata){
    
    // トリガー出力
    digitalWrite(m_TRIGGER_PIN,LOW);
    delayMicroseconds(m_TRIGGER_TIME);
    digitalWrite(m_TRIGGER_PIN,HIGH);
    delayMicroseconds(m_TRIGGER_TIME);
    digitalWrite(m_TRIGGER_PIN,LOW);

    // 時間測定
    int duration = pulseIn(m_INPUT_PIN, HIGH);

    // 距離測定
    // ultrasonic speed is 34000cm/s = 0.034cm/us 
    double distance = duration/2.0F;
    distance = distance*m_SPEED_OF_SOUND*100.0F/1000000.0F;
    *pdata = distance;
    
    return;
}
