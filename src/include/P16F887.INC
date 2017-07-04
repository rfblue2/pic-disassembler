        LIST

;==========================================================================
;  MPASM PIC16F887 processor include
; 
;  (c) Copyright 1999-2013 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16F887 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16F887
;       2. LIST directive in the source file
;               LIST   P=PIC16F887
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16F887
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
PORTD            EQU  H'0008'
PORTE            EQU  H'0009'
PCLATH           EQU  H'000A'
INTCON           EQU  H'000B'
PIR1             EQU  H'000C'
PIR2             EQU  H'000D'
TMR1             EQU  H'000E'
TMR1L            EQU  H'000E'
TMR1H            EQU  H'000F'
T1CON            EQU  H'0010'
TMR2             EQU  H'0011'
T2CON            EQU  H'0012'
SSPBUF           EQU  H'0013'
SSPCON           EQU  H'0014'
CCPR1            EQU  H'0015'
CCPR1L           EQU  H'0015'
CCPR1H           EQU  H'0016'
CCP1CON          EQU  H'0017'
RCSTA            EQU  H'0018'
TXREG            EQU  H'0019'
RCREG            EQU  H'001A'
CCPR2            EQU  H'001B'
CCPR2L           EQU  H'001B'
CCPR2H           EQU  H'001C'
CCP2CON          EQU  H'001D'
ADRESH           EQU  H'001E'
ADCON0           EQU  H'001F'

;-----Bank1------------------
OPTION_REG       EQU  H'0081'
TRISA            EQU  H'0085'
TRISB            EQU  H'0086'
TRISC            EQU  H'0087'
TRISD            EQU  H'0088'
TRISE            EQU  H'0089'
PIE1             EQU  H'008C'
PIE2             EQU  H'008D'
PCON             EQU  H'008E'
OSCCON           EQU  H'008F'
OSCTUNE          EQU  H'0090'
SSPCON2          EQU  H'0091'
PR2              EQU  H'0092'
MSK              EQU  H'0093'
SSPADD           EQU  H'0093'
SSPMSK           EQU  H'0093'
SSPSTAT          EQU  H'0094'
WPUB             EQU  H'0095'
IOCB             EQU  H'0096'
VRCON            EQU  H'0097'
TXSTA            EQU  H'0098'
SPBRG            EQU  H'0099'
SPBRGH           EQU  H'009A'
PWM1CON          EQU  H'009B'
ECCPAS           EQU  H'009C'
PSTRCON          EQU  H'009D'
ADRESL           EQU  H'009E'
ADCON1           EQU  H'009F'

;-----Bank2------------------
WDTCON           EQU  H'0105'
CM1CON0          EQU  H'0107'
CM2CON0          EQU  H'0108'
CM2CON1          EQU  H'0109'
EEDAT            EQU  H'010C'
EEDATA           EQU  H'010C'
EEADR            EQU  H'010D'
EEDATH           EQU  H'010E'
EEADRH           EQU  H'010F'

;-----Bank3------------------
SRCON            EQU  H'0185'
BAUDCTL          EQU  H'0187'
ANSEL            EQU  H'0188'
ANSELH           EQU  H'0189'
EECON1           EQU  H'018C'
EECON2           EQU  H'018D'

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


;----- PORTC Bits -----------------------------------------------------
RC0              EQU  H'0000'
RC1              EQU  H'0001'
RC2              EQU  H'0002'
RC3              EQU  H'0003'
RC4              EQU  H'0004'
RC5              EQU  H'0005'
RC6              EQU  H'0006'
RC7              EQU  H'0007'


;----- PORTD Bits -----------------------------------------------------
RD0              EQU  H'0000'
RD1              EQU  H'0001'
RD2              EQU  H'0002'
RD3              EQU  H'0003'
RD4              EQU  H'0004'
RD5              EQU  H'0005'
RD6              EQU  H'0006'
RD7              EQU  H'0007'


;----- PORTE Bits -----------------------------------------------------
RE0              EQU  H'0000'
RE1              EQU  H'0001'
RE2              EQU  H'0002'
RE3              EQU  H'0003'


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
SSPIF            EQU  H'0003'
TXIF             EQU  H'0004'
RCIF             EQU  H'0005'
ADIF             EQU  H'0006'


