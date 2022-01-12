# PErser (PE Parser)

## Introduction
PErser (as in PE Parser) is a small program made as an exercise to read header information from Portable Executable files.

## Building / Compiling
``` 
$ cd PErser/
$ make 
```

## Usage Example
```
$ ./perser example-file.exe
Signature:             PE
Machine:               Intel 386 
Number of Sections:    7
OptionalHeader size:   224 (0xe0)
Characteristics:       EXE 
Optional Image header: 0x10b PE (32 bit) 
Address of EntryPoint: 0x285440 (0x10285440) 
Image Base:            0x10000000 

```

## Resources
During the making of this program I've relied heavily on:
- Microsoft PE format documentation:
https://docs.microsoft.com/en-us/windows/win32/debug/pe-format#machine-types
- Ange Albertini's Visual PE101 documentation of the PE format:
https://github.com/corkami/pics/tree/master/binary/pe101


## To-do list / Progress
- [x] Find and read PE info
- [x] Determine PE file type (PE / PE+)
- [x] Find and Print address of EntryPoint 
- [ ] Read and print PE sections
- [ ] Replce fgetc() functions with appropriate functions (get16_le(), get32_le()...etc)
- [ ] Implement functions to ouput parse-able text (for example, csv)
- [ ] Read Basic Data Directory info
- [ ] Read imported functions (by name)
- [ ] Read imported functions (by ordinal)
- [ ] Create Separate functions to read PE info
- [ ] Improve the code's read-ability

