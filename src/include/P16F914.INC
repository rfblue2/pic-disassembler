        LIST

;==========================================================================
;  MPASM PIC16F914 processor include
; 
;  (c) Copyright 1999-2013 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16F914 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16F914
;       2. LIST directive in the source file
;               LIST   P=PIC16F914
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16F914
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
ANSEL            EQU  H'0091'
PR2              EQU  H'0092'
SSPADD           EQU  H'0093'
SSPSTAT          EQU  H'0094'
WPU              EQU  H'0095'
WPUB             EQU  H'0095'
IOC              EQU  H'0096'
IOCB             EQU  H'0096'
CMCON1           EQU  H'0097'
TXSTA            EQU  H'0098'
SPBRG            EQU  H'0099'
CMCON0           EQU  H'009C'
VRCON            EQU  H'009D'
ADRESL           EQU  H'009E'
ADCON1           EQU  H'009F'

;-----Bank2------------------
WDTCON           EQU  H'0105'
LCDCON           EQU  H'0107'
LCDPS            EQU  H'0108'
LVDCON           EQU  H'0109'
EEDATA           EQU  H'010C'
EEDATL           EQU  H'010C'
EEADR            EQU  H'010D'
EEADRL           EQU  H'010D'
EEDATH           EQU  H'010E'
EEADRH           EQU  H'010F'
LCDDATA0         EQU  H'0110'
LCDDATA1         EQU  H'0111'
LCDDATA2         EQU  H'0112'
LCDDATA3         EQU  H'0113'
LCDDATA4         EQU  H'0114'
LCDDATA5         EQU  H'0115'
LCDDATA6         EQU  H'0116'
LCDDATA7         EQU  H'0117'
LCDDATA8         EQU  H'0118'
LCDDATA9         EQU  H'0119'
LCDDATA10        EQU  H'011A'
LCDDATA11        EQU  H'011B'
LCDSE0           EQU  H'011C'
LCDSE1           EQU  H'011D'
LCDSE2           EQU  H'011E'

;-----Bank3------------------
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
TMR0IF           EQU  H'0002'
RBIE             EQU  H'0003'
INTE             EQU  H'0004'
TMR0IE           EQU  H'0005'
PEIE             EQU  H'0006'
GIE              EQU  H'0007'

T0IF             EQU  H'0002'
T0IE             EQU  H'0005'


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
CCP1IF           EQU  H'0002'
SSPIF            EQU  H'0003'
TXIF             EQU  H'0004'
RCIF             EQU  H'0005'
ADIF             EQU  H'0006'
EEIF             EQU  H'0007'


;----- PIR2 Bits -----------------------------------------------------
CCP2IF           EQU  H'0000'
LVDIF            EQU  H'0002'
LCDIF            EQU  H'0004'
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

T1SYNC           EQU  H'0002'
T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'
T1GE             EQU  H'0006'

T1INSYNC         EQU  H'0002'


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
CCP2Y            EQU  H'0004'
CCP2X            EQU  H'0005'

CCP2M0           EQU  H'0000'
CCP2M1           EQU  H'0001'
CCP2M2           EQU  H'0002'
CCP2M3           EQU  H'0003'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'
ADFM             EQU  H'0007'

NOT_DONE         EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
VCFG0            EQU  H'0005'
VCFG1            EQU  H'0006'

GO_DONE          EQU  H'0001'

GO               EQU  H'0001'


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
EEIE             EQU  H'0007'


;----- PIE2 Bits -----------------------------------------------------
CCP2IE           EQU  H'0000'
LVDIE            EQU  H'0002'
LCDIE            EQU  H'0004'
C1IE             EQU  H'0005'
C2IE             EQU  H'0006'
OSFIE            EQU  H'0007'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'
SBOREN           EQU  H'0004'

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


;----- ANSEL Bits -----------------------------------------------------
ANS0             EQU  H'0000'
ANS1             EQU  H'0001'
ANS2             EQU  H'0002'
ANS3             EQU  H'0003'
ANS4             EQU  H'0004'
ANS5             EQU  H'0005'
ANS6             EQU  H'0006'
ANS7             EQU  H'0007'

