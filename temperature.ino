#include <OneWire.h>
#include <DallasTemperature.h>

OneWire oneWire(7);
DallasTemperature ds(&oneWire);
int a = 0;
DeviceAddress sensor1 = {0x28, 0xAA, 0xDB, 0x3D, 0x42, 0x14, 0x1, 0x81};
DeviceAddress sensor2 = {0x28, 0xAA, 0xD5, 0xEA, 0x41, 0x14, 0x1, 0x40};
DeviceAddress sensor3 = {0x28, 0xAA, 0xF3, 0x2D, 0x42, 0x14, 0x1, 0x7F};
DeviceAddress sensor4 = {0x28, 0xAA, 0x24, 0x1, 0x42, 0x14, 0x1, 0x12};
DeviceAddress sensor5 = {0x28, 0xAA, 0x3E, 0x3D, 0x42, 0x14, 0x1, 0x89};
DeviceAddress sensor6 = {0x28, 0xAA, 0x89, 0xF, 0x42, 0x14, 0x1, 0xD8};

void setup() {
    Serial.begin(9600);
    ds.begin();
}

void loop() {
    ds.requestTemperatures(); // считываем температуру с датчиков
    
    Serial.print("       S1 ");
    Serial.print(ds.getTempC(sensor1)); // отправляем температуру
    
    Serial.print("       S2 ");
    Serial.print(ds.getTempC(sensor2)); // отправляем температуру
 
    Serial.print("       S3 ");
    Serial.print(ds.getTempC(sensor3)); // отправляем температуру
    
    Serial.print("       S4 ");
    Serial.print(ds.getTempC(sensor4)); // отправляем температуру

    Serial.print("       S5 ");
    Serial.print(ds.getTempC(sensor5)); // отправляем температуру
    
   Serial.print("       S6 ");
   Serial.print(ds.getTempC(sensor6)); // отправляем температур
        
    Serial.println("");
    delay(500);
}
