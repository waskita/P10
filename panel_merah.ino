/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

#define EN 2
#define SELECT_A 3
#define SELECT_B 4
#define SHIFT_CLK 5
#define STORE_CLK 6
#define DATA 7

#define DELAY_LINE 1

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
  pinMode(EN, OUTPUT);     
  pinMode(SELECT_A, OUTPUT);     
  pinMode(SELECT_B, OUTPUT);     
  pinMode(SHIFT_CLK, OUTPUT);     
  pinMode(STORE_CLK, OUTPUT);     
  pinMode(DATA, OUTPUT);     
  
}

// the loop routine runs over and over again forever:
void loop() {
  int i;
for(i=0;i<128;i++){
    digitalWrite(DATA,HIGH) ; // masukkan 1 bit saja    
  if(i==127-11)
    digitalWrite(DATA,LOW) ; // masukkan 1 bit saja
  
    digitalWrite(SHIFT_CLK,LOW) ;
    digitalWrite(SHIFT_CLK,HIGH) ;
}
//    digitalWrite(EN,LOW) ;  // aktifkan outputnya
    digitalWrite(SELECT_A,HIGH) ;
    digitalWrite(SELECT_B,LOW) ;
    digitalWrite(STORE_CLK,LOW) ;  
    digitalWrite(STORE_CLK,HIGH) ;  
//    digitalWrite(EN,HIGH) ;  // aktifkan outputnya
    delay(DELAY_LINE);  
        
for(i=0;i<128;i++){
  
    digitalWrite(DATA,HIGH) ; // masukkan 1 bit saja
    
  if(i==127-63)
    digitalWrite(DATA,LOW) ; // masukkan 1 bit saja
  
    digitalWrite(SHIFT_CLK,LOW) ;
    digitalWrite(SHIFT_CLK,HIGH) ;
}

// matikan semua
for(i=0;i<128;i++){
    digitalWrite(DATA,HIGH) ; // masukkan 1 bit saja
        digitalWrite(SHIFT_CLK,LOW) ;
    digitalWrite(SHIFT_CLK,HIGH) ;
}


//    digitalWrite(EN,LOW) ;  // aktifkan outputnya
    digitalWrite(SELECT_A,LOW) ;
    digitalWrite(SELECT_B,LOW) ;
    digitalWrite(STORE_CLK,LOW) ;  
    digitalWrite(STORE_CLK,HIGH) ;  
 //   digitalWrite(EN,HIGH) ;  // aktifkan outputnya
    delay(DELAY_LINE);  

  
}
