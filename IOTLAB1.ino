// C++ code
//
void setup()
{
  int led[]={2,3,4,5,6};
  for(int i=0;i<=5;i++){
pinMode(led[i],OUTPUT);
}
}
void loop()
{
   int led[]={2,3,4,5,6};
  for(int i=0;i<5;i++){
    digitalWrite(led[i],HIGH);
    delay(1000);
    digitalWrite(led[i],LOW);
    delay(1000);
  }
  for(int i=5;i>=1;i--){
    digitalWrite(led[i],HIGH);
    delay(1000);
    digitalWrite(led[i],LOW);
    delay(1000);
}
}
