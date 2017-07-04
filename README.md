# PIC16FXXXX Microcontroller Family Disassembler

This was a fun side-project I did my sophomore year of high school (Spring 2013) in response to our Engineering instructor challenging us to create a disassembler for our microcontroller hex code.

The application is a Java desktop application with an interface that allows you to open .HEX files and converts them into readable assembly code (savable as a .asm file), complete syntax coloring :).  It theoretically can convert code from any family of PIC microcontrollers (see the src/include file) but has only been tested on PIC16F887 and PIC16F877 microcontrollers, which we used in class.

The executable .jar file is included in the exec folder with a sample .HEX file for you to try with.  For reference, the original .asm file used to generate the .HEX file (in MPLab) is included so that you can compare the disassembled .asm output with the original.

Fun fact: It was during this project that I learned about regular expressions and what they were used for.

## Screenshots

![opening interface](https://raw.githubusercontent.com/rfong/disassembler/master/screenshots/screenshot1.jpg)

![hex](https://raw.githubusercontent.com/rfong/disassembler/master/screenshots/screenshot2.jpg)

![asm](https://raw.githubusercontent.com/rfong/disassembler/master/screenshots/screenshot3.jpg)
