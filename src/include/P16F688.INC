        LIST

;==========================================================================
;  MPASM PIC16F688 processor include
; 
;  (c) Copyright 1999-2013 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16F688 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16F688
;       2. LIST directive in the source file
;               LIST   P=PIC16F688
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16F688
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
PORTC            EQU  H'0007'
PCLATH           EQU  H'000A'
INTCON           EQU  H'000B'
PIR1             EQU  H'000C'
TMR1             EQU  H'000E'
TMR1L            EQU  H'000E'
TMR1H            EQU  H'000F'
T1CON            EQU  H'0010'
BAUDCTL          EQU  H'0011'
SPBRGH           EQU  H'0012'
SPBRG            EQU  H'0013'
RCREG            EQU  H'0014'
TXREG            EQU  H'0015'
TXSTA            EQU  H'0016'
RCSTA            EQU  H'0017'
WDTCON           EQU  H'0018'
CMCON0           EQU  H'0019'
CMCON1           EQU  H'001A'
ADRESH           EQU  H'001E'
ADCON0           EQU  H'001F'

;-----Bank1------------------
OPTION_REG       EQU  H'0081'
TRISA            EQU  H'0085'
TRISC            EQU  H'0087'
PIE1             EQU  H'008C'
PCON             EQU  H'008E'
OSCCON           EQU  H'008F'
OSCTUNE          EQU  H'0090'
ANSEL            EQU  H'0091'
WPU              EQU  H'0095'
WPUA             EQU  H'0095'
IOC              EQU  H'0096'
IOCA             EQU  H'0096'
EEDATH           EQU  H'0097'
EEADRH           EQU  H'0098'
VRCON            EQU  H'0099'
EEDAT            EQU  H'009A'
EEDATA           EQU  H'009A'
EEADR            EQU  H'009B'
EECON1           EQU  H'009C'
EECON2           EQU  H'009D'
ADRESL           EQU  H'009E'
ADCON1           EQU  H'009F'

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


;----- PORTC Bits -----------------------------------------------------
RC0              EQU  H'0000'
RC1              EQU  H'0001'
RC2              EQU  H'0002'
RC3              EQU  H'0003'
RC4              EQU  H'0004'
RC5              EQU  H'0005'


;----- INTCON Bits -----------------------------------------------------
RAIF             EQU  H'0000'
INTF             EQU  H'0001'
T0IF             EQU  H'0002'
RAIE             EQU  H'0003'
INTE             EQU  H'0004'
T0IE             EQU  H'0005'
PEIE             EQU  H'0006'
GIE              EQU  H'0007'

TMR0IF           EQU  H'0002'
TMR0IE           EQU  H'0005'


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TXIF             EQU  H'0001'
OSFIF            EQU  H'0002'
C1IF             EQU  H'0003'
C2IF             EQU  H'0004'
RCIF             EQU  H'0005'
ADIF             EQU  H'0006'
EEIF             EQU  H'0007'

T1IF             EQU  H'0000'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
TMR1CS           EQU  H'0001'
NOT_T1SYNC       EQU  H'0002'
T1OSCEN          EQU  H'0003'
TMR1GE           EQU  H'0006'
T1GINV           EQU  H'0007'

T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'


;----- BAUDCTL Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
SCKP             EQU  H'0004'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- TXSTA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- RCSTA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'


;----- WDTCON Bits -----------------------------------------------------
SWDTEN           EQU  H'0000'

WDTPS0           EQU  H'0001'
WDTPS1           EQU  H'0002'
WDTPS2           EQU  H'0003'
WDTPS3           EQU  H'0004'


;----- CMCON0 Bits -----------------------------------------------------
CIS              EQU  H'0003'
C1INV            EQU  H'0004'
C2INV            EQU  H'0005'
C1OUT            EQU  H'0006'
C2OUT            EQU  H'0007'

CM0              EQU  H'0000'
CM1              EQU  H'0001'
CM2              EQU  H'0002'


;----- CMCON1 Bits -----------------------------------------------------
C2SYNC           EQU  H'0000'
T1GSS            EQU  H'0001'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'
VCFG             EQU  H'0006'
ADFM             EQU  H'0007'

GO               EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'

NOT_DONE         EQU  H'0001'

GO_DONE          EQU  H'0001'


;----- OPTION_REG Bits -----------------------------------------------------
PSA              EQU  H'0003'
T0SE             EQU  H'0004'
T0CS             EQU  H'0005'
INTEDG           EQU  H'0006'
NOT_RAPU         EQU  H'0007'

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


;----- TRISC Bits -----------------------------------------------------
TRISC0           EQU  H'0000'
TRISC1           EQU  H'0001'
TRISC2           EQU  H'0002'
TRISC3           EQU  H'0003'
TRISC4           EQU  H'0004'
TRISC5           EQU  H'0005'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TXIE             EQU  H'0001'
OSFIE            EQU  H'0002'
C1IE             EQU  H'0003'
C2IE             EQU  H'0004'
RCIE             EQU  H'0005'
ADIE             EQU  H'0006'
EEIE             EQU  H'0007'