;----- PIR2 Bits -----------------------------------------------------
CCP2IF           EQU  H'0000'
ULPWUIF          EQU  H'0002'
BCLIF            EQU  H'0003'
EEIF             EQU  H'0004'
C1IF             EQU  H'0005'
C2IF             EQU  H'0006'
OSFIF            EQU  H'0007'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
TMR1CS           EQU  H'0001'
NOT_T1SYNC       EQU  H'0002'
T1OSCEN          EQU  H'0003'
TMR1GE           EQU  H'0006'
T1GINV           EQU  H'0007'

T1INSYNC         EQU  H'0002'
T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'
T1GIV            EQU  H'0007'

T1SYNC           EQU  H'0002'


;----- T2CON Bits -----------------------------------------------------
TMR2ON           EQU  H'0002'

T2CKPS0          EQU  H'0000'
T2CKPS1          EQU  H'0001'
TOUTPS0          EQU  H'0003'
TOUTPS1          EQU  H'0004'
TOUTPS2          EQU  H'0005'
TOUTPS3          EQU  H'0006'


;----- SSPCON Bits -----------------------------------------------------
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'

SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'


;----- CCP1CON Bits -----------------------------------------------------
CCP1M0           EQU  H'0000'
CCP1M1           EQU  H'0001'
CCP1M2           EQU  H'0002'
CCP1M3           EQU  H'0003'
DC1B0            EQU  H'0004'
DC1B1            EQU  H'0005'
P1M0             EQU  H'0006'
P1M1             EQU  H'0007'

CCP1Y            EQU  H'0004'
CCP1X            EQU  H'0005'


;----- RCSTA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'

RCD8             EQU  H'0000'
RC9              EQU  H'0006'

NOT_RC8          EQU  H'0006'

RC8_9            EQU  H'0006'


;----- CCP2CON Bits -----------------------------------------------------
DC2B0            EQU  H'0004'
DC2B1            EQU  H'0005'

CCP2M0           EQU  H'0000'
CCP2M1           EQU  H'0001'
CCP2M2           EQU  H'0002'
CCP2M3           EQU  H'0003'
CCP2Y            EQU  H'0004'
CCP2X            EQU  H'0005'


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

GO_DONE          EQU  H'0001'


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


;----- TRISC Bits -----------------------------------------------------
TRISC0           EQU  H'0000'
TRISC1           EQU  H'0001'
TRISC2           EQU  H'0002'
TRISC3           EQU  H'0003'
TRISC4           EQU  H'0004'
TRISC5           EQU  H'0005'
TRISC6           EQU  H'0006'
TRISC7           EQU  H'0007'


;----- TRISD Bits -----------------------------------------------------
TRISD0           EQU  H'0000'
TRISD1           EQU  H'0001'
TRISD2           EQU  H'0002'
TRISD3           EQU  H'0003'
TRISD4           EQU  H'0004'
TRISD5           EQU  H'0005'
TRISD6           EQU  H'0006'
TRISD7           EQU  H'0007'


;----- TRISE Bits -----------------------------------------------------
TRISE0           EQU  H'0000'
TRISE1           EQU  H'0001'
TRISE2           EQU  H'0002'
TRISE3           EQU  H'0003'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
CCP1IE           EQU  H'0002'
SSPIE            EQU  H'0003'
TXIE             EQU  H'0004'
RCIE             EQU  H'0005'
ADIE             EQU  H'0006'


;----- PIE2 Bits -----------------------------------------------------
CCP2IE           EQU  H'0000'
ULPWUIE          EQU  H'0002'
BCLIE            EQU  H'0003'
EEIE             EQU  H'0004'
C1IE             EQU  H'0005'
C2IE             EQU  H'0006'
OSFIE            EQU  H'0007'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'
SBOREN           EQU  H'0004'
ULPWUE           EQU  H'0005'

NOT_BO           EQU  H'0000'


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


;----- SSPCON2 Bits -----------------------------------------------------
SEN              EQU  H'0000'
RSEN             EQU  H'0001'
PEN              EQU  H'0002'
RCEN             EQU  H'0003'
ACKEN            EQU  H'0004'
ACKDT            EQU  H'0005'
ACKSTAT          EQU  H'0006'
GCEN             EQU  H'0007'


;----- MSK Bits -----------------------------------------------------
MSK0             EQU  H'0000'
MSK1             EQU  H'0001'
MSK2             EQU  H'0002'
MSK3             EQU  H'0003'
MSK4             EQU  H'0004'
MSK5             EQU  H'0005'
MSK6             EQU  H'0006'
MSK7             EQU  H'0007'


;----- SSPMSK Bits -----------------------------------------------------
MSK0             EQU  H'0000'
MSK1             EQU  H'0001'
MSK2             EQU  H'0002'
MSK3             EQU  H'0003'
MSK4             EQU  H'0004'
MSK5             EQU  H'0005'
MSK6             EQU  H'0006'
MSK7             EQU  H'0007'


