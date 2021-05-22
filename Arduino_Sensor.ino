/**************************************************************************************************
 [ Arduino_Sensor.ino ]
  - メイン処理
  - Serial_Sensor_Testを呼び出す

**************************************************************************************************/


// [ ライブラリ読み込み ]
#include "Serial_Sensor_Test.h"
#include "HC_SR04.h"

// [ ピン設定 ]
const unsigned short int TRIGGER_PIN = 5U;
const unsigned short int INPUT_PIN   = 4U; 


// [ 初期実行関数 ]
void setup(){
    
    // 初期化処理 
    Serial.begin(9600);
    pinMode(TRIGGER_PIN,OUTPUT);
    pinMode(INPUT_PIN,INPUT);
    digitalWrite(TRIGGER_PIN,LOW);
    double data;
    delay(100);
    
    // インスタンス作成
    Sensor* test[2] = { new Serial_Sensor_Test(&Serial),
                        new HC_SR04(TRIGGER_PIN, INPUT_PIN)};

    // データ取得/シリアル出力 (テスト)
    for(int i=0; i<5; i++){
        test[0]->GetData(&data);
        Serial.print("serial_sensor_test : ");
        Serial.println(data);
        
        // データ取得/シリアル出力 （HC-SR04）
        test[1]->GetData(&data);
        Serial.print("HC_SR04_sensor : ");
        Serial.print(data);
        Serial.println(" cm");
        delay(1000);
    }

    // メモリ解放
    delete[] test;
}


// [ ループ関数 ]
void loop(){

}
