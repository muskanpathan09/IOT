
  int v; 
void setup() 
{   pinMode(7, OUTPUT);   
    pinMode(4, OUTPUT);   
    pinMode(2, OUTPUT);   
    pinMode(10,OUTPUT);   
    pinMode(A5, INPUT);   
    Serial.begin(9600);   
    Serial.println("HOME AUTOMATION using LDR"); 
}  
void loop() 
{      
  v=analogRead(A5);
  
  Serial.print("Intensity of light is:-  ");
  Serial.println(v); 
  delay(1000);
  if (v<350)   
  {      
    digitalWrite(7, HIGH);           
    digitalWrite(4, LOW);     
    digitalWrite(2, LOW);      
    digitalWrite(10, HIGH);        
    Serial.println(" RED Light gets ON");     
  }  
  else if( v>=350 && v<=850)   
  {    
     
    digitalWrite(2, HIGH);       
    digitalWrite(7, LOW);   
    digitalWrite(4, LOW);  
    digitalWrite(10, LOW);
    Serial.println(" GREEN  Light gets ON");
    
  }   
  else if(v>850)    
  {     
    digitalWrite(7, LOW);    
    digitalWrite(2, LOW);     
    digitalWrite(4, HIGH);        
    digitalWrite(10, LOW); 
    Serial.println("BLUE Light gets ON"); 
   
  }
}  