;----- SSPSTAT Bits -----------------------------------------------------
BF               EQU  H'0000'
UA               EQU  H'0001'
R_NOT_W          EQU  H'0002'
S                EQU  H'0003'
P                EQU  H'0004'
D_NOT_A          EQU  H'0005'
CKE              EQU  H'0006'
SMP              EQU  H'0007'

R                EQU  H'0002'
D                EQU  H'0005'

I2C_READ         EQU  H'0002'
I2C_START        EQU  H'0003'
I2C_STOP         EQU  H'0004'
I2C_DATA         EQU  H'0005'

NOT_W            EQU  H'0002'
NOT_A            EQU  H'0005'

NOT_WRITE        EQU  H'0002'
NOT_ADDRESS      EQU  H'0005'

R_W              EQU  H'0002'
D_A              EQU  H'0005'

READ_WRITE       EQU  H'0002'
DATA_ADDRESS     EQU  H'0005'


;----- WPUB Bits -----------------------------------------------------
WPUB0            EQU  H'0000'
WPUB1            EQU  H'0001'
WPUB2            EQU  H'0002'
WPUB3            EQU  H'0003'
WPUB4            EQU  H'0004'
WPUB5            EQU  H'0005'
WPUB6            EQU  H'0006'
WPUB7            EQU  H'0007'


;----- IOCB Bits -----------------------------------------------------
IOCB0            EQU  H'0000'
IOCB1            EQU  H'0001'
IOCB2            EQU  H'0002'
IOCB3            EQU  H'0003'
IOCB4            EQU  H'0004'
IOCB5            EQU  H'0005'
IOCB6            EQU  H'0006'
IOCB7            EQU  H'0007'


;----- VRCON Bits -----------------------------------------------------
VRSS             EQU  H'0004'
VRR              EQU  H'0005'
VROE             EQU  H'0006'
VREN             EQU  H'0007'

VR0              EQU  H'0000'
VR1              EQU  H'0001'
VR2              EQU  H'0002'
VR3              EQU  H'0003'


;----- TXSTA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'

TXD8             EQU  H'0000'
NOT_TX8          EQU  H'0006'

TX8_9            EQU  H'0006'


;----- SPBRG Bits -----------------------------------------------------
BRG0             EQU  H'0000'
BRG1             EQU  H'0001'
BRG2             EQU  H'0002'
BRG3             EQU  H'0003'
BRG4             EQU  H'0004'
BRG5             EQU  H'0005'
BRG6             EQU  H'0006'
BRG7             EQU  H'0007'


;----- SPBRGH Bits -----------------------------------------------------
BRG8             EQU  H'0000'
BRG9             EQU  H'0001'
BRG10            EQU  H'0002'
BRG11            EQU  H'0003'
BRG12            EQU  H'0004'
BRG13            EQU  H'0005'
BRG14            EQU  H'0006'
BRG15            EQU  H'0007'


;----- PWM1CON Bits -----------------------------------------------------
PRSEN            EQU  H'0007'

PDC0             EQU  H'0000'
PDC1             EQU  H'0001'
PDC2             EQU  H'0002'
PDC3             EQU  H'0003'
PDC4             EQU  H'0004'
PDC5             EQU  H'0005'
PDC6             EQU  H'0006'


;----- ECCPAS Bits -----------------------------------------------------
ECCPASE          EQU  H'0007'

PSSBD0           EQU  H'0000'
PSSBD1           EQU  H'0001'
PSSAC0           EQU  H'0002'
PSSAC1           EQU  H'0003'
ECCPAS0          EQU  H'0004'
ECCPAS1          EQU  H'0005'
ECCPAS2          EQU  H'0006'


;----- PSTRCON Bits -----------------------------------------------------
STRA             EQU  H'0000'
STRB             EQU  H'0001'
STRC             EQU  H'0002'
STRD             EQU  H'0003'
STRSYNC          EQU  H'0004'


;----- ADCON1 Bits -----------------------------------------------------
VCFG0            EQU  H'0004'
VCFG1            EQU  H'0005'
ADFM             EQU  H'0007'


;----- WDTCON Bits -----------------------------------------------------
SWDTEN           EQU  H'0000'

WDTPS0           EQU  H'0001'
WDTPS1           EQU  H'0002'
WDTPS2           EQU  H'0003'
WDTPS3           EQU  H'0004'


