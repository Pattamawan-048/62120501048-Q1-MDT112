 void setup() {
     Serial.begin(9600);
     pinMode(2, INPUT_PULLUP);
     pinMode(3, OUTPUT);
     pinMode(4, OUTPUT);
     pinMode(5, OUTPUT);
     pinMode(6, OUTPUT);
     pinMode(7, OUTPUT);
     pinMode(8, OUTPUT);
     pinMode(9, OUTPUT);
     pinMode(10, OUTPUT);
     pinMode(11, OUTPUT);
     pinMode(12, OUTPUT);
     pinMode(13, OUTPUT);
     
     for(int buzzer = 3; buzzer <= 13; buzzer++){ //ประกาศตัวแปร buzzer
         pinMode(buzzer,OUTPUT);
     }
     tone(8,200,500); //เสียงครั้งแรก
     delay(250);      //หน่วงเวลา
     tone(8,400,100);
}
  int LED = 3;
  int tale = 1;
  int time = 100;

void loop() {
    for(LED = 3; LED <= 13; LED++){
        if(LED == 8){
            digitalWrite(LED,0);
         continue;
        }
        digitalWrite(LED,1);
        delay(time);
        digitalWrite(LED,0);

        if(digitalRead(2)==0){
            tale = tale * 2; //ไฟวิ่งเพิ่มขึ้น2เท่า
            time = time /2;
            Serial.println("Faster X 2(Current Speed : X" + String(tale) +")");
            tone(8,400,100);
            delay(700);
            
        }
        else{

        }

    }
    for(LED = 13; LED >= 3; LED--)
    {
        if(LED ==8){
            digitalWrite(LED,0);
          continue;
        }
        digitalWrite(LED,1);
        delay(time);
        digitalWrite(LED,0);

        if(digitalRead(2)==0){
             
             tale = tale * 2;
             time = time /2;
             Serial.println("Faster X 2(Current Speed : X" + String(tale) +")");
             tone(8,400,100);
             delay(700);
        }
        else
        {

        }
    }
}