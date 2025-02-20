const int red = 13;
const int yellow = 12;
const int green = 11;

void setup() {
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  if(Serial.available()>0){
    String msg = Serial.readString();  

    if(msg == "Open"){
      digitalWrite(green,HIGH);
    }
    else if(msg == "Close"){
      digitalWrite(red,HIGH);
    }else if(msg== "Pointer"){
      digitalWrite(yellow,HIGH);
    }
    else if(msg == "OK"){
      digitalWrite(yellow,LOW);
      digitalWrite(red,LOW);
      digitalWrite(green,LOW);  
    }else{
      digitalWrite(green,LOW);
      digitalWrite(red,LOW);
      digitalWrite(yellow,LOW);
    }
  }

}
