int en = 11;
int in1 = 10;
int in2 = 9;

void setup()
{
pinMode(en, OUTPUT);
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
}

void loop()
{
analogWrite(en, 100);
//to change speed of dc motor just change the value from 0 to 255  
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
}