AN0              EQU  H'0000'
AN1              EQU  H'0001'
AN2              EQU  H'0002'
AN3              EQU  H'0003'
AN4              EQU  H'0004'
AN5              EQU  H'0005'
AN6              EQU  H'0006'
AN7              EQU  H'0007'


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


;----- WPU Bits -----------------------------------------------------
WPUB0            EQU  H'0000'
WPUB1            EQU  H'0001'
WPUB2            EQU  H'0002'
WPUB3            EQU  H'0003'
WPUB4            EQU  H'0004'
WPUB5            EQU  H'0005'
WPUB6            EQU  H'0006'
WPUB7            EQU  H'0007'

WPU0             EQU  H'0000'
WPU1             EQU  H'0001'
WPU2             EQU  H'0002'
WPU3             EQU  H'0003'
WPU4             EQU  H'0004'
WPU5             EQU  H'0005'
WPU6             EQU  H'0006'
WPU7             EQU  H'0007'


;----- WPUB Bits -----------------------------------------------------
WPUB0            EQU  H'0000'
WPUB1            EQU  H'0001'
WPUB2            EQU  H'0002'
WPUB3            EQU  H'0003'
WPUB4            EQU  H'0004'
WPUB5            EQU  H'0005'
WPUB6            EQU  H'0006'
WPUB7            EQU  H'0007'

WPU0             EQU  H'0000'
WPU1             EQU  H'0001'
WPU2             EQU  H'0002'
WPU3             EQU  H'0003'
WPU4             EQU  H'0004'
WPU5             EQU  H'0005'
WPU6             EQU  H'0006'
WPU7             EQU  H'0007'


;----- IOC Bits -----------------------------------------------------
IOCB4            EQU  H'0004'
IOCB5            EQU  H'0005'
IOCB6            EQU  H'0006'
IOCB7            EQU  H'0007'

IOC4             EQU  H'0004'
IOC5             EQU  H'0005'
IOC6             EQU  H'0006'
IOC7             EQU  H'0007'


;----- IOCB Bits -----------------------------------------------------
IOCB4            EQU  H'0004'
IOCB5            EQU  H'0005'
IOCB6            EQU  H'0006'
IOCB7            EQU  H'0007'

IOC4             EQU  H'0004'
IOC5             EQU  H'0005'
IOC6             EQU  H'0006'
IOC7             EQU  H'0007'


;----- CMCON1 Bits -----------------------------------------------------
C2SYNC           EQU  H'0000'
T1GSS            EQU  H'0001'


;----- TXSTA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'

TXD8             EQU  H'0000'
NOT_TX8          EQU  H'0006'

TX8_9            EQU  H'0006'


;----- CMCON0 Bits -----------------------------------------------------
CIS              EQU  H'0003'
C1INV            EQU  H'0004'
C2INV            EQU  H'0005'
C1OUT            EQU  H'0006'
C2OUT            EQU  H'0007'

CM0              EQU  H'0000'
CM1              EQU  H'0001'
CM2              EQU  H'0002'


;----- VRCON Bits -----------------------------------------------------
VRR              EQU  H'0005'
VREN             EQU  H'0007'

VR0              EQU  H'0000'
VR1              EQU  H'0001'
VR2              EQU  H'0002'
VR3              EQU  H'0003'


;----- ADCON1 Bits -----------------------------------------------------
ADCS0            EQU  H'0004'
ADCS1            EQU  H'0005'
ADCS2            EQU  H'0006'


;----- WDTCON Bits -----------------------------------------------------
SWDTEN           EQU  H'0000'

SWDTE            EQU  H'0000'
WDTPS0           EQU  H'0001'
WDTPS1           EQU  H'0002'
WDTPS2           EQU  H'0003'
WDTPS3           EQU  H'0004'


;----- LCDCON Bits -----------------------------------------------------
VLCDEN           EQU  H'0004'
WERR             EQU  H'0005'
SLPEN            EQU  H'0006'
LCDEN            EQU  H'0007'

