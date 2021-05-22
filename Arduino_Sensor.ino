/**************************************************************************************************
 [ Arduino_Sensor.ino ]
  - メイン処理
  - Serial_Sensor_Testを呼び出す

**************************************************************************************************/
// [ ライブラリ読み込み ]
#include "Serial_Sensor_Test.h"

// [ 初期実行関数 ]
void setup(){
    
    // 初期化処理 
    Serial.begin(9600);
    double data;
    
    // インスタンス作成
    Sensor* test = new Serial_Sensor_Test(&Serial);

    // データ取得/シリアル出力
    test->GetData(&data);
    Serial.print(data);

}

// [ ループ関数 ]
void loop(){

}