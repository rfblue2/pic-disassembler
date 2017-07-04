        LIST

;==========================================================================
;  MPASM PIC16F627A processor include
; 
;  (c) Copyright 1999-2013 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16F627A microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16F627A
;       2. LIST directive in the source file
;               LIST   P=PIC16F627A
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16F627A
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
PORTA            EQU  H'0005'
PORTB            EQU  H'0006'
PCLATH           EQU  H'000A'
INTCON           EQU  H'000B'
PIR1             EQU  H'000C'
TMR1             EQU  H'000E'
TMR1L            EQU  H'000E'
TMR1H            EQU  H'000F'
T1CON            EQU  H'0010'
TMR2             EQU  H'0011'
T2CON            EQU  H'0012'
CCPR1            EQU  H'0015'
CCPR1L           EQU  H'0015'
CCPR1H           EQU  H'0016'
CCP1CON          EQU  H'0017'
RCSTA            EQU  H'0018'
TXREG            EQU  H'0019'
RCREG            EQU  H'001A'
CMCON            EQU  H'001F'

;-----Bank1------------------
OPTION_REG       EQU  H'0081'
TRISA            EQU  H'0085'
TRISB            EQU  H'0086'
PIE1             EQU  H'008C'
PCON             EQU  H'008E'
PR2              EQU  H'0092'
TXSTA            EQU  H'0098'
SPBRG            EQU  H'0099'
EEDATA           EQU  H'009A'
EEADR            EQU  H'009B'
EECON1           EQU  H'009C'
EECON2           EQU  H'009D'
VRCON            EQU  H'009F'

;----- STATUS Bits -----------------------------------------------------
C                EQU  H'0000'
DC               EQU  H'0001'
Z                EQU  H'0002'
NOT_PD           EQU  H'0003'
NOT_TO           EQU  H'0004'
IRP              EQU  H'0007'

RP0              EQU  H'0005'
RP1              EQU  H'0006'


;----- PORTA Bits -----------------------------------------------------
RA0              EQU  H'0000'
RA1              EQU  H'0001'
RA2              EQU  H'0002'
RA3              EQU  H'0003'
RA4              EQU  H'0004'
RA5              EQU  H'0005'
RA6              EQU  H'0006'
RA7              EQU  H'0007'


;----- PORTB Bits -----------------------------------------------------
RB0              EQU  H'0000'
RB1              EQU  H'0001'
RB2              EQU  H'0002'
RB3              EQU  H'0003'
RB4              EQU  H'0004'
RB5              EQU  H'0005'
RB6              EQU  H'0006'
RB7              EQU  H'0007'


;----- INTCON Bits -----------------------------------------------------
RBIF             EQU  H'0000'
INTF             EQU  H'0001'
T0IF             EQU  H'0002'
RBIE             EQU  H'0003'
INTE             EQU  H'0004'
T0IE             EQU  H'0005'
PEIE             EQU  H'0006'
GIE              EQU  H'0007'

TMR0IF           EQU  H'0002'
TMR0IE           EQU  H'0005'


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
CCP1IF           EQU  H'0002'
TXIF             EQU  H'0004'
RCIF             EQU  H'0005'
CMIF             EQU  H'0006'
EEIF             EQU  H'0007'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
TMR1CS           EQU  H'0001'
NOT_T1SYNC       EQU  H'0002'
T1OSCEN          EQU  H'0003'

T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'


;----- T2CON Bits -----------------------------------------------------
TMR2ON           EQU  H'0002'

T2CKPS0          EQU  H'0000'
T2CKPS1          EQU  H'0001'
TOUTPS0          EQU  H'0003'
TOUTPS1          EQU  H'0004'
TOUTPS2          EQU  H'0005'
TOUTPS3          EQU  H'0006'


;----- CCP1CON Bits -----------------------------------------------------
CCP1Y            EQU  H'0004'
CCP1X            EQU  H'0005'

CCP1M0           EQU  H'0000'
CCP1M1           EQU  H'0001'
CCP1M2           EQU  H'0002'
CCP1M3           EQU  H'0003'


