        LIST

;==========================================================================
;  MPASM PIC16F527 processor include
; 
;  (c) Copyright 1999-2013 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16F527 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16F527
;       2. LIST directive in the source file
;               LIST   P=PIC16F527
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16F527
           MESSG "Processor-header file mismatch.  Verify selected processor."
        ENDIF



;==========================================================================
;
;       Register Definitions
;
;==========================================================================

W                EQU  H'0000'
F                EQU  H'0001'

;----- Register Files -----------------------------------------------------

;-----Bank0------------------
INDF             EQU  H'0000'
TMR0             EQU  H'0001'
PCL              EQU  H'0002'
STATUS           EQU  H'0003'
FSR              EQU  H'0004'
OSCCAL           EQU  H'0005'
PORTA            EQU  H'0006'
PORTB            EQU  H'0007'
PORTC            EQU  H'0008'
ADCON0           EQU  H'0009'
ADRES            EQU  H'000A'
INTCON           EQU  H'000B'
INTCON0          EQU  H'000B'

;-----Bank1------------------
EECON            EQU  H'0021'
EEDATA           EQU  H'0025'
EEADR            EQU  H'0026'
CM1CON0          EQU  H'0027'
CM2CON0          EQU  H'0028'
VRCON            EQU  H'0029'
ANSEL            EQU  H'002A'

;-----Bank3------------------
IW               EQU  H'0061'
INTCON1          EQU  H'0065'
INTIE_REG        EQU  H'0065'
ISTATUS          EQU  H'0066'
IFSR             EQU  H'0067'
IBSR             EQU  H'0068'
OPACON           EQU  H'0069'

;----- STATUS Bits -----------------------------------------------------
C                EQU  H'0000'
DC               EQU  H'0001'
Z                EQU  H'0002'
NOT_PD           EQU  H'0003'
NOT_TO           EQU  H'0004'
PA0              EQU  H'0005'
PA1              EQU  H'0006'


;----- OSCCAL Bits -----------------------------------------------------
CAL0             EQU  H'0001'
CAL1             EQU  H'0002'
CAL2             EQU  H'0003'
CAL3             EQU  H'0004'
CAL4             EQU  H'0005'
CAL5             EQU  H'0006'
CAL6             EQU  H'0007'


;----- PORTA Bits -----------------------------------------------------
RA0              EQU  H'0000'
RA1              EQU  H'0001'
RA2              EQU  H'0002'
RA3              EQU  H'0003'
RA4              EQU  H'0004'
RA5              EQU  H'0005'


;----- PORTB Bits -----------------------------------------------------
RB4              EQU  H'0004'
RB5              EQU  H'0005'
RB6              EQU  H'0006'
RB7              EQU  H'0007'


;----- PORTC Bits -----------------------------------------------------
RC0              EQU  H'0000'
RC1              EQU  H'0001'
RC2              EQU  H'0002'
RC3              EQU  H'0003'
RC4              EQU  H'0004'
RC5              EQU  H'0005'
RC6              EQU  H'0006'
RC7              EQU  H'0007'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'

GO               EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'
ADCS0            EQU  H'0006'
ADCS1            EQU  H'0007'

NOT_DONE         EQU  H'0001'


;----- ADRES Bits -----------------------------------------------------
ADRES0           EQU  H'0000'
ADRES1           EQU  H'0001'
ADRES2           EQU  H'0002'
ADRES3           EQU  H'0003'
ADRES4           EQU  H'0004'
ADRES5           EQU  H'0005'
ADRES6           EQU  H'0006'
ADRES7           EQU  H'0007'


;----- INTCON Bits -----------------------------------------------------
GIE              EQU  H'0000'
RAIF             EQU  H'0004'
T0IF             EQU  H'0005'
CWIF             EQU  H'0006'
ADIF             EQU  H'0007'


;----- INTCON0 Bits -----------------------------------------------------
GIE              EQU  H'0000'
RAIF             EQU  H'0004'
T0IF             EQU  H'0005'
CWIF             EQU  H'0006'
ADIF             EQU  H'0007'


;----- EECON Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
FREE             EQU  H'0004'


;----- CM1CON0 Bits -----------------------------------------------------
NOT_C1WU         EQU  H'0000'
C1PREF           EQU  H'0001'
C1NREF           EQU  H'0002'
C1ON             EQU  H'0003'
NOT_C1T0CS       EQU  H'0004'
C1POL            EQU  H'0005'
NOT_C1OUTEN      EQU  H'0006'
C1OUT            EQU  H'0007'


;----- CM2CON0 Bits -----------------------------------------------------
NOT_C2WU         EQU  H'0000'
C2PREF1          EQU  H'0001'
C2NREF           EQU  H'0002'
C2ON             EQU  H'0003'
C2PREF2          EQU  H'0004'
C2POL            EQU  H'0005'
NOT_C2OUTEN      EQU  H'0006'
C2OUT            EQU  H'0007'


;----- VRCON Bits -----------------------------------------------------
VRR              EQU  H'0005'
VROE             EQU  H'0006'
VREN             EQU  H'0007'

VR0              EQU  H'0000'
VR1              EQU  H'0001'
VR2              EQU  H'0002'
VR3              EQU  H'0003'


