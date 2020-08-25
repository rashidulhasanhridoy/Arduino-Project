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
digitalWrite(en, HIGH);
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
}