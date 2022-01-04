#include &lt;OneWire.h&gt;                
#include &lt;DallasTemperature.h&gt;      
#define ONE_WIRE_BUS 2              
#define sensor 2                    
OneWire oneWire(ONE_WIRE_BUS);      
DallasTemperature Suhu(&amp;oneWire);   

float tAir;               

void setup() {
  Serial.begin(9600);     
  Suhu.begin();           
}

void loop() {
  Suhu.requestTemperatures();       
  tAir =  Suhu.getTempCByIndex(0);  
  Serial.print("Water Temp : ");
  Serial.println(tAir);             
  delay(1000);                      
}