LMUX0            EQU  H'0000'
LMUX1            EQU  H'0001'
CS0              EQU  H'0002'
CS1              EQU  H'0003'


;----- LCDPS Bits -----------------------------------------------------
WA               EQU  H'0004'
LCDA             EQU  H'0005'
BIASMD           EQU  H'0006'
WFT              EQU  H'0007'

LP0              EQU  H'0000'
LP1              EQU  H'0001'
LP2              EQU  H'0002'
LP3              EQU  H'0003'


;----- LVDCON Bits -----------------------------------------------------
LVDEN            EQU  H'0004'
IRVST            EQU  H'0005'

LVDL0            EQU  H'0000'
LVDL1            EQU  H'0001'
LVDL2            EQU  H'0002'


;----- EEDATA Bits -----------------------------------------------------
EEDATL0          EQU  H'0000'
EEDATL1          EQU  H'0001'
EEDATL2          EQU  H'0002'
EEDATL3          EQU  H'0003'
EEDATL4          EQU  H'0004'
EEDATL5          EQU  H'0005'
EEDATL6          EQU  H'0006'
EEDATL7          EQU  H'0007'


;----- EEDATL Bits -----------------------------------------------------
EEDATL0          EQU  H'0000'
EEDATL1          EQU  H'0001'
EEDATL2          EQU  H'0002'
EEDATL3          EQU  H'0003'
EEDATL4          EQU  H'0004'
EEDATL5          EQU  H'0005'
EEDATL6          EQU  H'0006'
EEDATL7          EQU  H'0007'


;----- EEADR Bits -----------------------------------------------------
EEADRL0          EQU  H'0000'
EEADRL1          EQU  H'0001'
EEADRL2          EQU  H'0002'
EEADRL3          EQU  H'0003'
EEADRL4          EQU  H'0004'
EEADRL5          EQU  H'0005'
EEADRL6          EQU  H'0006'
EEADRL7          EQU  H'0007'


;----- EEADRL Bits -----------------------------------------------------
EEADRL0          EQU  H'0000'
EEADRL1          EQU  H'0001'
EEADRL2          EQU  H'0002'
EEADRL3          EQU  H'0003'
EEADRL4          EQU  H'0004'
EEADRL5          EQU  H'0005'
EEADRL6          EQU  H'0006'
EEADRL7          EQU  H'0007'


;----- EEDATH Bits -----------------------------------------------------
EEDATH0          EQU  H'0000'
EEDATH1          EQU  H'0001'
EEDATH2          EQU  H'0002'
EEDATH3          EQU  H'0003'
EEDATH4          EQU  H'0004'
EEDATH5          EQU  H'0005'


;----- EEADRH Bits -----------------------------------------------------
EEADRH0          EQU  H'0000'
EEADRH1          EQU  H'0001'
EEADRH2          EQU  H'0002'
EEADRH3          EQU  H'0003'
EEADRH4          EQU  H'0004'


;----- LCDDATA0 Bits -----------------------------------------------------
SEG0             EQU  H'0000'
SEG1             EQU  H'0001'
SEG2             EQU  H'0002'
SEG3             EQU  H'0003'
SEG4             EQU  H'0004'
SEG5             EQU  H'0005'
SEG6             EQU  H'0006'
SEG7             EQU  H'0007'

SEG0COM0         EQU  H'0000'
SEG1COM0         EQU  H'0001'
SEG2COM0         EQU  H'0002'
SEG3COM0         EQU  H'0003'
SEG4COM0         EQU  H'0004'
SEG5COM0         EQU  H'0005'
SEG6COM0         EQU  H'0006'
SEG7COM0         EQU  H'0007'

S0C0             EQU  H'0000'
S1C0             EQU  H'0001'
S2C0             EQU  H'0002'
S3C0             EQU  H'0003'
S4C0             EQU  H'0004'
S5C0             EQU  H'0005'
S6C0             EQU  H'0006'
S7C0             EQU  H'0007'


