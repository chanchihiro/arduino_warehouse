void setup(){
 //16 本のピン(2～17)を出力に設定
 for(int i=2;i<=17;i++){

  
 pinMode(i,OUTPUT); // ピンを出力に設定
 }
}
void loop(){
 //行（横）の繰り返し処理
 for(int i=2;i<=9;i++){ //行（2~9 番ピン）
 digitalWrite(i,HIGH); //HIGH で点灯
 //列（縦）の繰り返し処理
 for(int j=10;j<=17;j++){ //列（10~17 番ピン）
 digitalWrite(j,LOW); //LOW で点灯



 
 delay(100); //点灯時間
 digitalWrite(j,HIGH); //列をオフにする
 }
 digitalWrite(i,LOW); //行をオフにする
 }
}
