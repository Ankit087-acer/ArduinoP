void setup() {
  Serial.begin(9600);

}

void loop() {
  byte var1=90;
  Serial.println(var1);
  word var2="Ankit";
  Serial.println(var2);
  short var3=789;
  Serial.println(var3);
  int var4=90;
  Serial.println(var4);
  long var5=890;
  Serial.println(var5);
  float var6=90.08;
  Serial.println(var6);
  double var7=90;
  Serial.println(var7);
  unsigned int var8=90.98;
  Serial.println(var8);
  unsigned long var9=99.56;
  Serial.println(var9);
  char var10='6777';
  Serial.println(var10);
  String var11="My name is Ankit Parida";
  Serial.println(var11);
  int var12[100]={'1','2','3'};
  Serial.println(var12[1]);
  
}
