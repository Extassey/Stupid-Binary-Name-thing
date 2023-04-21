/* the lines below represent the 8 bits for each letter of PERRIN

P=01010000 

E=01000101 

R=01010010 

R=01010010 

I=01001001 

N=01001110   */


int JBinary[] = {2, 3};


// LED Pin Variables


int ledPins[] = {2,3,4,5,6,7,8,9}; // An array to hold the pin each LED is



 int P[] = {LOW,HIGH,LOW,HIGH,LOW,HIGH,HIGH,HIGH};

 
// connected to i.e. LED #0 is connected to pin 2, LED #1, 3 and so on
// to access, ledPins[0] would equal 2 and ledPins[7] would equal 9

/*
 * setup() - this function runs once when you turn your Arduino on
 * We set the control pins to outputs
 */
void setup()
{
  // Set each pin connected to an LED to output mode (pulling high (on) or low (off))
  for(int i = 0; i < 8; i++) {    // this is a loop and will repeat eight times
    pinMode(ledPins[i],OUTPUT); // we use this to set each LED pin to output
  }                               // the code this replaces is below

  /* (commented code will not run)
   * these are the lines replaced by the for loop above. They do exactly the
   * same thing as the one above just needing less typing
  pinMode(ledPins[0],OUTPUT);
  pinMode(ledPins[1],OUTPUT);
  pinMode(ledPins[2],OUTPUT);
  pinMode(ledPins[3],OUTPUT);
  pinMode(ledPins[4],OUTPUT);
  pinMode(ledPins[5],OUTPUT);
  pinMode(ledPins[6],OUTPUT);
  pinMode(ledPins[7],OUTPUT);
  (end of commented code)*/
}

/*
 * loop() - this function will start after setup finishes, then repeat
 * this calls a function called oneAfterAnother(). if you would like a different
 * behaviour uncomment (delete the two slashes) on one of the other lines
 */
void loop()                 // run over and over again
{
  oneAfterAnotherLoop();  // does the same as oneAfterAnotherNoLoop but with

}
void PBinary()
{
  int delayTime = 100;  // the time (in milliseconds) to pause between LEDs
                        // make smaller for quicker switching and larger for slower

  // Turn Each LED on one after another
  for(int i = 0; i <= 7; i++){
    digitalWrite(ledPins[i], HIGH); // Turns on LED #i; each time this runs, i
                 // gets one added to it so this will repeat
                 delay(delayTime);
                 
  }                                 // 8 times. the first time i will = 0, the
                                    // final time i will equal 7;
delay(delayTime);
                                    
  // Turn Each LED off one after another
  for(int i = 7; i >= 0; i--) {     // same as above but rather than starting at 0 and
                                    // counting up, we start at seven and count down
    digitalWrite(ledPins[i], LOW);  // Turns off LED #i; each time this runs, i
    delay(delayTime);               // gets one subtracted from it so this will
  }                                 // repeat 8 times. the first time i will = 7,
                                    // the final time it will equal 0
}
     


/*
 * oneAfterAnotherNoLoop() - Light one LED then delay for delayTime then light
 * the next LED until all LEDs are on, then turn them off one after another
 *
 * this does it without using a loop, which makes for a lot of typing.
 * oneOnAtATimeLoop() does exactly the same thing with less typing
 */

