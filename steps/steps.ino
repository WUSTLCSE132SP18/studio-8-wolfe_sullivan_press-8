

#include <Wire.h> // Must include Wire library for I2C
#include <SparkFun_MMA8452Q.h> // Includes the SFE_MMA8452Q library
MMA8452Q accel;
void setup() {
  Serial.begin(9600);
 
  accel.init(SCALE_8G, ODR_6);
  
}

void loop() {

  if (accel.available()) {
    accel.read();

    printCalculatedAccels();
  }

}

void printCalculatedAccels()
{ 
  Serial.print(accel.cx, 3);
  Serial.print(",");
  Serial.print(accel.cy, 3);
  Serial.print(",");
  Serial.println(accel.cz, 3);
}