;----- LCDDATA1 Bits -----------------------------------------------------
SEG8             EQU  H'0000'
SEG9             EQU  H'0001'
SEG10            EQU  H'0002'
SEG11            EQU  H'0003'
SEG12            EQU  H'0004'
SEG13            EQU  H'0005'
SEG14            EQU  H'0006'
SEG15            EQU  H'0007'

SEG8COM0         EQU  H'0000'
SEG9COM0         EQU  H'0001'
SEG10COM0        EQU  H'0002'
SEG11COM0        EQU  H'0003'
SEG12COM0        EQU  H'0004'
SEG13COM0        EQU  H'0005'
SEG14COM0        EQU  H'0006'
SEG15COM0        EQU  H'0007'

S8C0             EQU  H'0000'
S9C0             EQU  H'0001'
S10C0            EQU  H'0002'
S11C0            EQU  H'0003'
S12C0            EQU  H'0004'
S13C0            EQU  H'0005'
S14C0            EQU  H'0006'
S15C0            EQU  H'0007'


;----- LCDDATA2 Bits -----------------------------------------------------
SEG16            EQU  H'0000'
SEG17            EQU  H'0001'
SEG18            EQU  H'0002'
SEG19            EQU  H'0003'
SEG20            EQU  H'0004'
SEG21            EQU  H'0005'
SEG22            EQU  H'0006'
SEG23            EQU  H'0007'

SEG16COM0        EQU  H'0000'
SEG17COM0        EQU  H'0001'
SEG18COM0        EQU  H'0002'
SEG19COM0        EQU  H'0003'
SEG20COM0        EQU  H'0004'
SEG21COM0        EQU  H'0005'
SEG22COM0        EQU  H'0006'
SEG23COM0        EQU  H'0007'

S16C0            EQU  H'0000'
S17C0            EQU  H'0001'
S18C0            EQU  H'0002'
S19C0            EQU  H'0003'
S20C0            EQU  H'0004'
S21C0            EQU  H'0005'
S22C0            EQU  H'0006'
S23C0            EQU  H'0007'


;----- LCDDATA3 Bits -----------------------------------------------------
SEG0             EQU  H'0000'
SEG1             EQU  H'0001'
SEG2             EQU  H'0002'
SEG3             EQU  H'0003'
SEG4             EQU  H'0004'
SEG5             EQU  H'0005'
SEG6             EQU  H'0006'
SEG7             EQU  H'0007'

SEG0COM1         EQU  H'0000'
SEG1COM1         EQU  H'0001'
SEG2COM1         EQU  H'0002'
SEG3COM1         EQU  H'0003'
SEG4COM1         EQU  H'0004'
SEG5COM1         EQU  H'0005'
SEG6COM1         EQU  H'0006'
SEG7COM1         EQU  H'0007'

S0C1             EQU  H'0000'
S1C1             EQU  H'0001'
S2C1             EQU  H'0002'
S3C1             EQU  H'0003'
S4C1             EQU  H'0004'
S5C1             EQU  H'0005'
S6C1             EQU  H'0006'
S7C1             EQU  H'0007'


;----- LCDDATA4 Bits -----------------------------------------------------
SEG8             EQU  H'0000'
SEG9             EQU  H'0001'
SEG10            EQU  H'0002'
SEG11            EQU  H'0003'
SEG12            EQU  H'0004'
SEG13            EQU  H'0005'
SEG14            EQU  H'0006'
SEG15            EQU  H'0007'

SEG8COM1         EQU  H'0000'
SEG9COM1         EQU  H'0001'
SEG10COM1        EQU  H'0002'
SEG11COM1        EQU  H'0003'
SEG12COM1        EQU  H'0004'
SEG13COM1        EQU  H'0005'
SEG14COM1        EQU  H'0006'
SEG15COM1        EQU  H'0007'

S8C1             EQU  H'0000'
S9C1             EQU  H'0001'
S10C1            EQU  H'0002'
S11C1            EQU  H'0003'
S12C1            EQU  H'0004'
S13C1            EQU  H'0005'
S14C1            EQU  H'0006'
S15C1            EQU  H'0007'


