boolean matrix[8][8]={
{0,0,0,1,1,0,0,0},
{0,0,1,0,0,1,0,0},
{0,1,0,0,0,0,1,0},
{0,1,0,0,0,0,1,0},
{0,1,0,0,0,0,1,0},
{0,1,1,1,1,1,1,0},
{0,1,0,0,0,0,1,0},
{0,1,0,0,0,0,1,0}
};
void setup(){
 for(int i=2;i<=17;i++){
 pinMode(i,OUTPUT);
 digitalWrite(i,LOW);
 }
}
void loop(){
 for(int i=2;i<=9;i++){
 digitalWrite(i,HIGH); //行：HIGH で点灯
 for(int j=10;j<=17;j++){
 if(matrix[i-2][j-10]==1){//点灯条件
 digitalWrite(j,LOW); //列：LOW で点灯
 }
 delayMicroseconds(300);//0.03 秒点灯
 digitalWrite(j,HIGH);//オフにする
 }
 digitalWrite(i,LOW);//オフにする
 }
}