;----- ANSEL Bits -----------------------------------------------------
ANS0             EQU  H'0000'
ANS1             EQU  H'0001'
ANS2             EQU  H'0002'
ANS3             EQU  H'0003'
ANS4             EQU  H'0004'
ANS5             EQU  H'0005'
ANS6             EQU  H'0006'
ANS7             EQU  H'0007'


;----- INTCON1 Bits -----------------------------------------------------
WUR              EQU  H'0000'
RAIE             EQU  H'0004'
T0IE             EQU  H'0005'
CWIE             EQU  H'0006'
ADIE             EQU  H'0007'


;----- INTIE_REG Bits -----------------------------------------------------
WUR              EQU  H'0000'
RAIE             EQU  H'0004'
T0IE             EQU  H'0005'
CWIE             EQU  H'0006'
ADIE             EQU  H'0007'


;----- ISTATUS Bits -----------------------------------------------------
C                EQU  H'0000'
DC               EQU  H'0001'
Z                EQU  H'0002'
NOT_PD           EQU  H'0003'
NOT_TO           EQU  H'0004'
PA0              EQU  H'0005'
PA1              EQU  H'0006'


;----- OPACON Bits -----------------------------------------------------
OPA1ON           EQU  H'0000'
OPA2ON           EQU  H'0001'



;----- OPTION_REG Bits -----------------------------------------------------
PSA              EQU  H'0003'
T0SE             EQU  H'0004'
T0CS             EQU  H'0005'
NOT_RAPU         EQU  H'0006'
NOT_RAWU         EQU  H'0007'

PS0              EQU  H'0000'
PS1              EQU  H'0001'
PS2              EQU  H'0002'


;----- TRISC Bits -----------------------------------------------------
TRISC0           EQU  H'0000'
TRISC1           EQU  H'0001'
TRISC2           EQU  H'0002'
TRISC3           EQU  H'0003'
TRISC4           EQU  H'0004'
TRISC5           EQU  H'0005'
TRISC6           EQU  H'0006'
TRISC7           EQU  H'0007'


;----- TRISB Bits -----------------------------------------------------
TRISB4           EQU  H'0004'
TRISB5           EQU  H'0005'
TRISB6           EQU  H'0006'
TRISB7           EQU  H'0007'


;----- TRISA Bits -----------------------------------------------------
TRISA0           EQU  H'0000'
TRISA1           EQU  H'0001'
TRISA2           EQU  H'0002'
TRISA4           EQU  H'0004'
TRISA5           EQU  H'0005'



;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'007F'

;==========================================================================
;
;       Configuration Bits
;
;   NAME            Address
;   CONFIG             FFFh
;
;==========================================================================

; The following is an assignment of address values for all of the
; configuration registers for the purpose of table reads
_CONFIG          EQU  H'FFF'

;----- CONFIG Options --------------------------------------------------
_FOSC_LP             EQU  H'0FF8'    ; LP oscillator and automatic 18 ms DRT (DRTEN ignored)
_FOSC_XT             EQU  H'0FF9'    ; XT oscillator and automatic 18 ms DRT (DRTEN ignored)
_FOSC_HS             EQU  H'0FFA'    ; HS oscillator and automatic 18 ms DRT (DRTEN ignored)
_FOSC_EC             EQU  H'0FFB'    ; EC oscillator with I/O function on OSC2/CLKOUT and 10 us startup time
_FOSC_INTRC_IO       EQU  H'0FFC'    ; INTRC with I/O function on OSC2/CLKOUT and 10 us startup time
_FOSC_INTRC_CLKOUT   EQU  H'0FFD'    ; INTRC with CLKOUT function on OSC2/CLKOUT and 10 us startup time
_FOSC_EXTRC_IO       EQU  H'0FFE'    ; EXTRC with I/O function on OSC2/CLKOUT and 10 us startup time
_FOSC_EXTRC_CLKOUT   EQU  H'0FFF'    ; EXTRC with CLKOUT function on OSC2/CLKOUT and 10 us startup time

_WDTE_OFF            EQU  H'0FF7'    ; WDT Disabled
_WDTE_ON             EQU  H'0FFF'    ; WDT Enabled

_CP_ON               EQU  H'0FEF'    ; Code protection on
_CP_OFF              EQU  H'0FFF'    ; Code protection off

_MCLRE_OFF           EQU  H'0FDF'    ; MCLR pin functions as I/O, MCLR internally tied to Vdd
_MCLRE_ON            EQU  H'0FFF'    ; MCLR pin functions as MCLR

_IOSCFS_4MHz         EQU  H'0FBF'    ; 4 MHz INTOSC Speed
_IOSCFS_8MHz         EQU  H'0FFF'    ; 8 MHz INTOSC Speed

_CPSW_ON             EQU  H'0F7F'    ; Code protection on
_CPSW_OFF            EQU  H'0FFF'    ; Code protection off

_BOREN_OFF           EQU  H'0EFF'    ; BOR Disabled
_BOREN_ON            EQU  H'0FFF'    ; BOR Enabled

_DRTEN_OFF           EQU  H'0DFF'    ; DRT Disabled
_DRTEN_ON            EQU  H'0FFF'    ; DRT Enabled (18 ms)


;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'440'
_IDLOC1          EQU  H'441'
_IDLOC2          EQU  H'442'
_IDLOC3          EQU  H'443'

        LIST
