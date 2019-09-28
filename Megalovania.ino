const int BUZZER = 3;
int buttonPin = 12;
bool playingSong = true;

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
  pinMode(BUZZER, OUTPUT);
  }

void loop() 
{
  if(digitalRead(buttonPin) == HIGH){
    megalovania();
    
  }
}

void megalovania(){
  while(playingSong == true){
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,587,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(250);
  tone(3,440,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A4
  delay(375);
  tone(3,415,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab4
  delay(250);
  tone(3,392,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(250);
  tone(3,349,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(250);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,349,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(125);
  tone(3,392,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(125);
  tone(3,261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(62);
  tone(3,261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(62);
  tone(3,261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(62);
  tone(3,261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(62);
  tone(3,587,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(250);
  tone(3,440,375);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A4
  delay(375);
  tone(3,415,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab4
  delay(250);
  tone(3,392,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(250);
  tone(3,349,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(250);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,349,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(125);
  tone(3,392,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(125);
  tone(3,247,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B3
  delay(125);
  tone(3,247,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B3
  delay(125);
  tone(3,587,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(250);
  tone(3,440,375);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A4
  delay(375);
  tone(3,415,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab4
  delay(250);
  tone(3,392,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(250);
  tone(3,349,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(250);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,349,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(125);
  tone(3,392,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(125);
  tone(3,233,62);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(62);
  tone(3,233,62);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(62);
  tone(3,233,62);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(62);
  tone(3,233,62);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(62);
  tone(3,587,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(250);
  tone(3,440,375);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A4
  delay(375);
  tone(3,415,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab4
  delay(250);
  tone(3,392,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(250);
  tone(3,349,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(250);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,349,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(125);
  tone(3,392,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(125);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,587,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(250);
  tone(3,440,375);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A4
  delay(375);
  tone(3,415,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab4
  delay(250);
  tone(3,392,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(250);
  tone(3,349,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(250);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,349,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(125);
  tone(3,392,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(125);
  tone(3,261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(62);
  tone(3,261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(62);
  tone(3,261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(62);
  tone(3,261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(62);
  tone(3,587,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(250);
  tone(3,440,375);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A4
  delay(375);
  tone(3,415,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab4
  delay(250);
  tone(3,392,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(250);
  tone(3,349,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(250);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,349,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(125);
  tone(3,392,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(125);
  tone(3,247,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B3
  delay(125);
  tone(3,247,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B3
  delay(125);
  tone(3,587,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(250);
  tone(3,440,375);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A4
  delay(375);
  tone(3,415,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab4
  delay(250);
  tone(3,392,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(250);
  tone(3,349,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(250);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,349,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(125);
  tone(3,392,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(125);
  tone(3,233,62);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(62);
  tone(3,233,62);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(62);
  tone(3,233,62);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(62);
  tone(3,233,62);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(62);
  tone(3,588,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(250);
  tone(3,440,375);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A4
  delay(375);
  tone(3,415,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab4
  delay(250);
  tone(3,392,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(250);
  tone(3,349,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(250);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,349,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(125);
  tone(3,392,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }
  
  //DOEH DEH DEH AH DAH DOOEH DOO AH (INTENSIFIES)
  
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,1175,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D6
  delay(250);
  tone(3,880,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(325);
  tone(3,831,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(250);
  tone(3,784,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(250);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(125);
  tone(3,523,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C5
  delay(125);
  tone(3,523,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C5
  delay(125);
  tone(3,1175,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D6
  delay(250);
  tone(3,880,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(325);
  tone(3,831,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(250);
  tone(3,784,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(250);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(125);
  tone(3,494,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B4
  delay(125);
  tone(3,494,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B4
  delay(125);
  tone(3,1175,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D6
  delay(250);
  tone(3,880,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(325);
  tone(3,831,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(250);
  tone(3,784,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(250);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(125);
  tone(3,466,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb4
  delay(125);
  tone(3,466,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb4
  delay(125);
  tone(3,1175,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D6
  delay(250);
  tone(3,880,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(325);
  tone(3,831,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(250);
  tone(3,784,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(250);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(125);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,1175,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D6
  delay(250);
  tone(3,880,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(325);
  tone(3,831,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(250);
  tone(3,784,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(250);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(125);
  tone(3,523,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C5
  delay(125);
  tone(3,523,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C5
  delay(125);
  tone(3,1175,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D6
  delay(250);
  tone(3,880,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(325);
  tone(3,831,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(250);
  tone(3,784,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(250);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(125);
  tone(3,494,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B4
  delay(125);
  tone(3,494,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B4
  delay(125);
  tone(3,1175,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D6
  delay(250);
  tone(3,880,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(325);
  tone(3,831,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(250);
  tone(3,784,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(250);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(125);
  tone(3,466,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb4
  delay(125);
  tone(3,466,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb4
  delay(125);
  tone(3,1175,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D6
  delay(250);
  tone(3,880,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(325);
  tone(3,831,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(250);
  tone(3,784,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(250);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }
  
  //DU DU DUDU DU DU DU
  
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,587,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(250);
  tone(3,587,625);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(625);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,784,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(250);
  tone(3,831,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(250);
  tone(3,784,42);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(42);
  tone(3,831,42);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(42);
  tone(3,784,42);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(42);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(375);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,784,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(250);
  tone(3,831,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(250);
  tone(3,880,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(250);
  tone(3,1046,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C6
  delay(250);
  tone(3,880,375);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(375);
  tone(3,1175,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D6
  delay(250);
  tone(3,1175,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D6
  delay(250);
  tone(3,1175,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D6
  delay(125);
  tone(3,880,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(125);
  tone(3,1175,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D6
  delay(125);
  tone(3,1046,625);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C6
  delay(625);
  tone(3,1568,500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G6
  delay(500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }
  
  //DU DU DUDU DU DU DUU (INTENSIFIES)
  
  tone(3,880,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(250);
  tone(3,880,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(125);
  tone(3,880,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(250);
  tone(3,880,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(250);
  tone(3,880,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(250);
  tone(3,784,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(250);
  tone(3,784,625);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(625);
  tone(3,880,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(250);
  tone(3,880,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(125);
  tone(3,880,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(250);
  tone(3,880,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(250);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(250);
  tone(3,880,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(250);
  tone(3,1175,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D6
  delay(250);
  tone(3,880,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(125);
  tone(3,784,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(250);
  tone(3,1175,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D6
  delay(250);
  tone(3,880,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(250);
  tone(3,784,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(250);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,1046,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C6
  delay(250);
  tone(3,784,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(250);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,659,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E5
  delay(250);
  tone(3,466,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb4
  delay(250);
  tone(3,523,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C5
  delay(125);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(250);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,1046,1125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C6
  delay(2125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }
  
  //Epic part
  
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(125);
  tone(3,831,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,831,63);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(63);
  tone(3,784,63);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(63);
  tone(3,698,63);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(63);
  tone(3,587,63);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(63);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,784,1125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(1125);
  tone(3,831,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(250);
  tone(3,880,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(125);
  tone(3,1046,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C6
  delay(250);
  tone(3,880,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(125);
  tone(3,831,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,659,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E5
  delay(125);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,784,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(250);
  tone(3,880,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(250);
  tone(3,1046,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C6
  delay(250);
  tone(3,1109,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Db6
  delay(250);
  tone(3,831,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(250);
  tone(3,831,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,784,1125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(1125);
  tone(3,349,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(250);
  tone(3,392,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(250);
  tone(3,440,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A4
  delay(250);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,659,500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E5
  delay(500);
  tone(3,587,500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(500);
  tone(3,659,500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E5
  delay(500);
  tone(3,698,500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(500);
  tone(3,784,500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(500);
  tone(3,659,500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E5
  delay(500);
  tone(3,880,1000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(1000);
  tone(3,880,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(125);
  tone(3,831,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(125);
  tone(3,740,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Gb5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,659,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E5
  delay(125);
  tone(3,622,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Eb5
  delay(125);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,554,1000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Db5
  delay(1000);
  tone(3,622,1000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Eb5
  delay(2000);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(125);
  tone(3,831,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,831,63);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(63);
  tone(3,784,63);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(63);
  tone(3,698,63);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(63);
  tone(3,587,63);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(63);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,784,1125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(1125);
  tone(3,831,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(250);
  tone(3,880,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(125);
  tone(3,1046,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C6
  delay(250);
  tone(3,880,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(125);
  tone(3,831,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,659,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E5
  delay(125);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,784,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(250);
  tone(3,880,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(250);
  tone(3,1046,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C6
  delay(250);
  tone(3,1109,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Db6
  delay(250);
  tone(3,831,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(250);
  tone(3,831,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,784,1125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(1125);
  tone(3,349,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(250);
  tone(3,392,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(250);
  tone(3,440,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A4
  delay(250);
  tone(3,698,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(250);
  tone(3,659,500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E5
  delay(500);
  tone(3,587,500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(500);
  tone(3,659,500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E5
  delay(500);
  tone(3,698,500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(500);
  tone(3,784,500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(500);
  tone(3,659,500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E5
  delay(500);
  tone(3,880,1000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(1000);
  tone(3,880,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A5
  delay(125);
  tone(3,831,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab5
  delay(125);
  tone(3,784,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G5
  delay(125);
  tone(3,740,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Gb5
  delay(125);
  tone(3,698,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F5
  delay(125);
  tone(3,659,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E5
  delay(125);
  tone(3,622,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Eb5
  delay(125);
  tone(3,587,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(125);
  tone(3,554,1000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Db5
  delay(1000);
  tone(3,622,1000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Eb5
  delay(1000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }
  
  //Opera
  
  tone(3,233,1500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(1500);
  tone(3,349,500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(500);
  tone(3,330,1000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E4
  delay(1000);
  tone(3,294,1000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(1000);
  tone(3,349,4000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(4000);
  tone(3,233,1500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(1500);
  tone(3,349,500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(500);
  tone(3,330,1000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E4
  delay(1000);
  tone(3,294,1000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(1000);
  tone(3,294,1000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(1000);
  tone(3,294,83);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(83);
  tone(3,277,83);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Db4
  delay(83);
  tone(3,261,83);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(83);
  tone(3,247,83);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B3
  delay(83);
  tone(3,233,83);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(83);
  tone(3,220,83);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A3
  delay(83);
  tone(3,208,83);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab3
  delay(83);
  tone(3,196,83);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G3
  delay(83);
  tone(3,185,83);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Gb3
  delay(83);
  tone(3,175,83);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F3
  delay(83);
  tone(3,165,83);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E3
  delay(83);
  tone(3,156,83);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Eb3
  delay(83);
  tone(3,147,2000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(2000);
  tone(3,233,1500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(1500);
  tone(3,349,500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(500);
  tone(3,330,1000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E4
  delay(1000);
  tone(3,294,1000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(1000);
  tone(3,349,2000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(2000);
  tone(3,123,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B2
  delay(125);
  tone(3,196,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G3
  delay(125);
  tone(3,349,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(125);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,392,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(250);
  tone(3,349,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(125);
  tone(3,261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(125);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,220,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A3
  delay(250);
  tone(3,196,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G3
  delay(125);
  tone(3,261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(125);
  tone(3,233,1500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(1500);
  tone(3,349,500);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(500);
  tone(3,330,1000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E4
  delay(1000);
  tone(3,294,1000);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(1000);
  tone(3,147,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(125);
  tone(3,147,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(125);
  tone(3,349,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(250);
  tone(3,330,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E4
  delay(250);
  tone(3,261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,330,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E4
  delay(250);
  tone(3,247,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B3
  delay(250);
  tone(3,196,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G3
  delay(125);
  tone(3,220,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A3
  delay(125);
  tone(3,261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(125);
  tone(3,147,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(125);
  tone(3,147,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(125);
  tone(3,349,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(250);
  tone(3,330,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E4
  delay(250);
  tone(3,261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,330,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//E4
  delay(250);
  tone(3,247,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B3
  delay(250);
  tone(3,196,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G3
  delay(125);
  tone(3,220,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A3
  delay(125);
  tone(3,261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }
  
  //rock part
  
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,116,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb2
  delay(125);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,116,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb2
  delay(125);
  tone(3,116,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb2
  delay(125);
  tone(3,116,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb2
  delay(125);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,130,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C3
  delay(125);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,130,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C3
  delay(125);
  tone(3,130,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C3
  delay(125);
  tone(3,130,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C3
  delay(125);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,147,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(125);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,277,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Db4
  delay(250);
  tone(3,277,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Db4
  delay(250);
  tone(3,139,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Db3
  delay(125);
  tone(3,139,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Db3
  delay(125);
  tone(3,139,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Db3
  delay(125);
  tone(3,277,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Db4
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,130,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C3
  delay(125);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,247,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B3
  delay(250);
  tone(3,247,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B3
  delay(250);
  tone(3,123,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B2
  delay(125);
  tone(3,123,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B2
  delay(125);
  tone(3,123,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B2
  delay(125);
  tone(3,247,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B3
  delay(250);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,116,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb2
  delay(125);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,116,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb2
  delay(125);
  tone(3,116,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb2
  delay(125);
  tone(3,116,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb2
  delay(125);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,130,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C3
  delay(125);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,130,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C3
  delay(125);
  tone(3,130,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C3
  delay(125);
  tone(3,130,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C3
  delay(125);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,147,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(125);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,147,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(125);
  tone(3,147,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(125);
  tone(3,147,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(125);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,147,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(125);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,147,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(125);
  tone(3,147,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(125);
  tone(3,147,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(125);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,116,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb2
  delay(125);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,116,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb2
  delay(125);
  tone(3,116,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb2
  delay(125);
  tone(3,116,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb2
  delay(125);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,130,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C3
  delay(125);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,130,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C3
  delay(125);
  tone(3,130,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C3
  delay(125);
  tone(3,130,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C3
  delay(125);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,147,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(125);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,277,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Db4
  delay(250);
  tone(3,277,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Db4
  delay(250);
  tone(3,139,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Db3
  delay(125);
  tone(3,139,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Db3
  delay(125);
  tone(3,139,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Db3
  delay(125);
  tone(3,277,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Db4
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,130,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C3
  delay(125);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,247,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B3
  delay(250);
  tone(3,247,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B3
  delay(250);
  tone(3,123,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B2
  delay(125);
  tone(3,123,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B2
  delay(125);
  tone(3,123,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B2
  delay(125);
  tone(3,247,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B3
  delay(250);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,116,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb2
  delay(125);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,116,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb2
  delay(125);
  tone(3,116,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb2
  delay(125);
  tone(3,116,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb2
  delay(125);
  tone(3,233,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,130,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C3
  delay(125);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(250);
  tone(3,130,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C3
  delay(125);
  tone(3,130,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C3
  delay(125);
  tone(3,130,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C3
  delay(125);
  tone(3,261,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)
  delay(250);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,147,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(125);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,220,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A3
  delay(125);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,175,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F3
  delay(250);
  tone(3,147,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(125);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,196,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G3
  delay(125);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,147,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(125);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,220,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A3
  delay(125);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,294,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(250);
  tone(3,175,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F3
  delay(250);
  tone(3,147,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D3
  delay(125);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,196,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G3
  delay(125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }
  
  //99999999999999999999999999999999999999999999999999999999999999
  
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,587,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(250);
  tone(3,440,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A4
  delay(375);
  tone(3,415,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab4
  delay(250);
  tone(3,392,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(250);
  tone(3,349,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(250);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,349,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(125);
  tone(3,392,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(125);
  tone(3,261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(62);
  tone(3,261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(62);
  tone(3,261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(62);
  tone(3,261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(62);
  tone(3,587,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(250);
  tone(3,440,375);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A4
  delay(375);
  tone(3,415,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab4
  delay(250);
  tone(3,392,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(250);
  tone(3,349,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(250);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,349,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(125);
  tone(3,392,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(125);
  tone(3,247,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B3
  delay(125);
  tone(3,247,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//B3
  delay(125);
  tone(3,587,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(250);
  tone(3,440,375);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A4
  delay(375);
  tone(3,415,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab4
  delay(250);
  tone(3,392,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(250);
  tone(3,349,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(250);
  tone(3,294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3,349,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(125);
  tone(3,392,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(125);
  tone(3, 233,62);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(62);
  tone(3, 233,62);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(62);
  tone(3, 233,62);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(62);
  tone(3, 233,62);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Bb3
  delay(62);
  tone(3, 587,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(250);
  tone(3, 440,375);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A4
  delay(375);
  tone(3, 415,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab4
  delay(250);
  tone(3, 392,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(250);
  tone(3, 349,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(250);
  tone(3, 294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3, 349,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(125);
  tone(3, 392,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(125);
  tone(3, 294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3, 294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3, 587,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(250);
  tone(3, 440,375);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A4
  delay(375);
  tone(3, 415,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab4
  delay(250);
  tone(3, 392,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(250);
  tone(3, 349,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(250);
  tone(3, 294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3, 349,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(125);
  tone(3, 392,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(125);
  tone(3, 261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(62);
  tone(3, 261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(62);
  tone(3, 261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(62);
  tone(3, 261,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//C4(middle)     
  delay(62);
  tone(3, 587,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D5
  delay(250);
  tone(3, 440,375);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//A4
  delay(375);
  tone(3, 415,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//Ab4
  delay(250);
  tone(3, 392,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4
  delay(250);
  tone(3, 349,250);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(250);
  tone(3, 294,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//D4
  delay(125);
  tone(3, 349,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//F4
  delay(125);
  tone(3, 392,125);
  if(digitalRead(buttonPin) == LOW){
    break;
  }//G4 
}
}
