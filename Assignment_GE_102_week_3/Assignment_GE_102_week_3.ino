/* the lines below represent the 8 bits for each letter of PERRIN

P=01010000 

E=01000101 

R=01010010 

R=01010010 

I=01001001 

N=01001110   */





// LED Pin Variables


int ledPins[] = {2,3,4,5,6,7,8,9}; // An array to hold the pin each LED is

//Arrays for digitalWrite settings
 
 byte P[] = {LOW,HIGH,LOW,HIGH,LOW,LOW,LOW,LOW};

  int E[] = {LOW,HIGH,LOW,LOW,LOW,HIGH,LOW,HIGH};

   int R[] = {LOW,HIGH,LOW,HIGH,LOW,LOW,HIGH,LOW};

    int I[] = {LOW,HIGH,LOW,LOW,HIGH,LOW,LOW,HIGH};

     int N[] = {LOW,HIGH,LOW,LOW,HIGH,HIGH,HIGH,LOW};

 
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
  LastNameP();  // does the same as oneAfterAnotherNoLoop but with
  Pause();  
  LastNameE();
  Pause();
  LastNameR();
  Pause();
  LastNameR();
  Pause();
  LastNameI();
  Pause();
  LastNameN();
  Pause();
  Pause();
  Pause();
  Pause();
  Pause();
  Pause();

}
