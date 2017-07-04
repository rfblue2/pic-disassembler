        LIST

;==========================================================================
;  MPASM PIC16F785 processor include
; 
;  (c) Copyright 1999-2013 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16F785 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16F785
;       2. LIST directive in the source file
;               LIST   P=PIC16F785
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16F785
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
PORTC            EQU  H'0007'
PCLATH           EQU  H'000A'
INTCON           EQU  H'000B'
PIR1             EQU  H'000C'
TMR1             EQU  H'000E'
TMR1L            EQU  H'000E'
TMR1H            EQU  H'000F'
T1CON            EQU  H'0010'
TMR2             EQU  H'0011'
T2CON            EQU  H'0012'
CCPR             EQU  H'0013'
CCPR1L           EQU  H'0013'
CCPR1H           EQU  H'0014'
CCP1CON          EQU  H'0015'
WDTCON           EQU  H'0018'
ADRESH           EQU  H'001E'
ADCON0           EQU  H'001F'

;-----Bank1------------------
OPTION_REG       EQU  H'0081'
TRISA            EQU  H'0085'
TRISB            EQU  H'0086'
TRISC            EQU  H'0087'
PIE1             EQU  H'008C'
PCON             EQU  H'008E'
OSCCON           EQU  H'008F'
OSCTUNE          EQU  H'0090'
ANSEL            EQU  H'0091'
ANSEL0           EQU  H'0091'
PR2              EQU  H'0092'
ANSEL1           EQU  H'0093'
WPU              EQU  H'0095'
WPUA             EQU  H'0095'
IOC              EQU  H'0096'
IOCA             EQU  H'0096'
REFCON           EQU  H'0098'
VRCON            EQU  H'0099'
EEDAT            EQU  H'009A'
EEDATA           EQU  H'009A'
EEADR            EQU  H'009B'
EECON1           EQU  H'009C'
EECON2           EQU  H'009D'
ADRESL           EQU  H'009E'
ADCON1           EQU  H'009F'

;-----Bank2------------------
PWMCON1          EQU  H'0110'
PWMCON0          EQU  H'0111'
PWMCLK           EQU  H'0112'
PWMPH1           EQU  H'0113'
PWMPH2           EQU  H'0114'
CM1CON0          EQU  H'0119'
CM2CON0          EQU  H'011A'
CM2CON1          EQU  H'011B'
OPA1CON          EQU  H'011C'
OPA2CON          EQU  H'011D'

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
TMR2IF           EQU  H'0001'
OSFIF            EQU  H'0002'
C1IF             EQU  H'0003'
C2IF             EQU  H'0004'
CCP1IF           EQU  H'0005'
ADIF             EQU  H'0006'
EEIF             EQU  H'0007'

T1IF             EQU  H'0000'
T2IF             EQU  H'0001'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
TMR1CS           EQU  H'0001'
NOT_T1SYNC       EQU  H'0002'
T1OSCEN          EQU  H'0003'
TMR1GE           EQU  H'0006'
T1GINV           EQU  H'0007'

T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'
T1GE             EQU  H'0006'


;----- T2CON Bits -----------------------------------------------------
TMR2ON           EQU  H'0002'

T2CKPS0          EQU  H'0000'
T2CKPS1          EQU  H'0001'
TOUTPS0          EQU  H'0003'
TOUTPS1          EQU  H'0004'
TOUTPS2          EQU  H'0005'
TOUTPS3          EQU  H'0006'


;----- CCP1CON Bits -----------------------------------------------------
CCP1M0           EQU  H'0000'
CCP1M1           EQU  H'0001'
CCP1M2           EQU  H'0002'
CCP1M3           EQU  H'0003'
DC1B0            EQU  H'0004'
DC1B1            EQU  H'0005'


;----- WDTCON Bits -----------------------------------------------------
SWDTEN           EQU  H'0000'

WDTPS0           EQU  H'0001'
WDTPS1           EQU  H'0002'
WDTPS2           EQU  H'0003'
WDTPS3           EQU  H'0004'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'
VCFG             EQU  H'0006'
ADFM             EQU  H'0007'

GO               EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'

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


;----- TRISB Bits -----------------------------------------------------
TRISB4           EQU  H'0004'
TRISB5           EQU  H'0005'
TRISB6           EQU  H'0006'
TRISB7           EQU  H'0007'


;----- TRISC Bits -----------------------------------------------------
TRISC0           EQU  H'0000'
TRISC1           EQU  H'0001'
TRISC2           EQU  H'0002'
TRISC3           EQU  H'0003'
TRISC4           EQU  H'0004'
TRISC5           EQU  H'0005'
TRISC6           EQU  H'0006'
TRISC7           EQU  H'0007'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
OSFIE            EQU  H'0002'
C1IE             EQU  H'0003'
C2IE             EQU  H'0004'
CCP1IE           EQU  H'0005'
ADIE             EQU  H'0006'
EEIE             EQU  H'0007'

T1IE             EQU  H'0000'
T2IE             EQU  H'0001'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'
SBOREN           EQU  H'0004'

NOT_BOD          EQU  H'0000'
SBODEN           EQU  H'0004'


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


;----- ANSEL0 Bits -----------------------------------------------------
ANS0             EQU  H'0000'
ANS1             EQU  H'0001'
ANS2             EQU  H'0002'
ANS3             EQU  H'0003'
ANS4             EQU  H'0004'
ANS5             EQU  H'0005'
ANS6             EQU  H'0006'
ANS7             EQU  H'0007'


