void LastNameP()
{
  int delayTime = 0;  // the time (in milliseconds) to pause between LEDs
                        // make smaller for quicker switching and larger for slower

  // Turn Each LED on one after another
  for(int i = 0; i <= 7; i++){
    digitalWrite(ledPins[i], P[i]);                  // Beggining of P sequence
                                                    
                 delay(delayTime);                    // Delay between sequence, does nothing unless delaytime is > 0
              
  }                                              
                                                 
delay(delayTime);
                     delay(1000);               
}

void Pause()
{
   int delayTime = 0;  // the time (in milliseconds) to pause between LEDs
                        // make smaller for quicker switching and larger for slower
                        
  for(int i = 7; i >= 0; i--) {     // same as above but rather than starting at 0 and
                                    // counting up, we start at seven and count down
    digitalWrite(ledPins[i], LOW);  // Turns off LED #i; each time this runs, i
    delay(delayTime);               // gets one subtracted from it so this will
  }                                 // repeat 8 times. the first time i will = 7,
                                    // the final time it will equal 0, I dont use an array here on the setting because there isnt really a point since all lights need to be off.
delay(500);
}
void LastNameE()
{
   int delayTime = 0;  // the time (in milliseconds) to pause between LEDs
                        // make smaller for quicker switching and larger for slower
                        
                                     for(int i = 0; i <= 7; i++){
    digitalWrite(ledPins[i], E[i]); // BEGINNING OF E SEQUENCE
                 // gets one added to it so this will repeat
                 delay(delayTime); // SAME AS ABOVE
               
                
}



 delay(1000);  
}
void LastNameR()
{

 int delayTime = 0;  // the time (in milliseconds) to pause between LEDs
                        // make smaller for quicker switching and larger for slower

 
  for(int i = 0; i <= 7; i++){
    digitalWrite(ledPins[i], R[i]); // R=01010010 
                 // R
                 delay(delayTime);
  }
delay(delayTime);
                     delay(1000);  
  }             
  
 void LastNameI()
 {

 int delayTime = 0;  // the time (in milliseconds) to pause between LEDs
                        // make smaller for quicker switching and larger for slower

          
  for(int i = 0; i <= 7; i++){
    digitalWrite(ledPins[i], I[i]);    // I=01001001 
                                        // I on phase
                 delay(delayTime);
                 
              
  }                                 // 8 times. the first time i will = 0, the
                                    // final time i will equal 7;
delay(delayTime);
                     delay(1000);  
 }             

void LastNameN()
{

 int delayTime = 0;  // the time (in milliseconds) to pause between LEDs
                        // make smaller for quicker switching and larger for slower

 
                                     for(int i = 0; i <= 7; i++){
    digitalWrite(ledPins[i], N[i]); // N=01001110  
                 // gets one added to it so this will repeat
                 delay(delayTime);
                 
}



 delay(1000);  
}
