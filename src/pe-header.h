#include <stdio.h>
#include <stdlib.h>

typedef struct pe_file
{
  int   PE_offset;      // PE offset
  char  sig[4];         // PE signature
  int   machine;        // Machine type ARM/MIPS/Intel
  int   sections;       // Number of Sections
  int   characteristics;          // Characteristics
  int   optionalHeaderSize;        // Optional Header Size
  int   optionalImage;             // Optional Image Header
} pe_file;

// functions
void print_info(pe_file *file);
void read_pe(char *filename, pe_file *file);


// defitions
#define IMAGE_FILE_MACHINE_UNKNOWN   	 0x0      //    The content of this field is assumed to be applicable to any machine type
#define IMAGE_FILE_MACHINE_IA64   		 0x200    //    Intel Itanium processor family
#define IMAGE_FILE_MACHINE_I386   		 0x14c    //    Intel 386 or later processors and compatible processors
#define IMAGE_FILE_MACHINE_AMD64   		 0x8664   //    x64
#define IMAGE_FILE_MACHINE_ARM   		   0x1c0    //    ARM little endian
#define IMAGE_FILE_MACHINE_ARM64   		 0xaa64   //    ARM64 little endian
#define IMAGE_FILE_MACHINE_ARMNT   		 0x1c4    //    ARM Thumb-2 little endian
#define IMAGE_FILE_MACHINE_EBC   		   0xebc    //    EFI byte code

#define IMAGE_FILE_MACHINE_AM33   		 0x1d3    //    Matsushita AM33
#define IMAGE_FILE_MACHINE_LOONGARCH32   0x6232   //    LoongArch 32-bit processor family
#define IMAGE_FILE_MACHINE_LOONGARCH64   0x6264   //    LoongArch 64-bit processor family
#define IMAGE_FILE_MACHINE_M32R   		 0x9041   //    Mitsubishi M32R little endian
#define IMAGE_FILE_MACHINE_MIPS16        0x266    //    MIPS16
#define IMAGE_FILE_MACHINE_MIPSFPU       0x366    //    MIPS with FPU
#define IMAGE_FILE_MACHINE_MIPSFPU16     0x466    //    MIPS16 with FPU
#define IMAGE_FILE_MACHINE_POWERPC   	 0x1f0    //    Power PC little endian
#define IMAGE_FILE_MACHINE_POWERPCFP     0x1f1    //    Power PC with floating point support
#define IMAGE_FILE_MACHINE_R4000         0x166    //    MIPS little endian
#define IMAGE_FILE_MACHINE_RISCV32       0x5032   //    RISC-V 32-bit address space
#define IMAGE_FILE_MACHINE_RISCV64       0x5064   //    RISC-V 64-bit address space
#define IMAGE_FILE_MACHINE_RISCV128      0x5128   //    RISC-V 128-bit address space
#define IMAGE_FILE_MACHINE_SH3   		 0x1a2    //    Hitachi SH3
#define IMAGE_FILE_MACHINE_SH3DSP   	 0x1a3    //    Hitachi SH3 DSP
#define IMAGE_FILE_MACHINE_SH4    		 0x1a6    //    Hitachi SH4
#define IMAGE_FILE_MACHINE_SH5   		 0x1a8    //    Hitachi SH5
#define IMAGE_FILE_MACHINE_THUMB   		 0x1c2    //    Thumb
#define IMAGE_FILE_MACHINE_WCEMIPSV2   	 0x169    //    MIPS little-endian WCE v2 

