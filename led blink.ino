// We define MY_LED to be the LED that we want to blink. 
//
// In this tutorial, we're using the blue D7 LED (next to D7 on the Photon 
// and Electron, and next to the USB connector on the Argon and Boron).
const pin_t MY_LED = D7;

// measured in milliseconds
const int unit_time = 150;

// The following line is optional, but recommended in most firmware. It 
// allows your code to run before the cloud is connected. In this case, 
// it will begin blinking almost immediately instead of waiting until 
// breathing cyan,
SYSTEM_THREAD(ENABLED);

// The setup() method is called once when the device boots.
void setup() {
	// In order to set a pin, you must tell Device OS that the pin is 
	// an OUTPUT pin. This is often done from setup() since you only need 
	// to do it once.
	pinMode(MY_LED, OUTPUT);
}



void dit(){
    digitalWrite(MY_LED, HIGH);
    delay(unit_time);
    digitalWrite(MY_LED, LOW);
    delay(unit_time);
}

void dah(){
    digitalWrite(MY_LED, HIGH);
    delay(unit_time*3);
    digitalWrite(MY_LED, LOW);
    delay(unit_time);
}

void word_break(){
    delay(unit_time*4);
}


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

