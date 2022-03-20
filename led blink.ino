// We define MY_LED to be the LED that we want to blink. 
const pin_t MY_LED = D7;

// measured in milliseconds
const int unit_time = 150;

SYSTEM_THREAD(ENABLED);

// The setup() method is called once when the device boots.
void setup() {
	pinMode(MY_LED, OUTPUT);
}

// Makes the LED blink for a short time
void dit(){
    digitalWrite(MY_LED, HIGH);
    delay(unit_time);
    digitalWrite(MY_LED, LOW);
    delay(unit_time);
}

// Makes the LEd blink for a longer time
void dah(){
    digitalWrite(MY_LED, HIGH);
    delay(unit_time*3);
    digitalWrite(MY_LED, LOW);
    delay(unit_time);
}

// The length of time to wait between words in morse code
void word_break(){
    delay(unit_time*4);
}

// Thes sequencse of dits and dahs for all the letters in  my name
void B(){
    dah();
    dit();
    dit();
    dit();
    delay(unit_time*2);
}
void E(){
    dit();
    delay(unit_time*2);
}
void O(){
    dah();
    dah();
    dah();
    delay(unit_time*2);
}
void R(){
    dit();
    dah();
    dit();
    delay(unit_time*2);
}
void T(){
    dah();
    delay(unit_time*2);
}

// The loop() method is called frequently.
void loop() {
	R();
	O();
	B();
	E();
	R();
	T();
	word_break();
}