;----- LCDDATA5 Bits -----------------------------------------------------
SEG16            EQU  H'0000'
SEG17            EQU  H'0001'
SEG18            EQU  H'0002'
SEG19            EQU  H'0003'
SEG20            EQU  H'0004'
SEG21            EQU  H'0005'
SEG22            EQU  H'0006'
SEG23            EQU  H'0007'

SEG16COM1        EQU  H'0000'
SEG17COM1        EQU  H'0001'
SEG18COM1        EQU  H'0002'
SEG19COM1        EQU  H'0003'
SEG20COM1        EQU  H'0004'
SEG21COM1        EQU  H'0005'
SEG22COM1        EQU  H'0006'
SEG23COM1        EQU  H'0007'

S16C1            EQU  H'0000'
S17C1            EQU  H'0001'
S18C1            EQU  H'0002'
S19C1            EQU  H'0003'
S20C1            EQU  H'0004'
S21C1            EQU  H'0005'
S22C1            EQU  H'0006'
S23C1            EQU  H'0007'


;----- LCDDATA6 Bits -----------------------------------------------------
SEG0             EQU  H'0000'
SEG1             EQU  H'0001'
SEG2             EQU  H'0002'
SEG3             EQU  H'0003'
SEG4             EQU  H'0004'
SEG5             EQU  H'0005'
SEG6             EQU  H'0006'
SEG7             EQU  H'0007'

SEG0COM2         EQU  H'0000'
SEG1COM2         EQU  H'0001'
SEG2COM2         EQU  H'0002'
SEG3COM2         EQU  H'0003'
SEG4COM2         EQU  H'0004'
SEG5COM2         EQU  H'0005'
SEG6COM2         EQU  H'0006'
SEG7COM2         EQU  H'0007'

S0C2             EQU  H'0000'
S1C2             EQU  H'0001'
S2C2             EQU  H'0002'
S3C2             EQU  H'0003'
S4C2             EQU  H'0004'
S5C2             EQU  H'0005'
S6C2             EQU  H'0006'
S7C2             EQU  H'0007'


;----- LCDDATA7 Bits -----------------------------------------------------
SEG8             EQU  H'0000'
SEG9             EQU  H'0001'
SEG10            EQU  H'0002'
SEG11            EQU  H'0003'
SEG12            EQU  H'0004'
SEG13            EQU  H'0005'
SEG14            EQU  H'0006'
SEG15            EQU  H'0007'

SEG8COM2         EQU  H'0000'
SEG9COM2         EQU  H'0001'
SEG10COM2        EQU  H'0002'
SEG11COM2        EQU  H'0003'
SEG12COM2        EQU  H'0004'
SEG13COM2        EQU  H'0005'
SEG14COM2        EQU  H'0006'
SEG15COM2        EQU  H'0007'

S8C2             EQU  H'0000'
S9C2             EQU  H'0001'
S10C2            EQU  H'0002'
S11C2            EQU  H'0003'
S12C2            EQU  H'0004'
S13C2            EQU  H'0005'
S14C2            EQU  H'0006'
S15C2            EQU  H'0007'


;----- LCDDATA8 Bits -----------------------------------------------------
SEG16            EQU  H'0000'
SEG17            EQU  H'0001'
SEG18            EQU  H'0002'
SEG19            EQU  H'0003'
SEG20            EQU  H'0004'
SEG21            EQU  H'0005'
SEG22            EQU  H'0006'
SEG23            EQU  H'0007'

SEG16COM2        EQU  H'0000'
SEG17COM2        EQU  H'0001'
SEG18COM2        EQU  H'0002'
SEG19COM2        EQU  H'0003'
SEG20COM2        EQU  H'0004'
SEG21COM2        EQU  H'0005'
SEG22COM2        EQU  H'0006'
SEG23COM2        EQU  H'0007'

S16C2            EQU  H'0000'
S17C2            EQU  H'0001'
S18C2            EQU  H'0002'
S19C2            EQU  H'0003'
S20C2            EQU  H'0004'
S21C2            EQU  H'0005'
S22C2            EQU  H'0006'
S23C2            EQU  H'0007'


