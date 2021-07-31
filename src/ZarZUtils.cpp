#include <Arduino.h>
#include <ZarZUtils.h>
#include <string.h>
#include <stdlib.h>


String ZarZUtils::Input(){
  char a=Serial.read();
  String aa="";
  while(a!=-1 ){
    
    aa= aa + a;

    a = Serial.read();
    }
  return(aa);
}
