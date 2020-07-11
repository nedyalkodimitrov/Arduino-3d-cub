int i=0, x=0, y=0, n=0;

void off(){
  for ( n = 0; n < 3; n++)
  { 
   digitalWrite(n, LOW); /// The first three?
  };
  for ( n = 3; n < 12; n++)
  { 
   digitalWrite(n, HIGH); /// Enable the rest?
  };
  n = 0; 
}

void led(int numero,bool estado){
  int x = numero/25;
  int y = 5 + numero % 25;
  if (estado == 1){
  	digitalWrite(x,HIGH);
  	digitalWrite(y,LOW);
  	delay(10);
  	off();
  }
  else{
    off();
  }
}


void setup() {
  for ( n = 0; n < 12; n++)
  {
    pinMode(n, OUTPUT); /// Sets the mode... Bcs, LED :D
  };
}

void loop() {
  for(int i=0;i<3;i++)
  {
    digitalWrite(i,HIGH);
    digitalWrite(i-1,LOW);
    digitalWrite(i-2,LOW);
	for( n = 3; n < 12; n++)
	{ 
      digitalWrite(n, LOW);  
    } 
  delay(600); 
  }
  
  /// Turns on the first, and turns off the rest, then the second etc and turns off the rest and etc...
  
  digitalWrite(2,LOW); /// What :D
  delay(600);
    for ( n = 3; n < 12; n++)
    { 
      digitalWrite(n, HIGH);  /// Turns on the lights from 3 to 12 on
    } 
    for ( n = 0; n < 3; n++)
    {
      digitalWrite(n, HIGH);  /// from 0 to 3 on
    }
    for ( n = 3; n < 6; n++)
	{
      digitalWrite(n, LOW);  //// 3 to 6 off
    }
    delay(600); /// wait, I think for the estetic :wink:
    for ( n = 3; n < 6; n++)
	{
      digitalWrite(n, HIGH);  /// 3 to 6 on
    }
    for ( n = 6; n < 9; n++)
	{
      digitalWrite(n, LOW);  /// 6 to 9 off
    }
    delay(600); /// wait again, E S T E T I C S
    for ( n = 6; n < 9; n++)
	{
      digitalWrite(n, HIGH);  /// 6 to 9 on
    }
    for ( n = 9; n < 12; n++)
	{
      digitalWrite(n, LOW);  /// 9 to 12 off
    }
    delay(600); /// wait again
    for ( n = 9; n < 12; n++)
	{
      digitalWrite(n, HIGH);  /// 9 to 12 on
    }  
    for ( n = 0; n < 3; n++)
	{
      digitalWrite(n, LOW);  /// 0 to 3 off
    }
    delay(600);// wait 
	
	
  /// Executes 3 diffirent paterns, 30 times /could be optimised.../ 
  for(int t = 0; t <30; t++)
  {
   for ( n = 0; n < 3; n++)
   {
    switch(n)
	{
    case 0:      
      digitalWrite(1,LOW);
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
	  digitalWrite(n, HIGH);
      delay(10);
      break;
    case 1:
      digitalWrite(0,LOW);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(n, HIGH);
      delay(10);
      break;
    case 2:
      digitalWrite(1,LOW);
      digitalWrite(0,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(n, HIGH);
      delay(10);
      break; 
    }
   } 
  }
  /// Executes the same three patterns, but in diffirent order :D 20 times /could be optimised.../ 
  for(int t = 0; t <20; t++)
  {
   for ( n = 0; n < 3; n++)
   {
    switch(n)
	{
    case 1:      
      digitalWrite(1,LOW);
      digitalWrite(0,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
	  digitalWrite(n, HIGH);
      delay(10);
      break;
    case 0:
      digitalWrite(1,LOW);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(n, HIGH);
      delay(10);
      break;
    case 2:
      digitalWrite(1,LOW);
      digitalWrite(0,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(n, HIGH);
      delay(10);
      break; 
    } 
   }  
  } 
}