void oneAfterAnotherLoop()
{
  int delayTime = 0;  // the time (in milliseconds) to pause between LEDs
                        // make smaller for quicker switching and larger for slower

  // Turn Each LED on one after another
  for(int i = 0; i <= 7; i++){
    digitalWrite(ledPins[i], HIGH); // Turns on LED #i; each time this runs, i
                 // gets one added to it so this will repeat
                 delay(delayTime);
                 digitalWrite(ledPins[0], LOW);
                 digitalWrite(ledPins[2], LOW);
               
                 digitalWrite(ledPins[4], LOW);
                 digitalWrite(ledPins[5], LOW);
                 digitalWrite(ledPins[6], LOW);
                 digitalWrite(ledPins[7], LOW);
  }                                 // 8 times. the first time i will = 0, the
                                    // final time i will equal 7;
delay(delayTime);
                     delay(1000);               
  // Turn Each LED off one after another
  for(int i = 7; i >= 0; i--) {     // same as above but rather than starting at 0 and
                                    // counting up, we start at seven and count down
    digitalWrite(ledPins[i], LOW);  // Turns off LED #i; each time this runs, i
    delay(delayTime);               // gets one subtracted from it so this will
  }                                 // repeat 8 times. the first time i will = 7,
                                    // the final time it will equal 0
delay(500);
                                     for(int i = 0; i <= 7; i++){
    digitalWrite(ledPins[i], HIGH); // Turns on LED #i; each time this runs, i
                 // gets one added to it so this will repeat
                 delay(delayTime);
                 digitalWrite(ledPins[0], LOW);
                 digitalWrite(ledPins[2], LOW);
               digitalWrite(ledPins[3], LOW);
                 digitalWrite(ledPins[4], LOW);
                
                 digitalWrite(ledPins[6], LOW);
                
}

{

 delay(1000);  

// Turn Each LED off one after another
  for(int i = 7; i >= 0; i--) {     // same as above but rather than starting at 0 and
                                    // counting up, we start at seven and count down
    digitalWrite(ledPins[i], LOW);  // Turns off LED #i; each time this runs, i
    delay(delayTime);               // gets one subtracted from it so this will
  }            
delay(500);
// Turn Each LED on one after another
  for(int i = 0; i <= 7; i++){
    digitalWrite(ledPins[i], HIGH); // R=01010010 
                 // R
                 delay(delayTime);
                 digitalWrite(ledPins[0], LOW);
                 digitalWrite(ledPins[2], LOW);
               
                 digitalWrite(ledPins[4], LOW);
                 digitalWrite(ledPins[5], LOW);
                 
                 digitalWrite(ledPins[7], LOW);
  }                                 // 8 times. the first time i will = 0, the
                                    // final time i will equal 7;
delay(delayTime);
                     delay(1000);               
  // Turn Each LED off one after another
  for(int i = 7; i >= 0; i--) {     // same as above but rather than starting at 0 and
                                    // counting up, we start at seven and count down
    digitalWrite(ledPins[i], LOW);  // Turns off LED #i; each time this runs, i
    delay(delayTime);               // gets one subtracted from it so this will
  }                                 // repeat 8 times. the first time i will = 7,
                                    // the final time it will equal 0
delay(500);
                                     for(int i = 0; i <= 7; i++){
    digitalWrite(ledPins[i], HIGH); // R=01010010 
                 // Letter R on phase
                 delay(delayTime);
                 digitalWrite(ledPins[0], LOW);
                 digitalWrite(ledPins[2], LOW);
                 digitalWrite(ledPins[4], LOW);
                digitalWrite(ledPins[5], LOW);                 
                 digitalWrite(ledPins[7], LOW);
}

{

 delay(1000);  

// Turn Each LED off one after another
  for(int i = 7; i >= 0; i--) {     // same as above but rather than starting at 0 and
                                    // counting up, we start at seven and count down
    digitalWrite(ledPins[i], LOW);  // Turns off LED #i; each time this runs, i
    delay(delayTime);               // gets one subtracted from it so this will
  }      
delay(500);
// Turn Each LED on one after another
  for(int i = 0; i <= 7; i++){
    digitalWrite(ledPins[i], HIGH);    // I=01001001 
                                        // I on phase
                 delay(delayTime);
                 digitalWrite(ledPins[0], LOW);
                 digitalWrite(ledPins[2], LOW);
                 digitalWrite(ledPins[3], LOW);
               
                 digitalWrite(ledPins[5], LOW);
                 digitalWrite(ledPins[6], LOW);
              
  }                                 // 8 times. the first time i will = 0, the
                                    // final time i will equal 7;
delay(delayTime);
                     delay(1000);               
  // Turn Each LED off one after another
  for(int i = 7; i >= 0; i--) {     // same as above but rather than starting at 0 and
                                    // counting up, we start at seven and count down
    digitalWrite(ledPins[i], LOW);  // Turns off LED #i; each time this runs, i
    delay(delayTime);               // gets one subtracted from it so this will
  }                                 // repeat 8 times. the first time i will = 7,
                                    // the final time it will equal 0
delay(500);
                                     for(int i = 0; i <= 7; i++){
    digitalWrite(ledPins[i], HIGH); // N=01001110  
                 // gets one added to it so this will repeat
                 delay(delayTime);
                 digitalWrite(ledPins[0], LOW);
                 digitalWrite(ledPins[2], LOW);
               digitalWrite(ledPins[3], LOW);
                
                
                 digitalWrite(ledPins[7], LOW);
                
}

{

 delay(1000);  

// Turn Each LED off one after another
  for(int i = 7; i >= 0; i--) {     // same as above but rather than starting at 0 and
                                    // counting up, we start at seven and count down
    digitalWrite(ledPins[i], LOW);  // Turns off LED #i; each time this runs, i
    delay(delayTime);               // gets one subtracted from it so this will
  }      
  
  delay(3000);
  }}}}
