const int ledcount=10;
const int buttonPin=27;
int buttonState=0;
int ledpins[]={
  19,18,5,17,16,4,0,2,15,14 };

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin,INPUT);
  digitalWrite(buttonPin,HIGH);
  // put your setup code here, to run once:
  for(int thisled = 0; thisled < ledcount; thisled++){
    pinMode(ledpins[thisled],OUTPUT); 
    }
 
}

void loop() {
  // put your main code here, to run repeatedly:
    buttonState=digitalRead(buttonPin);
    if(buttonState==HIGH){
     for(int thisled = 0; thisled < ledcount; thisled++){
         digitalWrite(ledpins[thisled],HIGH);
         delay(200);
       }
     for(int thisled = 0; thisled < ledcount; thisled++){
         digitalWrite(ledpins[thisled],LOW);
         delay(200);
       }
  

    }
  }
  
    
 
 

  

