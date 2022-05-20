const int button1 = 4; 
const int button2 = 5; 

int buttonstate1 = 0;
int buttonstate2 = 0;


void setup()

{
   
pinMode(2,OUTPUT); 
pinMode(3,OUTPUT); 
pinMode(8,OUTPUT);
pinMode(9,OUTPUT); 
pinMode(button1,INPUT);
pinMode(button2,INPUT); 

}

void loop()
{
    buttonstate1 = digitalRead(button1);
        buttonstate2 = digitalRead(button2);



  if (buttonstate1 == HIGH){

    digitalWrite(8,HIGH);
        digitalWrite(9,LOW);
    delay(5000);
  }

    else {

          digitalWrite(8,LOW);
              digitalWrite(9,HIGH);
      
    }


  


if (buttonstate2 == HIGH){

    digitalWrite(2,HIGH);
        digitalWrite(3,LOW);
  delay(5000);
}

    else {

          digitalWrite(2,LOW);
              digitalWrite(3,HIGH);
      
    }

    
  }