T1IE             EQU  H'0000'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'
SBODEN           EQU  H'0004'
ULPWUE           EQU  H'0005'

NOT_BOD          EQU  H'0000'


;----- OSCCON Bits -----------------------------------------------------
SCS              EQU  H'0000'
LTS              EQU  H'0001'
HTS              EQU  H'0002'
OSTS             EQU  H'0003'

IRCF0            EQU  H'0004'
IRCF1            EQU  H'0005'
IRCF2            EQU  H'0006'


;----- OSCTUNE Bits -----------------------------------------------------
TUN0             EQU  H'0000'
TUN1             EQU  H'0001'
TUN2             EQU  H'0002'
TUN3             EQU  H'0003'
TUN4             EQU  H'0004'


;----- ANSEL Bits -----------------------------------------------------
ANS0             EQU  H'0000'
ANS1             EQU  H'0001'
ANS2             EQU  H'0002'
ANS3             EQU  H'0003'
ANS4             EQU  H'0004'
ANS5             EQU  H'0005'
ANS6             EQU  H'0006'
ANS7             EQU  H'0007'


;----- WPU Bits -----------------------------------------------------
WPUA0            EQU  H'0000'
WPUA1            EQU  H'0001'
WPUA2            EQU  H'0002'
WPUA4            EQU  H'0004'
WPUA5            EQU  H'0005'

WPU0             EQU  H'0000'
WPU1             EQU  H'0001'
WPU2             EQU  H'0002'
WPU4             EQU  H'0004'
WPU5             EQU  H'0005'


;----- WPUA Bits -----------------------------------------------------
WPUA0            EQU  H'0000'
WPUA1            EQU  H'0001'
WPUA2            EQU  H'0002'
WPUA4            EQU  H'0004'
WPUA5            EQU  H'0005'

WPU0             EQU  H'0000'
WPU1             EQU  H'0001'
WPU2             EQU  H'0002'
WPU4             EQU  H'0004'
WPU5             EQU  H'0005'


;----- IOC Bits -----------------------------------------------------
IOCA0            EQU  H'0000'
IOCA1            EQU  H'0001'
IOCA2            EQU  H'0002'
IOCA3            EQU  H'0003'
IOCA4            EQU  H'0004'
IOCA5            EQU  H'0005'

IOC0             EQU  H'0000'
IOC1             EQU  H'0001'
IOC2             EQU  H'0002'
IOC3             EQU  H'0003'
IOC4             EQU  H'0004'
IOC5             EQU  H'0005'


;----- IOCA Bits -----------------------------------------------------
IOCA0            EQU  H'0000'
IOCA1            EQU  H'0001'
IOCA2            EQU  H'0002'
IOCA3            EQU  H'0003'
IOCA4            EQU  H'0004'
IOCA5            EQU  H'0005'

IOC0             EQU  H'0000'
IOC1             EQU  H'0001'
IOC2             EQU  H'0002'
IOC3             EQU  H'0003'
IOC4             EQU  H'0004'
IOC5             EQU  H'0005'


;----- VRCON Bits -----------------------------------------------------
VRR              EQU  H'0005'
VREN             EQU  H'0007'

VR0              EQU  H'0000'
VR1              EQU  H'0001'
VR2              EQU  H'0002'
VR3              EQU  H'0003'


;----- EECON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
EEPGD            EQU  H'0007'


;----- ADCON1 Bits -----------------------------------------------------
ADCS0            EQU  H'0004'
ADCS1            EQU  H'0005'
ADCS2            EQU  H'0006'




