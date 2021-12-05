
const int ledpin=13;
const int soundpin=A2;
const int threshold=200;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(soundpin,INPUT);
}

void loop() {
  int soundsens=analogRead(soundpin);
  if(soundsens>=threshold){
    digitalWrite(ledpin,HIGH);
   delay(167i );}
   else{
    digitalWrite(ledpin,LOW);}
  //continues to display light aslong as there is sound input to the mic
  //run the code by connecting a serial cable to your arduino kit.

}