;----- CM1CON0 Bits -----------------------------------------------------
C1R              EQU  H'0002'
C1POL            EQU  H'0004'
C1OE             EQU  H'0005'
C1OUT            EQU  H'0006'
C1ON             EQU  H'0007'

C1CH0            EQU  H'0000'
C1CH1            EQU  H'0001'


;----- CM2CON0 Bits -----------------------------------------------------
C2R              EQU  H'0002'
C2POL            EQU  H'0004'
C2OE             EQU  H'0005'
C2OUT            EQU  H'0006'
C2ON             EQU  H'0007'

C2CH0            EQU  H'0000'
C2CH1            EQU  H'0001'


;----- CM2CON1 Bits -----------------------------------------------------
C2SYNC           EQU  H'0000'
T1GSS            EQU  H'0001'
C2RSEL           EQU  H'0004'
C1RSEL           EQU  H'0005'
MC2OUT           EQU  H'0006'
MC1OUT           EQU  H'0007'


;----- SRCON Bits -----------------------------------------------------
FVREN            EQU  H'0000'
PULSR            EQU  H'0002'
PULSS            EQU  H'0003'
C2REN            EQU  H'0004'
C1SEN            EQU  H'0005'
SR0              EQU  H'0006'
SR1              EQU  H'0007'


;----- BAUDCTL Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
SCKP             EQU  H'0004'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- ANSEL Bits -----------------------------------------------------
ANS0             EQU  H'0000'
ANS1             EQU  H'0001'
ANS2             EQU  H'0002'
ANS3             EQU  H'0003'
ANS4             EQU  H'0004'
ANS5             EQU  H'0005'
ANS6             EQU  H'0006'
ANS7             EQU  H'0007'


;----- ANSELH Bits -----------------------------------------------------
ANS8             EQU  H'0000'
ANS9             EQU  H'0001'
ANS10            EQU  H'0002'
ANS11            EQU  H'0003'
ANS12            EQU  H'0004'
ANS13            EQU  H'0005'


;----- EECON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
EEPGD            EQU  H'0007'




;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'01FF'
       __BADRAM  H'018E'-H'018F'

;==========================================================================
;
;       Configuration Bits
;
;   NAME            Address
;   CONFIG1           2007h
;   CONFIG2           2008h
;
;==========================================================================

; The following is an assignment of address values for all of the
; configuration registers for the purpose of table reads
_CONFIG1         EQU  H'2007'
_CONFIG2         EQU  H'2008'

;----- CONFIG1 Options --------------------------------------------------
_FOSC_LP             EQU  H'3FF8'    ; LP oscillator: Low-power crystal on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN
_LP_OSC              EQU  H'3FF8'    ; LP oscillator: Low-power crystal on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN
_FOSC_XT             EQU  H'3FF9'    ; XT oscillator: Crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN
_XT_OSC              EQU  H'3FF9'    ; XT oscillator: Crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN
_FOSC_HS             EQU  H'3FFA'    ; HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN
_HS_OSC              EQU  H'3FFA'    ; HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN
_FOSC_EC             EQU  H'3FFB'    ; EC: I/O function on RA6/OSC2/CLKOUT pin, CLKIN on RA7/OSC1/CLKIN
_EC_OSC              EQU  H'3FFB'    ; EC: I/O function on RA6/OSC2/CLKOUT pin, CLKIN on RA7/OSC1/CLKIN
_FOSC_INTRC_NOCLKOUT EQU  H'3FFC'    ; INTOSCIO oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN
_INTRC_OSC_NOCLKOUT  EQU  H'3FFC'    ; INTOSCIO oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN
_INTOSCIO            EQU  H'3FFC'    ; INTOSCIO oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN
_FOSC_INTRC_CLKOUT   EQU  H'3FFD'    ; INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN
_INTRC_OSC_CLKOUT    EQU  H'3FFD'    ; INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN
_INTOSC              EQU  H'3FFD'    ; INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN
_FOSC_EXTRC_NOCLKOUT EQU  H'3FFE'    ; RCIO oscillator: I/O function on RA6/OSC2/CLKOUT pin, RC on RA7/OSC1/CLKIN
_EXTRC_OSC_NOCLKOUT  EQU  H'3FFE'    ; RCIO oscillator: I/O function on RA6/OSC2/CLKOUT pin, RC on RA7/OSC1/CLKIN
_EXTRCIO             EQU  H'3FFE'    ; RCIO oscillator: I/O function on RA6/OSC2/CLKOUT pin, RC on RA7/OSC1/CLKIN
_FOSC_EXTRC_CLKOUT   EQU  H'3FFF'    ; RC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, RC on RA7/OSC1/CLKIN
_EXTRC_OSC_CLKOUT    EQU  H'3FFF'    ; RC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, RC on RA7/OSC1/CLKIN
_EXTRC               EQU  H'3FFF'    ; RC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, RC on RA7/OSC1/CLKIN

