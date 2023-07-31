int red = 13;
int yellow = 12;
int green = 11;
int button = 5;
int Reading = 0; // variable for reading the pushbutton status
int c = 0;
void setup()
{
pinMode(10, OUTPUT);
pinMode(button, INPUT);
}
void loop()
{
Reading = digitalRead(button);
  if (digitalRead(button)==1){
  c++;
    if(c==1){
    digitalWrite(red,1);}
  else if (c==2){
    digitalWrite(yellow,1);}
  else if (c==3){
    digitalWrite(green,1);}
  else{
    for(int i = 11 ; i<=13 ; i++){
      digitalWrite(i,0);}
    c=0;
  }
    delay(250);
  }
}