;----- LCDDATA9 Bits -----------------------------------------------------
SEG0             EQU  H'0000'
SEG1             EQU  H'0001'
SEG2             EQU  H'0002'
SEG3             EQU  H'0003'
SEG4             EQU  H'0004'
SEG5             EQU  H'0005'
SEG6             EQU  H'0006'
SEG7             EQU  H'0007'

SEG0COM3         EQU  H'0000'
SEG1COM3         EQU  H'0001'
SEG2COM3         EQU  H'0002'
SEG3COM3         EQU  H'0003'
SEG4COM3         EQU  H'0004'
SEG5COM3         EQU  H'0005'
SEG6COM3         EQU  H'0006'
SEG7COM3         EQU  H'0007'

S0C3             EQU  H'0000'
S1C3             EQU  H'0001'
S2C3             EQU  H'0002'
S3C3             EQU  H'0003'
S4C3             EQU  H'0004'
S5C3             EQU  H'0005'
S6C3             EQU  H'0006'
S7C3             EQU  H'0007'


;----- LCDDATA10 Bits -----------------------------------------------------
SEG8             EQU  H'0000'
SEG9             EQU  H'0001'
SEG10            EQU  H'0002'
SEG11            EQU  H'0003'
SEG12            EQU  H'0004'
SEG13            EQU  H'0005'
SEG14            EQU  H'0006'
SEG15            EQU  H'0007'

SEG8COM3         EQU  H'0000'
SEG9COM3         EQU  H'0001'
SEG10COM3        EQU  H'0002'
SEG11COM3        EQU  H'0003'
SEG12COM3        EQU  H'0004'
SEG13COM3        EQU  H'0005'
SEG14COM3        EQU  H'0006'
SEG15COM3        EQU  H'0007'

S8C3             EQU  H'0000'
S9C3             EQU  H'0001'
S10C3            EQU  H'0002'
S11C3            EQU  H'0003'
S12C3            EQU  H'0004'
S13C3            EQU  H'0005'
S14C3            EQU  H'0006'
S15C3            EQU  H'0007'


;----- LCDDATA11 Bits -----------------------------------------------------
SEG16            EQU  H'0000'
SEG17            EQU  H'0001'
SEG18            EQU  H'0002'
SEG19            EQU  H'0003'
SEG20            EQU  H'0004'
SEG21            EQU  H'0005'
SEG22            EQU  H'0006'
SEG23            EQU  H'0007'

SEG16COM3        EQU  H'0000'
SEG17COM3        EQU  H'0001'
SEG18COM3        EQU  H'0002'
SEG19COM3        EQU  H'0003'
SEG20COM3        EQU  H'0004'
SEG21COM3        EQU  H'0005'
SEG22COM3        EQU  H'0006'
SEG23COM3        EQU  H'0007'

S16C3            EQU  H'0000'
S17C3            EQU  H'0001'
S18C3            EQU  H'0002'
S19C3            EQU  H'0003'
S20C3            EQU  H'0004'
S21C3            EQU  H'0005'
S22C3            EQU  H'0006'
S23C3            EQU  H'0007'


;----- LCDSE0 Bits -----------------------------------------------------
SEG0             EQU  H'0000'
SEG1             EQU  H'0001'
SEG2             EQU  H'0002'
SEG3             EQU  H'0003'
SEG4             EQU  H'0004'
SEG5             EQU  H'0005'
SEG6             EQU  H'0006'
SEG7             EQU  H'0007'

SE0              EQU  H'0000'
SE1              EQU  H'0001'
SE2              EQU  H'0002'
SE3              EQU  H'0003'
SE4              EQU  H'0004'
SE5              EQU  H'0005'
SE6              EQU  H'0006'
SE7              EQU  H'0007'

SEGEN0           EQU  H'0000'
SEGEN1           EQU  H'0001'
SEGEN2           EQU  H'0002'
SEGEN3           EQU  H'0003'
SEGEN4           EQU  H'0004'
SEGEN5           EQU  H'0005'
SEGEN6           EQU  H'0006'
SEGEN7           EQU  H'0007'


