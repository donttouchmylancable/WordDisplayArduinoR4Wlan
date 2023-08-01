#include "Arduino_LED_Matrix.h"

#include "alphabet.h"
ArduinoLEDMatrix matrix;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  matrix.begin();
}

char text[]={"HELLO THERE"};

void loop() {
  //char input[] = Serial.read();
  //Serial.write(input);
  
  for (int i=0;i<sizeof(text)/sizeof(char);i++){
      //Serial.write(text[i]);//for debugging
      
      switch (text[i]){
        case 'A':
        matrix.loadFrame(alphabet[0]);
        break;
        case 'B':
        matrix.loadFrame(alphabet[1]);
        break;
        case 'C':
        matrix.loadFrame(alphabet[2]);
        break;
        case 'D':
        matrix.loadFrame(alphabet[3]);
        break;
        case 'E':
        matrix.loadFrame(alphabet[4]);
        break;
        case 'F':
        matrix.loadFrame(alphabet[5]);
        break;
        case 'G':
        matrix.loadFrame(alphabet[6]);
        break;
        case 'H':
        matrix.loadFrame(alphabet[7]);
        break;
        case 'I':
        matrix.loadFrame(alphabet[8]);
        break;
        case 'J':
        matrix.loadFrame(alphabet[9]);
        break;
        case 'K':
        matrix.loadFrame(alphabet[10]);
        break;
        case 'L':
        matrix.loadFrame(alphabet[11]);
        break;
        case 'M':
        matrix.loadFrame(alphabet[12]);
        break;
        case 'N':
        matrix.loadFrame(alphabet[13]);
        break;
        case 'O':
        matrix.loadFrame(alphabet[14]);
        break;
        case 'P':
        matrix.loadFrame(alphabet[15]);
        break;
        case 'Q':
        matrix.loadFrame(alphabet[16]);
        break;
        case 'R':
        matrix.loadFrame(alphabet[17]);
        break;
        case 'S':
        matrix.loadFrame(alphabet[18]);
        break;
        case 'T':
        matrix.loadFrame(alphabet[19]);
        break;
        case 'U':
        matrix.loadFrame(alphabet[20]);
        break;
        case 'V':
        matrix.loadFrame(alphabet[21]);
        break;
        case 'W':
        matrix.loadFrame(alphabet[22]);
        break;
        case 'X':
        matrix.loadFrame(alphabet[23]);
        break;
        case 'Y':
        matrix.loadFrame(alphabet[24]);
        break;
        case 'Z':
        matrix.loadFrame(alphabet[25]);
        break;
        case ' ':
        delay(700);
        break;
        

      }
      delay(400);
  }
  // put your main code here, to run repeatedly:

}