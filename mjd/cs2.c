
#include <stdio.h>

char data[] = {
  0x69, 0x6e, 0x74, 0x20, 0x6d, 0x61, 0x69, 0x6e,
  0x28, 0x76, 0x6f, 0x69, 0x64, 0x29, 0x20, 0x0a,
  0x7b, 0x0a, 0x20, 0x20, 0x75, 0x6e, 0x73, 0x69,
  0x67, 0x6e, 0x65, 0x64, 0x20, 0x69, 0x3b, 0x0a,
  0x20, 0x20, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x66,
  0x28, 0x22, 0x5c, 0x6e, 0x23, 0x69, 0x6e, 0x63,
  0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x73, 0x74,
  0x64, 0x69, 0x6f, 0x2e, 0x68, 0x3e, 0x5c, 0x6e,
  0x5c, 0x6e, 0x63, 0x68, 0x61, 0x72, 0x20, 0x64,
  0x61, 0x74, 0x61, 0x5b, 0x5d, 0x20, 0x3d, 0x20,
  0x7b, 0x5c, 0x6e, 0x22, 0x29, 0x3b, 0x0a, 0x20,
  0x20, 0x66, 0x6f, 0x72, 0x20, 0x28, 0x69, 0x20,
  0x3d, 0x20, 0x30, 0x3b, 0x20, 0x69, 0x20, 0x3c,
  0x20, 0x73, 0x69, 0x7a, 0x65, 0x6f, 0x66, 0x28,
  0x64, 0x61, 0x74, 0x61, 0x29, 0x3b, 0x20, 0x69,
  0x2b, 0x2b, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x69, 0x25,
  0x38, 0x20, 0x3d, 0x3d, 0x20, 0x30, 0x29, 0x20,
  0x70, 0x75, 0x74, 0x63, 0x68, 0x61, 0x72, 0x28,
  0x27, 0x20, 0x27, 0x29, 0x3b, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x66,
  0x28, 0x22, 0x20, 0x30, 0x78, 0x25, 0x30, 0x32,
  0x78, 0x2c, 0x22, 0x2c, 0x20, 0x64, 0x61, 0x74,
  0x61, 0x5b, 0x69, 0x5d, 0x29, 0x3b, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x69,
  0x25, 0x38, 0x20, 0x3d, 0x3d, 0x20, 0x37, 0x29,
  0x20, 0x70, 0x75, 0x74, 0x63, 0x68, 0x61, 0x72,
  0x28, 0x27, 0x5c, 0x6e, 0x27, 0x29, 0x3b, 0x0a,
  0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x70, 0x72,
  0x69, 0x6e, 0x74, 0x66, 0x28, 0x22, 0x5c, 0x6e,
  0x7d, 0x3b, 0x5c, 0x6e, 0x5c, 0x6e, 0x22, 0x29,
  0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6f, 0x72, 0x20,
  0x28, 0x69, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x20,
  0x64, 0x61, 0x74, 0x61, 0x5b, 0x69, 0x5d, 0x3b,
  0x20, 0x69, 0x2b, 0x2b, 0x29, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x70, 0x75, 0x74, 0x63, 0x68, 0x61,
  0x72, 0x28, 0x64, 0x61, 0x74, 0x61, 0x5b, 0x69,
  0x5d, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65,
  0x74, 0x75, 0x72, 0x6e, 0x20, 0x30, 0x3b, 0x0a,
  0x7d, 0x0a, 0x00,
};

int main(void) 
{
  unsigned i;
  printf("\n#include <stdio.h>\n\nchar data[] = {\n");
  for (i = 0; i < sizeof(data); i++) {
    if (i%8 == 0) putchar(' ');
    printf(" 0x%02x,", data[i]);
    if (i%8 == 7) putchar('\n');
  }
  printf("\n};\n\n");
  for (i = 0; data[i]; i++)
    putchar(data[i]);
  return 0;
}