;----- LCDSE1 Bits -----------------------------------------------------
SEG8             EQU  H'0000'
SEG9             EQU  H'0001'
SEG10            EQU  H'0002'
SEG11            EQU  H'0003'
SEG12            EQU  H'0004'
SEG13            EQU  H'0005'
SEG14            EQU  H'0006'
SEG15            EQU  H'0007'

SE8              EQU  H'0000'
SE9              EQU  H'0001'
SE10             EQU  H'0002'
SE11             EQU  H'0003'
SE12             EQU  H'0004'
SE13             EQU  H'0005'
SE14             EQU  H'0006'
SE15             EQU  H'0007'

SEGEN8           EQU  H'0000'
SEGEN9           EQU  H'0001'
SEGEN10          EQU  H'0002'
SEGEN11          EQU  H'0003'
SEGEN12          EQU  H'0004'
SEGEN13          EQU  H'0005'
SEGEN14          EQU  H'0006'
SEGEN15          EQU  H'0007'


;----- LCDSE2 Bits -----------------------------------------------------
SEG16            EQU  H'0000'
SEG17            EQU  H'0001'
SEG18            EQU  H'0002'
SEG19            EQU  H'0003'
SEG20            EQU  H'0004'
SEG21            EQU  H'0005'
SEG22            EQU  H'0006'
SEG23            EQU  H'0007'

SE16             EQU  H'0000'
SE17             EQU  H'0001'
SE18             EQU  H'0002'
SE19             EQU  H'0003'
SE20             EQU  H'0004'
SE21             EQU  H'0005'
SE22             EQU  H'0006'
SE23             EQU  H'0007'

SEGEN16          EQU  H'0000'
SEGEN17          EQU  H'0001'
SEGEN18          EQU  H'0002'
SEGEN19          EQU  H'0003'
SEGEN20          EQU  H'0004'
SEGEN21          EQU  H'0005'
SEGEN22          EQU  H'0006'
SEGEN23          EQU  H'0007'


;----- EECON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
EEPGD            EQU  H'0007'

EERD             EQU  H'0000'
EEWR             EQU  H'0001'




