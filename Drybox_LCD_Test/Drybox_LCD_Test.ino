#include <LiquidCrystal.h>
const int rs = 2, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


int select = 7;
int enter = 6;
int selectstate;
int enterstate;
int selectcounter = 0;
int tfenter;


void setup() {
pinMode(select, INPUT_PULLUP);
pinMode(enter, INPUT_PULLUP);
Serial.begin(9600);
lcd.setCursor(0,0);
lcd.print("Powering On!);
}

void loop() {


int selectstate = digitalRead(select);
int enterstate = digitalRead(enter);

if (selectstate == LOW) {
 selectcounter += 1;
 delay(150);
}

Serial.println(selectcounter);


}
