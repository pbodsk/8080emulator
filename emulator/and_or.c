#include <stdio.h>
#include <stdlib.h>

void printb(char *name, uint8_t val) {
  /*
      val = 0000 0001
  */
  uint8_t eighth = val & 0x80 ? 1 : 0;
  uint8_t seventh = val & 0x40 ? 1 : 0;
  uint8_t sixth = val & 0x20 ? 1 : 0;
  uint8_t fifth = val & 0x10 ? 1 : 0;

  uint8_t fourth = val & 0x08 ? 1 : 0;
  uint8_t third = val & 0x04 ? 1 : 0;
  uint8_t second = val & 0x02 ? 1 : 0;
  uint8_t first = val & 0x01 ? 1 : 0;

  printf("%s\t\t%i%i%i%i %i%i%i%i\n", name, eighth, seventh, sixth, fifth, fourth, third, second, first);
}

int main(int argc, char const *argv[]) {
  /*
     0000 0001

     0000 0111
  */
  uint8_t val = 0x01;
  uint8_t flag = 0x06;
  uint8_t andVal = val & flag;
  uint8_t orVal = val | flag;
  printb("val", val);
  printb("flag", flag);
  printf("-------------------------\n");
  printb("andVal", andVal);

  printf("\n");

  printb("val", val);
  printb("flag", flag);
  printf("-------------------------\n");
  printb("orVal", orVal);

  printf("\n");

  uint8_t rsVal = val >> 1;
  printb("val", val);
  printf("-------------------------\n");
  printb("rsVal", rsVal);


  printf("\n");

  uint8_t lsVal = val << 1;
  printb("val", val);
  printf("-------------------------\n");
  printb("lsVal", lsVal);

  return 0;
}