;----- ANSEL1 Bits -----------------------------------------------------
ANS8             EQU  H'0000'
ANS9             EQU  H'0001'
ANS10            EQU  H'0002'
ANS11            EQU  H'0003'


;----- WPU Bits -----------------------------------------------------
WPUA0            EQU  H'0000'
WPUA1            EQU  H'0001'
WPUA2            EQU  H'0002'
WPUA3            EQU  H'0003'
WPUA4            EQU  H'0004'
WPUA5            EQU  H'0005'

WPU0             EQU  H'0000'
WPU1             EQU  H'0001'
WPU2             EQU  H'0002'
WPU3             EQU  H'0003'
WPU4             EQU  H'0004'
WPU5             EQU  H'0005'


;----- WPUA Bits -----------------------------------------------------
WPUA0            EQU  H'0000'
WPUA1            EQU  H'0001'
WPUA2            EQU  H'0002'
WPUA3            EQU  H'0003'
WPUA4            EQU  H'0004'
WPUA5            EQU  H'0005'

WPU0             EQU  H'0000'
WPU1             EQU  H'0001'
WPU2             EQU  H'0002'
WPU3             EQU  H'0003'
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


;----- REFCON Bits -----------------------------------------------------
CVROE            EQU  H'0001'
VROE             EQU  H'0002'
VREN             EQU  H'0003'
VRBB             EQU  H'0004'
BGST             EQU  H'0005'


;----- VRCON Bits -----------------------------------------------------
VR0              EQU  H'0000'
VR1              EQU  H'0001'
VR2              EQU  H'0002'
VR3              EQU  H'0003'
VRR              EQU  H'0005'
C2VREN           EQU  H'0006'
C1VREN           EQU  H'0007'


;----- EECON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'


;----- ADCON1 Bits -----------------------------------------------------
ADCS0            EQU  H'0004'
ADCS1            EQU  H'0005'
ADCS2            EQU  H'0006'


;----- PWMCON1 Bits -----------------------------------------------------
OVRLP            EQU  H'0007'

CMDLY0           EQU  H'0000'
CMDLY1           EQU  H'0001'
CMDLY2           EQU  H'0002'
CMDLY3           EQU  H'0003'
CMDLY4           EQU  H'0004'
COMOD0           EQU  H'0005'
COMOD1           EQU  H'0006'


;----- PWMCON0 Bits -----------------------------------------------------
PH1EN            EQU  H'0000'
PH2EN            EQU  H'0001'
BLANK1           EQU  H'0004'
BLANK2           EQU  H'0005'
PASEN            EQU  H'0006'
PRSEN            EQU  H'0007'

SYNC0            EQU  H'0002'
SYNC1            EQU  H'0003'


;----- PWMCLK Bits -----------------------------------------------------
PWMASE           EQU  H'0007'

PER0             EQU  H'0000'
PER1             EQU  H'0001'
PER2             EQU  H'0002'
PER3             EQU  H'0003'
PER4             EQU  H'0004'
PWMP0            EQU  H'0005'
PWMP1            EQU  H'0006'


;----- PWMPH1 Bits -----------------------------------------------------
C1EN             EQU  H'0005'
C2EN             EQU  H'0006'
POL              EQU  H'0007'

PH0              EQU  H'0000'
PH1              EQU  H'0001'
PH2              EQU  H'0002'
PH3              EQU  H'0003'
PH4              EQU  H'0004'


;----- PWMPH2 Bits -----------------------------------------------------
C1EN             EQU  H'0005'
C2EN             EQU  H'0006'
POL              EQU  H'0007'

PH0              EQU  H'0000'
PH1              EQU  H'0001'
PH2              EQU  H'0002'
PH3              EQU  H'0003'
PH4              EQU  H'0004'


;----- CM1CON0 Bits -----------------------------------------------------
C1R              EQU  H'0002'
C1SP             EQU  H'0003'
C1POL            EQU  H'0004'
C1OE             EQU  H'0005'
C1OUT            EQU  H'0006'
C1ON             EQU  H'0007'

C1CH0            EQU  H'0000'
C1CH1            EQU  H'0001'


;----- CM2CON0 Bits -----------------------------------------------------
C2R              EQU  H'0002'
C2SP             EQU  H'0003'
C2POL            EQU  H'0004'
C2OE             EQU  H'0005'
C2OUT            EQU  H'0006'
C2ON             EQU  H'0007'

C2CH0            EQU  H'0000'
C2CH1            EQU  H'0001'


;----- CM2CON1 Bits -----------------------------------------------------
C2SYNC           EQU  H'0000'
T1GSS            EQU  H'0001'
MC2OUT           EQU  H'0006'
MC1OUT           EQU  H'0007'


;----- OPA1CON Bits -----------------------------------------------------
OPAON            EQU  H'0007'


;----- OPA2CON Bits -----------------------------------------------------
OPAON            EQU  H'0007'




;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'01FF'
       __BADRAM  H'0008'-H'0009'
       __BADRAM  H'000D'
       __BADRAM  H'0016'-H'0017'
       __BADRAM  H'0019'-H'001D'
       __BADRAM  H'0088'-H'0089'
       __BADRAM  H'008D'
       __BADRAM  H'0094'
       __BADRAM  H'0097'
       __BADRAM  H'00C0'-H'00EF'
       __BADRAM  H'0108'-H'0109'
       __BADRAM  H'010C'-H'010F'
       __BADRAM  H'0115'-H'0118'
       __BADRAM  H'011E'-H'011F'
       __BADRAM  H'0120'-H'016F'
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
_BOR_SBOREN          EQU  H'3DFF'    ; BOR controlled by SBOREN bit of the PCON register
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