;----- RCSTA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADEN             EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'

ADDEN            EQU  H'0003'


;----- CMCON Bits -----------------------------------------------------
CIS              EQU  H'0003'
C1INV            EQU  H'0004'
C2INV            EQU  H'0005'
C1OUT            EQU  H'0006'
C2OUT            EQU  H'0007'

CM0              EQU  H'0000'
CM1              EQU  H'0001'
CM2              EQU  H'0002'


;----- OPTION_REG Bits -----------------------------------------------------
PSA              EQU  H'0003'
T0SE             EQU  H'0004'
T0CS             EQU  H'0005'
INTEDG           EQU  H'0006'
NOT_RBPU         EQU  H'0007'

PS0              EQU  H'0000'
PS1              EQU  H'0001'
PS2              EQU  H'0002'


;----- TRISA Bits -----------------------------------------------------
TRISA0           EQU  H'0000'
TRISA1           EQU  H'0001'
TRISA2           EQU  H'0002'
TRISA3           EQU  H'0003'
TRISA4           EQU  H'0004'
TRISA5           EQU  H'0005'
TRISA6           EQU  H'0006'
TRISA7           EQU  H'0007'


;----- TRISB Bits -----------------------------------------------------
TRISB0           EQU  H'0000'
TRISB1           EQU  H'0001'
TRISB2           EQU  H'0002'
TRISB3           EQU  H'0003'
TRISB4           EQU  H'0004'
TRISB5           EQU  H'0005'
TRISB6           EQU  H'0006'
TRISB7           EQU  H'0007'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
CCP1IE           EQU  H'0002'
TXIE             EQU  H'0004'
RCIE             EQU  H'0005'
CMIE             EQU  H'0006'
EEIE             EQU  H'0007'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'
OSCF             EQU  H'0003'

NOT_BO           EQU  H'0000'

NOT_BOD          EQU  H'0000'


;----- TXSTA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- EECON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'


;----- VRCON Bits -----------------------------------------------------
VRR              EQU  H'0005'
VROE             EQU  H'0006'
VREN             EQU  H'0007'

VR0              EQU  H'0000'
VR1              EQU  H'0001'
VR2              EQU  H'0002'
VR3              EQU  H'0003'




;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'01FF'
       __BADRAM  H'0007'-H'0009'
       __BADRAM  H'000D'
       __BADRAM  H'0013'-H'0014'
       __BADRAM  H'001B'-H'001E'
       __BADRAM  H'0087'-H'0089'
       __BADRAM  H'008D'
       __BADRAM  H'008F'-H'0091'
       __BADRAM  H'0093'-H'0097'
       __BADRAM  H'009E'
       __BADRAM  H'0105'
       __BADRAM  H'0107'-H'0109'
       __BADRAM  H'010C'-H'011F'
       __BADRAM  H'0150'-H'016F'
       __BADRAM  H'0185'
       __BADRAM  H'0187'-H'0189'
       __BADRAM  H'018C'-H'018F'
       __BADRAM  H'0190'-H'01EF'

;==========================================================================
;
;       Configuration Bits
;
;   NAME            Address
;   CONFIG            2007h
;
;==========================================================================

; The following is an assignment of address values for all of the
; configuration registers for the purpose of table reads
_CONFIG          EQU  H'2007'

