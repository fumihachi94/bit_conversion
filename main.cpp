#include <iostream>

uint8_t convHex2Dec_u2(uint8_t in)
{
  uint8_t a = in>>4;
  uint8_t b = in&0x0F;
  uint8_t c = a<<3;
  uint8_t d = a<<1;
  //printf("%#x, %#x, %#x, %#x\n", a,b,c,d);
  uint8_t out = c +d + b;

  return out;
}

int main() 
{
  std::cout << "16進数の下2桁を10進数表現する" << std::endl;
  
  uint8_t in  = 0x00;
  uint8_t out = 0x00;

  printf("16進数-->10進数-->下2桁10進数\n");
  
  for(auto i=0; i<=255; i++){
    if(in==0xFF)
      out = in;
    else
      out = convHex2Dec_u2(in);
    printf("%#x --> %d --> %d\n", in, in, out);
    in++;
  }

  return 0;
}