;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'01FF'
       __BADRAM  H'0006'
       __BADRAM  H'0008'-H'0009'
       __BADRAM  H'000D'
       __BADRAM  H'001B'-H'001D'
       __BADRAM  H'0086'
       __BADRAM  H'0088'-H'0089'
       __BADRAM  H'008D'
       __BADRAM  H'0092'-H'0094'
       __BADRAM  H'0106'
       __BADRAM  H'0108'-H'0109'
       __BADRAM  H'010C'-H'011F'
       __BADRAM  H'0186'
       __BADRAM  H'0188'-H'0189'
       __BADRAM  H'018C'-H'019F'
       __BADRAM  H'01A0'-H'01EF'

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
_FOSC_LP             EQU  H'3FF8'    ; LP oscillator: Low-power crystal on RA4/OSC2/CLKOUT and RA5/OSC1/CLKIN
_LP_OSC              EQU  H'3FF8'    ; LP oscillator: Low-power crystal on RA4/OSC2/CLKOUT and RA5/OSC1/CLKIN
_FOSC_XT             EQU  H'3FF9'    ; XT oscillator: Crystal/resonator on RA4/OSC2/CLKOUT and RA5/OSC1/CLKINT
_XT_OSC              EQU  H'3FF9'    ; XT oscillator: Crystal/resonator on RA4/OSC2/CLKOUT and RA5/OSC1/CLKINT
_FOSC_HS             EQU  H'3FFA'    ; HS oscillator: High-speed crystal/resonator on RA4/OSC2/CLKOUT and RA5/OSC1/CLKIN
_HS_OSC              EQU  H'3FFA'    ; HS oscillator: High-speed crystal/resonator on RA4/OSC2/CLKOUT and RA5/OSC1/CLKIN
_FOSC_EC             EQU  H'3FFB'    ; EC: I/O function on RA4/OSC2/CLKOUT pin, CLKIN on RA5/OSC1/CLKIN
_EC_OSC              EQU  H'3FFB'    ; EC: I/O function on RA4/OSC2/CLKOUT pin, CLKIN on RA5/OSC1/CLKIN
_FOSC_INTOSCIO       EQU  H'3FFC'    ; INTOSCIO oscillator: I/O function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN
_INTOSCIO            EQU  H'3FFC'    ; INTOSCIO oscillator: I/O function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN
_INTRC_OSC_NOCLKOUT  EQU  H'3FFC'    ; INTOSCIO oscillator: I/O function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN
_FOSC_INTOSCCLK      EQU  H'3FFD'    ; INTOSC oscillator: CLKOUT function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN
_INTOSC              EQU  H'3FFD'    ; INTOSC oscillator: CLKOUT function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN
_INTRC_OSC_CLKOUT    EQU  H'3FFD'    ; INTOSC oscillator: CLKOUT function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN
_FOSC_EXTRCIO        EQU  H'3FFE'    ; EXTRCIO oscillator: External RC on RA5/OSC1/CLKIN, I/O function on RA4/OSC2/CLKOUT pin
_EXTRCIO             EQU  H'3FFE'    ; EXTRCIO oscillator: External RC on RA5/OSC1/CLKIN, I/O function on RA4/OSC2/CLKOUT pin
_EXTRC_OSC_NOCLKOUT  EQU  H'3FFE'    ; EXTRCIO oscillator: External RC on RA5/OSC1/CLKIN, I/O function on RA4/OSC2/CLKOUT pin
_FOSC_EXTRCCLK       EQU  H'3FFF'    ; EXTRC oscillator: External RC on RA5/OSC1/CLKIN, CLKOUT function on RA4/OSC2/CLKOUT pin
_EXTRC               EQU  H'3FFF'    ; EXTRC oscillator: External RC on RA5/OSC1/CLKIN, CLKOUT function on RA4/OSC2/CLKOUT pin
_EXTRC_OSC_CLKOUT    EQU  H'3FFF'    ; EXTRC oscillator: External RC on RA5/OSC1/CLKIN, CLKOUT function on RA4/OSC2/CLKOUT pin

_WDTE_OFF            EQU  H'3FF7'    ; WDT disabled
_WDT_OFF             EQU  H'3FF7'    ; WDT disabled
_WDTE_ON             EQU  H'3FFF'    ; WDT enabled
_WDT_ON              EQU  H'3FFF'    ; WDT enabled

_PWRTE_ON            EQU  H'3FEF'    ; PWRT enabled
_PWRTE_OFF           EQU  H'3FFF'    ; PWRT disabled

_MCLRE_OFF           EQU  H'3FDF'    ; MCLR pin function is digital input, MCLR internally tied to VDD
_MCLRE_ON            EQU  H'3FFF'    ; MCLR pin function is MCLR

_CP_ON               EQU  H'3FBF'    ; Program memory code protection is enabled
_CP_OFF              EQU  H'3FFF'    ; Program memory code protection is disabled

_CPD_ON              EQU  H'3F7F'    ; Data memory code protection is enabled
_CPD_OFF             EQU  H'3FFF'    ; Data memory code protection is disabled

_BOREN_OFF           EQU  H'3CFF'    ; BOR disabled
_BOD_OFF             EQU  H'3CFF'    ; BOR disabled
_BOR_OFF             EQU  H'3CFF'    ; BOR disabled
_BOREN_SBODEN        EQU  H'3DFF'    ; BOR controlled by SBOREN bit of the PCON register
_BOD_SBODEN          EQU  H'3DFF'    ; BOR controlled by SBOREN bit of the PCON register
_BOR_SBODEN          EQU  H'3DFF'    ; BOR controlled by SBOREN bit of the PCON register
_BOREN_NSLEEP        EQU  H'3EFF'    ; BOR enabled during operation and disabled in Sleep
_BOD_NSLEEP          EQU  H'3EFF'    ; BOR enabled during operation and disabled in Sleep
_BOR_NSLEEP          EQU  H'3EFF'    ; BOR enabled during operation and disabled in Sleep
_BOREN_ON            EQU  H'3FFF'    ; BOR enabled
_BOD_ON              EQU  H'3FFF'    ; BOR enabled
_BOR_ON              EQU  H'3FFF'    ; BOR enabled

_IESO_OFF            EQU  H'3BFF'    ; Internal External Switchover mode is disabled
_IESO_ON             EQU  H'3FFF'    ; Internal External Switchover mode is enabled

_FCMEN_OFF           EQU  H'37FF'    ; Fail-Safe Clock Monitor is disabled
_FCMEN_ON            EQU  H'3FFF'    ; Fail-Safe Clock Monitor is enabled

;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'2006'

;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'2000'
_IDLOC1          EQU  H'2001'
_IDLOC2          EQU  H'2002'
_IDLOC3          EQU  H'2003'

        LIST