;----- CONFIG Options --------------------------------------------------
_FOSC_LP             EQU  H'3FEC'    ; LP oscillator: Low-power crystal on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN
_LP_OSC              EQU  H'3FEC'    ; LP oscillator: Low-power crystal on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN
_FOSC_XT             EQU  H'3FED'    ; XT oscillator: Crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN
_XT_OSC              EQU  H'3FED'    ; XT oscillator: Crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN
_FOSC_HS             EQU  H'3FEE'    ; HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN
_HS_OSC              EQU  H'3FEE'    ; HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN
_FOSC_ECIO           EQU  H'3FEF'    ; EC: I/O function on RA6/OSC2/CLKOUT pin, CLKIN on RA7/OSC1/CLKIN
_EXTCLK_OSC          EQU  H'3FEF'    ; EC: I/O function on RA6/OSC2/CLKOUT pin, CLKIN on RA7/OSC1/CLKIN
_FOSC_INTOSCIO       EQU  H'3FFC'    ; INTOSC oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN
_INTOSC_OSC_NOCLKOUT EQU  H'3FFC'    ; INTOSC oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN
_INTRC_OSC_NOCLKOUT  EQU  H'3FFC'    ; INTOSC oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN
_FOSC_INTOSCCLK      EQU  H'3FFD'    ; INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN
_INTOSC_OSC_CLKOUT   EQU  H'3FFD'    ; INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN
_INTRC_OSC_CLKOUT    EQU  H'3FFD'    ; INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN
_FOSC_EXTRCIO        EQU  H'3FFE'    ; RC oscillator: I/O function on RA6/OSC2/CLKOUT pin, Resistor and Capacitor on RA7/OSC1/CLKIN
_RC_OSC_NOCLKOUT     EQU  H'3FFE'    ; RC oscillator: I/O function on RA6/OSC2/CLKOUT pin, Resistor and Capacitor on RA7/OSC1/CLKIN
_ER_OSC_NOCLKOUT     EQU  H'3FFE'    ; RC oscillator: I/O function on RA6/OSC2/CLKOUT pin, Resistor and Capacitor on RA7/OSC1/CLKIN
_FOSC_EXTRCCLK       EQU  H'3FFF'    ; RC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, Resistor and Capacitor on RA7/OSC1/CLKIN
_RC_OSC_CLKOUT       EQU  H'3FFF'    ; RC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, Resistor and Capacitor on RA7/OSC1/CLKIN
_ER_OSC_CLKOUT       EQU  H'3FFF'    ; RC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, Resistor and Capacitor on RA7/OSC1/CLKIN

_WDTE_OFF            EQU  H'3FFB'    ; WDT disabled
_WDT_OFF             EQU  H'3FFB'    ; WDT disabled
_WDTE_ON             EQU  H'3FFF'    ; WDT enabled
_WDT_ON              EQU  H'3FFF'    ; WDT enabled

_PWRTE_ON            EQU  H'3FF7'    ; PWRT enabled
_PWRTE_OFF           EQU  H'3FFF'    ; PWRT disabled

_MCLRE_OFF           EQU  H'3FDF'    ; RA5/MCLR/VPP pin function is digital input, MCLR internally tied to VDD
_MCLRE_ON            EQU  H'3FFF'    ; RA5/MCLR/VPP pin function is MCLR

_BOREN_OFF           EQU  H'3FBF'    ; BOD disabled
_BODEN_OFF           EQU  H'3FBF'    ; BOD disabled
_BOREN_OFF           EQU  H'3FBF'    ; BOD disabled
_BOREN_ON            EQU  H'3FFF'    ; BOD enabled
_BODEN_ON            EQU  H'3FFF'    ; BOD enabled
_BOREN_ON            EQU  H'3FFF'    ; BOD enabled

_LVP_OFF             EQU  H'3F7F'    ; RB4/PGM pin has digital I/O function, HV on MCLR must be used for programming
_LVP_ON              EQU  H'3FFF'    ; RB4/PGM pin has PGM function, low-voltage programming enabled

_CPD_ON              EQU  H'3EFF'    ; Data memory code-protected
DATA_CP_ON           EQU  H'3EFF'    ; Data memory code-protected
_CPD_OFF             EQU  H'3FFF'    ; Data memory code protection off
DATA_CP_OFF          EQU  H'3FFF'    ; Data memory code protection off

_CP_ON               EQU  H'1FFF'    ; 0000h to 03FFh code-protected
_CP_OFF              EQU  H'3FFF'    ; Code protection off

;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'2006'

;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'2000'
_IDLOC1          EQU  H'2001'
_IDLOC2          EQU  H'2002'
_IDLOC3          EQU  H'2003'

        LIST