_WDTE_OFF            EQU  H'3FF7'    ; WDT disabled and can be enabled by SWDTEN bit of the WDTCON register
_WDT_OFF             EQU  H'3FF7'    ; WDT disabled and can be enabled by SWDTEN bit of the WDTCON register
_WDTE_ON             EQU  H'3FFF'    ; WDT enabled
_WDT_ON              EQU  H'3FFF'    ; WDT enabled

_PWRTE_ON            EQU  H'3FEF'    ; PWRT enabled
_PWRTE_OFF           EQU  H'3FFF'    ; PWRT disabled

_MCLRE_OFF           EQU  H'3FDF'    ; RE3/MCLR pin function is digital input, MCLR internally tied to VDD
_MCLRE_ON            EQU  H'3FFF'    ; RE3/MCLR pin function is MCLR

_CP_ON               EQU  H'3FBF'    ; Program memory code protection is enabled
_CP_OFF              EQU  H'3FFF'    ; Program memory code protection is disabled

_CPD_ON              EQU  H'3F7F'    ; Data memory code protection is enabled
_CPD_OFF             EQU  H'3FFF'    ; Data memory code protection is disabled

_BOREN_OFF           EQU  H'3CFF'    ; BOR disabled
_BOR_OFF             EQU  H'3CFF'    ; BOR disabled
_BOREN_SBODEN        EQU  H'3DFF'    ; BOR controlled by SBOREN bit of the PCON register
_BOR_SBODEN          EQU  H'3DFF'    ; BOR controlled by SBOREN bit of the PCON register
_BOREN_NSLEEP        EQU  H'3EFF'    ; BOR enabled during operation and disabled in Sleep
_BOR_NSLEEP          EQU  H'3EFF'    ; BOR enabled during operation and disabled in Sleep
_BOREN_ON            EQU  H'3FFF'    ; BOR enabled
_BOR_ON              EQU  H'3FFF'    ; BOR enabled

_IESO_OFF            EQU  H'3BFF'    ; Internal/External Switchover mode is disabled
_IESO_ON             EQU  H'3FFF'    ; Internal/External Switchover mode is enabled

_FCMEN_OFF           EQU  H'37FF'    ; Fail-Safe Clock Monitor is disabled
_FCMEN_ON            EQU  H'3FFF'    ; Fail-Safe Clock Monitor is enabled

_LVP_OFF             EQU  H'2FFF'    ; RB3 pin has digital I/O, HV on MCLR must be used for programming
_LVP_ON              EQU  H'3FFF'    ; RB3/PGM pin has PGM function, low voltage programming enabled

_DEBUG_ON            EQU  H'1FFF'    ; In_Circuit Debugger enabled, RB6/ICSPCLK and RB7/ICSPDAT are dedicated to the debugger
_DEBUG_OFF           EQU  H'3FFF'    ; In-Circuit Debugger disabled, RB6/ICSPCLK and RB7/ICSPDAT are general purpose I/O pins

;----- CONFIG2 Options --------------------------------------------------
_BOR4V_BOR21V        EQU  H'3EFF'    ; Brown-out Reset set to 2.1V
_BOR21V              EQU  H'3EFF'    ; Brown-out Reset set to 2.1V
_BOR4V_BOR40V        EQU  H'3FFF'    ; Brown-out Reset set to 4.0V
_BOR40V              EQU  H'3FFF'    ; Brown-out Reset set to 4.0V

_WRT_HALF            EQU  H'39FF'    ; 0000h to 0FFFh write protected, 1000h to 1FFFh may be modified by EECON control
_WRT_1FOURTH         EQU  H'3BFF'    ; 0000h to 07FFh write protected, 0800h to 1FFFh may be modified by EECON control
_WRT_256             EQU  H'3DFF'    ; 0000h to 00FFh write protected, 0100h to 1FFFh may be modified by EECON control
_WRT_OFF             EQU  H'3FFF'    ; Write protection off

;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'2006'

;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'2000'
_IDLOC1          EQU  H'2001'
_IDLOC2          EQU  H'2002'
_IDLOC3          EQU  H'2003'

        LIST
