// defining the LED to blink
const pin_t MY_LED =D7;

//this line allows the code to run before the cloud is connected
SYSTEM_THREAD(ENABLED);
void setup() {
    
    //tells the device OS that the pin is an OUTPUT pin,
    pinMode(MY_LED, OUTPUT);

}

void loop() {
   
   //LETTER "R"
    //Turn on the LED
    digitalWrite(MY_LED, HIGH);
    // Leave it on for one second
    delay(1s);
     //turn it off 
    digitalWrite(MY_LED, LOW);
    delay(1s);
    //Turn on LED
    digitalWrite(MY_LED, HIGH);
    // Leave it on for one second
    delay(2s);
     //turn it off 
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    digitalWrite(MY_LED, HIGH);
    // Leave it on for one second
    delay(1s);
     //turn it off 
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    
    //LETTER O
    
    digitalWrite(MY_LED, HIGH);
    // Leave it on for one second
    delay(2s);
     //turn it off 
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    digitalWrite(MY_LED, HIGH);
    // Leave it on for one second
    delay(2s);
     //turn it off 
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    digitalWrite(MY_LED, HIGH);
    // Leave it on for one second
    delay(2s);
     //turn it off 
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    
    
    //LETTER N
    
    digitalWrite(MY_LED, HIGH);
    // Leave it on for one second
    delay(2s);
     //turn it off 
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    digitalWrite(MY_LED, HIGH);
    // Leave it on for one second
    delay(1s);
     //turn it off 
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    
    //LETTER A
    
    digitalWrite(MY_LED, HIGH);
    // Leave it on for one second
    delay(1s);
     //turn it off 
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    digitalWrite(MY_LED, HIGH);
    // Leave it on for one second
    delay(2s);
     //turn it off 
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    
     //LETTER N
    
    digitalWrite(MY_LED, HIGH);
    // Leave it on for one second
    delay(2s);
     //turn it off 
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    digitalWrite(MY_LED, HIGH);
    // Leave it on for one second
    delay(1s);
     //turn it off 
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    
    
    
    
    
    
 
 


}