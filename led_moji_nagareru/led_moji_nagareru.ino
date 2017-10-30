#define MAX_LEN 24 //8x3 文字 = 24
//8x25 の配列にする（25 列目は余白）
boolean matrix[8][ MAX_LEN+1]={
{0,0,0,1,1,0,0,0,0,1,0,0,0,0,1,0,0,1,1,1,1,1,0,0,0},
{0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0},
{0,1,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0},
{0,1,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0},
{0,1,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,1,1,1,1,1,0,0,0},
{0,1,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0},
{0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0},
{0,0,0,1,1,0,0,0,0,1,0,0,0,1,1,0,0,1,1,1,1,1,0,0,0}
};
void setup(){
 for(int i=2;i<=17;i++){
 pinMode(i,OUTPUT);
 digitalWrite(i,LOW);
 }
}
void loop(){
 int count=5;
 while(count>0){
 for(int i=2;i<=9;i++){
 digitalWrite(i,HIGH);
 for(int j=10;j<=17;j++){
 digitalWrite(j,!matrix[i-2][j-10]);
 delayMicroseconds(300);
 digitalWrite(j,HIGH); //LED OFF
 }
 digitalWrite(i,LOW); //LED OFF
 }
 count--;
 }
 //カスケーディング
 for(int k=0;k<8;k++){
 //以下の配列数の値を変更しておく
 for(int l=0;l<=MAX_LEN;l++){
 if(l== MAX_LEN){
 matrix[k][ MAX_LEN ]=matrix[k][0];
 }else{
 matrix[k][l]=matrix[k][l+1];
 }
 }
 }
}