;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'01FF'
       __BADRAM  H'009A'-H'009B'
       __BADRAM  H'011F'
       __BADRAM  H'0185'
       __BADRAM  H'0187'-H'0189'
       __BADRAM  H'018E'-H'018F'
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
_FOSC_LP             EQU  H'3FF8'    ; LP oscillator: Low-power crystal on RA6/OSC2/CLKOUT/T1OSO and RA7/OSC1/CLKIN/T1OSI
_LP_OSC              EQU  H'3FF8'    ; LP oscillator: Low-power crystal on RA6/OSC2/CLKOUT/T1OSO and RA7/OSC1/CLKIN/T1OSI
_FOSC_XT             EQU  H'3FF9'    ; XT oscillator: Crystal/resonator on RA6/OSC2/CLKOUT/T1OSO and RA7/OSC1/CLKIN/T1OSI
_XT_OSC              EQU  H'3FF9'    ; XT oscillator: Crystal/resonator on RA6/OSC2/CLKOUT/T1OSO and RA7/OSC1/CLKIN/T1OSI
_FOSC_HS             EQU  H'3FFA'    ; HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT/T1OSO and RA7/OSC1/CLKIN/T1OSI
_HS_OSC              EQU  H'3FFA'    ; HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT/T1OSO and RA7/OSC1/CLKIN/T1OSI
_FOSC_EC             EQU  H'3FFB'    ; EC: I/O function on RA6/OSC2/CLKOUT/T1OSO pin, CLKIN on RA7/OSC1/CLKIN/T1OSI
_EC_OSC              EQU  H'3FFB'    ; EC: I/O function on RA6/OSC2/CLKOUT/T1OSO pin, CLKIN on RA7/OSC1/CLKIN/T1OSI
_FOSC_INTOSCIO       EQU  H'3FFC'    ; INTOSCIO oscillator: I/O function on RA6/OSC2/CLKOUT/T1OSO pin, I/O function on RA7/OSC1/CLKIN/T1OSI
_INTRC_OSC_NOCLKOUT  EQU  H'3FFC'    ; INTOSCIO oscillator: I/O function on RA6/OSC2/CLKOUT/T1OSO pin, I/O function on RA7/OSC1/CLKIN/T1OSI
_INTOSCIO            EQU  H'3FFC'    ; INTOSCIO oscillator: I/O function on RA6/OSC2/CLKOUT/T1OSO pin, I/O function on RA7/OSC1/CLKIN/T1OSI
_FOSC_INTOSCCLK      EQU  H'3FFD'    ; INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT/T1OSO pin, I/O function on RA7/OSC1/CLKIN/T1OSI
_INTRC_OSC_CLKOUT    EQU  H'3FFD'    ; INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT/T1OSO pin, I/O function on RA7/OSC1/CLKIN/T1OSI
_INTOSC              EQU  H'3FFD'    ; INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT/T1OSO pin, I/O function on RA7/OSC1/CLKIN/T1OSI
_FOSC_EXTRCIO        EQU  H'3FFE'    ; RCIO oscillator: I/O function on RA6/OSC2/CLKOUT/T1OSO pin, RC on RA7/OSC1/CLKIN/T1OSI
_EXTRC_OSC_NOCLKOUT  EQU  H'3FFE'    ; RCIO oscillator: I/O function on RA6/OSC2/CLKOUT/T1OSO pin, RC on RA7/OSC1/CLKIN/T1OSI
_EXTRCIO             EQU  H'3FFE'    ; RCIO oscillator: I/O function on RA6/OSC2/CLKOUT/T1OSO pin, RC on RA7/OSC1/CLKIN/T1OSI
_FOSC_EXTRCCLK       EQU  H'3FFF'    ; RC oscillator: CLKOUT function on RA6/OSC2/CLKOUT/T1OSO pin, RC on RA7/OSC1/CLKIN/T1OSI
_EXTRC_OSC_CLKOUT    EQU  H'3FFF'    ; RC oscillator: CLKOUT function on RA6/OSC2/CLKOUT/T1OSO pin, RC on RA7/OSC1/CLKIN/T1OSI
_EXTRC               EQU  H'3FFF'    ; RC oscillator: CLKOUT function on RA6/OSC2/CLKOUT/T1OSO pin, RC on RA7/OSC1/CLKIN/T1OSI

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
_BOD_OFF             EQU  H'3CFF'    ; BOR disabled
_BOREN_SBODEN        EQU  H'3DFF'    ; BOR controlled by SBOREN bit of the PCON register
_BOD_SBODEN          EQU  H'3DFF'    ; BOR controlled by SBOREN bit of the PCON register
_BOREN_NSLEEP        EQU  H'3EFF'    ; BOR enabled during operation and disabled in Sleep
_BOD_NSLEEP          EQU  H'3EFF'    ; BOR enabled during operation and disabled in Sleep
_BOREN_ON            EQU  H'3FFF'    ; BOR enabled
_BOD_ON              EQU  H'3FFF'    ; BOR enabled

_IESO_OFF            EQU  H'3BFF'    ; Internal/External Switchover mode is disabled
_IESO_ON             EQU  H'3FFF'    ; Internal/External Switchover mode is enabled

_FCMEN_OFF           EQU  H'37FF'    ; Fail-Safe Clock Monitor is disabled
_FCMEN_ON            EQU  H'3FFF'    ; Fail-Safe Clock Monitor is enabled

_DEBUG_ON            EQU  H'2FFF'    ; In-Circuit Debugger enabled, RB6/ICSPCLK and RB7/ICSPDAT are dedicated to the debugger
_DEBUG_OFF           EQU  H'3FFF'    ; In-Circuit Debugger disabled, RB6/ISCPCLK and RB7/ICSPDAT are general purpose I/O pins

;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'2006'

;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'2000'
_IDLOC1          EQU  H'2001'
_IDLOC2          EQU  H'2002'
_IDLOC3          EQU  H'2003'

        LIST
