        LIST

;==========================================================================
;  MPASM PIC16F707 processor include
; 
;  (c) Copyright 1999-2013 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16F707 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16F707
;       2. LIST directive in the source file
;               LIST   P=PIC16F707
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16F707
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
ADRES            EQU  H'001E'
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
T1GCON           EQU  H'008F'
OSCCON           EQU  H'0090'
OSCTUNE          EQU  H'0091'
PR2              EQU  H'0092'
SSPADD           EQU  H'0093'
SSPMSK           EQU  H'0093'
SSPSTAT          EQU  H'0094'
WPUB             EQU  H'0095'
IOCB             EQU  H'0096'
T3CON            EQU  H'0097'
TXSTA            EQU  H'0098'
SPBRG            EQU  H'0099'
TMR3             EQU  H'009A'
TMR3L            EQU  H'009A'
TMR3H            EQU  H'009B'
APFCON           EQU  H'009C'
FVRCON           EQU  H'009D'
T3GCON           EQU  H'009E'
ADCON1           EQU  H'009F'

;-----Bank2------------------
TACON            EQU  H'0105'
CPSBCON0         EQU  H'0106'
CPSBCON1         EQU  H'0107'
CPSACON0         EQU  H'0108'
CPSACON1         EQU  H'0109'
PMDATL           EQU  H'010C'
PMADRL           EQU  H'010D'
PMDATH           EQU  H'010E'
PMADRH           EQU  H'010F'
TMRA             EQU  H'0110'
TBCON            EQU  H'0111'
TMRB             EQU  H'0112'
DACCON0          EQU  H'0113'
DACCON1          EQU  H'0114'

;-----Bank3------------------
ANSELA           EQU  H'0185'
ANSELB           EQU  H'0186'
ANSELC           EQU  H'0187'
ANSELD           EQU  H'0188'
ANSELE           EQU  H'0189'
PMCON1           EQU  H'018C'

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

AN0              EQU  H'0000'
AN1              EQU  H'0001'
AN2              EQU  H'0002'
AN3              EQU  H'0003'
AN4              EQU  H'0005'
OSC2             EQU  H'0006'
OSC1             EQU  H'0007'

CPSA0            EQU  H'0001'
CPSA1            EQU  H'0002'
CPSA2            EQU  H'0003'
CPSA3            EQU  H'0004'
CPSA4            EQU  H'0005'
CPSB1            EQU  H'0006'
CPSB0            EQU  H'0007'

DACOUT           EQU  H'0002'
T0CKI            EQU  H'0004'
CLKOUT           EQU  H'0006'
CLKIN            EQU  H'0007'

TACKI            EQU  H'0004'


;----- PORTB Bits -----------------------------------------------------
RB0              EQU  H'0000'
RB1              EQU  H'0001'
RB2              EQU  H'0002'
RB3              EQU  H'0003'
RB4              EQU  H'0004'
RB5              EQU  H'0005'
RB6              EQU  H'0006'
RB7              EQU  H'0007'

AN12             EQU  H'0000'
AN10             EQU  H'0001'
AN8              EQU  H'0002'
AN9              EQU  H'0003'
AN11             EQU  H'0004'
AN13             EQU  H'0005'

CPSB8            EQU  H'0000'
CPSB9            EQU  H'0001'
CPSB10           EQU  H'0002'
CPSB11           EQU  H'0003'
CPSB12           EQU  H'0004'
CPSB13           EQU  H'0005'
CPSB14           EQU  H'0006'
CPSB15           EQU  H'0007'

CCP2_PORTB       EQU  H'0003'
T1G              EQU  H'0005'

T3CKI            EQU  H'0005'


;----- PORTC Bits -----------------------------------------------------
RC0              EQU  H'0000'
RC1              EQU  H'0001'
RC2              EQU  H'0002'
RC3              EQU  H'0003'
RC4              EQU  H'0004'
RC5              EQU  H'0005'
RC6              EQU  H'0006'
RC7              EQU  H'0007'

CPSB2            EQU  H'0000'
CPSB3            EQU  H'0001'
CPSB4            EQU  H'0002'
CPSA9            EQU  H'0005'
CPSA10           EQU  H'0006'
CPSA11           EQU  H'0007'

T1OSO            EQU  H'0000'
T1OSI            EQU  H'0001'
TBCKI            EQU  H'0002'
SCK              EQU  H'0003'
SDI              EQU  H'0004'
SDO              EQU  H'0005'
TX               EQU  H'0006'
RX               EQU  H'0007'

T1CKI            EQU  H'0000'
CCP2_PORTC       EQU  H'0001'
CCP1             EQU  H'0002'
SCL              EQU  H'0003'
SDA              EQU  H'0004'
CK               EQU  H'0006'
; DT is a reserved word
; DT               EQU  H'0007'


;----- PORTD Bits -----------------------------------------------------
RD0              EQU  H'0000'
RD1              EQU  H'0001'
RD2              EQU  H'0002'
RD3              EQU  H'0003'
RD4              EQU  H'0004'
RD5              EQU  H'0005'
RD6              EQU  H'0006'
RD7              EQU  H'0007'

CPSB5            EQU  H'0000'
CPSB6            EQU  H'0001'
CPSB7            EQU  H'0002'
CPSA8            EQU  H'0003'
CPSA12           EQU  H'0004'
CPSA13           EQU  H'0005'
CPSA14           EQU  H'0006'
CPSA15           EQU  H'0007'

T3G              EQU  H'0000'


;----- PORTE Bits -----------------------------------------------------
RE0              EQU  H'0000'
RE1              EQU  H'0001'
RE2              EQU  H'0002'
RE3              EQU  H'0003'

AN5              EQU  H'0000'
AN6              EQU  H'0001'
AN7              EQU  H'0002'
NOT_MCLR         EQU  H'0003'

CPSA5            EQU  H'0000'
CPSA6            EQU  H'0001'
CPSA7            EQU  H'0002'


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
TMR1GIF          EQU  H'0007'


;----- PIR2 Bits -----------------------------------------------------
CCP2IF           EQU  H'0000'
TMRAIF           EQU  H'0004'
TMRBIF           EQU  H'0005'
TMR3IF           EQU  H'0006'
TMR3GIF          EQU  H'0007'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
NOT_T1SYNC       EQU  H'0002'
T1OSCEN          EQU  H'0003'

T1SYNC           EQU  H'0002'
T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'
TMRCS0           EQU  H'0006'
TMRCS1           EQU  H'0007'


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


;----- RCSTA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'


;----- CCP2CON Bits -----------------------------------------------------
CCP2M0           EQU  H'0000'
CCP2M1           EQU  H'0001'
CCP2M2           EQU  H'0002'
CCP2M3           EQU  H'0003'
DC2B0            EQU  H'0004'
DC2B1            EQU  H'0005'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'

CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'


;----- OPTION_REG Bits -----------------------------------------------------
PSA              EQU  H'0003'
TMR0SE           EQU  H'0004'
TMR0CS           EQU  H'0005'
INTEDG           EQU  H'0006'
NOT_RBPU         EQU  H'0007'

PS0              EQU  H'0000'
PS1              EQU  H'0001'
PS2              EQU  H'0002'
T0SE             EQU  H'0004'
T0CS             EQU  H'0005'


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
TMR1GIE          EQU  H'0007'


;----- PIE2 Bits -----------------------------------------------------
CCP2IE           EQU  H'0000'
TMRAIE           EQU  H'0004'
TMRBIE           EQU  H'0005'
TMR3IE           EQU  H'0006'
TMR3GIE          EQU  H'0007'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'


;----- T1GCON Bits -----------------------------------------------------
T1GVAL           EQU  H'0002'
T1GGO_NOT_DONE   EQU  H'0003'
T1GSPM           EQU  H'0004'
T1GTM            EQU  H'0005'
T1GPOL           EQU  H'0006'
TMR1GE           EQU  H'0007'

T1GSS0           EQU  H'0000'
T1GSS1           EQU  H'0001'


;----- OSCCON Bits -----------------------------------------------------
ICSS             EQU  H'0002'
ICSL             EQU  H'0003'

IRCF0            EQU  H'0004'
IRCF1            EQU  H'0005'


;----- SSPSTAT Bits -----------------------------------------------------
BF               EQU  H'0000'
UA               EQU  H'0001'
R_NOT_W          EQU  H'0002'
S                EQU  H'0003'
P                EQU  H'0004'
D_NOT_A          EQU  H'0005'
CKE              EQU  H'0006'
SMP              EQU  H'0007'


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


;----- T3CON Bits -----------------------------------------------------
TMR3ON           EQU  H'0000'
T3SYNC           EQU  H'0002'

T3CKPS0          EQU  H'0004'
T3CKPS1          EQU  H'0005'
TMR3CS0          EQU  H'0006'
TMR3CS1          EQU  H'0007'


;----- TXSTA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- APFCON Bits -----------------------------------------------------
CCP2SEL          EQU  H'0000'
SSSEL            EQU  H'0001'


;----- FVRCON Bits -----------------------------------------------------
FVREN            EQU  H'0006'
FVRRDY           EQU  H'0007'

ADFVR0           EQU  H'0000'
ADFVR1           EQU  H'0001'
CDAFVR0          EQU  H'0002'
CDAFVR1          EQU  H'0003'


;----- T3GCON Bits -----------------------------------------------------
T3GVAL           EQU  H'0002'
T3GGO_NOT_DONE   EQU  H'0003'
T3GSPM           EQU  H'0004'
T3GTM            EQU  H'0005'
T3GPOL           EQU  H'0006'
TMR3GE           EQU  H'0007'

T3GSS0           EQU  H'0000'
T3GSS1           EQU  H'0001'


;----- ADCON1 Bits -----------------------------------------------------
ADREF0           EQU  H'0000'
ADREF1           EQU  H'0001'
ADCS0            EQU  H'0004'
ADCS1            EQU  H'0005'
ADCS2            EQU  H'0006'


;----- TACON Bits -----------------------------------------------------
TAPSA            EQU  H'0003'
TASE             EQU  H'0004'
TACS             EQU  H'0005'
TMRAON           EQU  H'0007'

TAPS0            EQU  H'0000'
TAPS1            EQU  H'0001'
TAPS2            EQU  H'0002'

TMRAPSA          EQU  H'0003'
TMRASE           EQU  H'0004'
TMRACS           EQU  H'0005'

TMRAPS0          EQU  H'0000'
TMRAPS1          EQU  H'0001'
TMRAPS2          EQU  H'0002'


;----- CPSBCON0 Bits -----------------------------------------------------
TBXCS            EQU  H'0000'
CPSBOUT          EQU  H'0001'
CPSBRM           EQU  H'0006'
CPSBON           EQU  H'0007'

CPSBRNG0         EQU  H'0002'
CPSBRNG1         EQU  H'0003'


;----- CPSBCON1 Bits -----------------------------------------------------
CPSBCH0          EQU  H'0000'
CPSBCH1          EQU  H'0001'
CPSBCH2          EQU  H'0002'
CPSBCH3          EQU  H'0003'


;----- CPSACON0 Bits -----------------------------------------------------
TAXCS            EQU  H'0000'
CPSAOUT          EQU  H'0001'
CPSARM           EQU  H'0006'
CPSAON           EQU  H'0007'

CPSARNG0         EQU  H'0002'
CPSARNG1         EQU  H'0003'


;----- CPSACON1 Bits -----------------------------------------------------
CPSACH0          EQU  H'0000'
CPSACH1          EQU  H'0001'
CPSACH2          EQU  H'0002'
CPSACH3          EQU  H'0003'


;----- TBCON Bits -----------------------------------------------------
TBPSA            EQU  H'0003'
TBSE             EQU  H'0004'
TBCS             EQU  H'0005'
TMRBON           EQU  H'0007'

TBPS0            EQU  H'0000'
TBPS1            EQU  H'0001'
TBPS2            EQU  H'0002'

TMRBPSA          EQU  H'0003'
TMRBSE           EQU  H'0004'
TMRBCS           EQU  H'0005'

TMRBPS0          EQU  H'0000'
TMRBPS1          EQU  H'0001'
TMRBPS2          EQU  H'0002'


;----- DACCON0 Bits -----------------------------------------------------
DACOE            EQU  H'0005'
DACLPS           EQU  H'0006'
DACEN            EQU  H'0007'

DACPSS0          EQU  H'0002'
DACPSS1          EQU  H'0003'


;----- DACCON1 Bits -----------------------------------------------------
DACR0            EQU  H'0000'
DACR1            EQU  H'0001'
DACR2            EQU  H'0002'
DACR3            EQU  H'0003'
DACR4            EQU  H'0004'


;----- ANSELA Bits -----------------------------------------------------
ANSA0            EQU  H'0000'
ANSA1            EQU  H'0001'
ANSA2            EQU  H'0002'
ANSA3            EQU  H'0003'
ANSA4            EQU  H'0004'
ANSA5            EQU  H'0005'
ANSA6            EQU  H'0006'
ANSA7            EQU  H'0007'



;----- ANSELB Bits -----------------------------------------------------
ANSB0            EQU  H'0000'
ANSB1            EQU  H'0001'
ANSB2            EQU  H'0002'
ANSB3            EQU  H'0003'
ANSB4            EQU  H'0004'
ANSB5            EQU  H'0005'
ANSB6            EQU  H'0006'
ANSB7            EQU  H'0007'



;----- ANSELC Bits -----------------------------------------------------
ANSC0            EQU  H'0000'
ANSC1            EQU  H'0001'
ANSC2            EQU  H'0002'
ANSC5            EQU  H'0005'
ANSC6            EQU  H'0006'
ANSC7            EQU  H'0007'



;----- ANSELD Bits -----------------------------------------------------
ANSD0            EQU  H'0000'
ANSD1            EQU  H'0001'
ANSD2            EQU  H'0002'
ANSD3            EQU  H'0003'
ANSD4            EQU  H'0004'
ANSD5            EQU  H'0005'
ANSD6            EQU  H'0006'
ANSD7            EQU  H'0007'



;----- ANSELE Bits -----------------------------------------------------
ANSE0            EQU  H'0000'
ANSE1            EQU  H'0001'
ANSE2            EQU  H'0002'



;----- PMCON1 Bits -----------------------------------------------------
RD               EQU  H'0000'




;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'01FF'
       __BADRAM  H'018D'-H'018F'

;==========================================================================
;
;       Configuration Bits
;
;   NAME            Address
;   CONFIG            2007h
;   CONFIG2           2008h
;
;==========================================================================

; The following is an assignment of address values for all of the
; configuration registers for the purpose of table reads
_CONFIG          EQU  H'2007'
_CONFIG2         EQU  H'2008'

;----- CONFIG Options --------------------------------------------------
_FOSC_LP_OSC         EQU  H'3FF8'    ; LP oscillator: Low-power crystal on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN
_LP_OSC              EQU  H'3FF8'    ; LP oscillator: Low-power crystal on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN
_FOSC_XT_OSC         EQU  H'3FF9'    ; XT oscillator: Crystal/resonator on RA6/OSC2/CLKIN and RA7/OSC1/CLKIN
_XT_OSC              EQU  H'3FF9'    ; XT oscillator: Crystal/resonator on RA6/OSC2/CLKIN and RA7/OSC1/CLKIN
_FOSC_HS_OSC         EQU  H'3FFA'    ; HS oscillator: High Speed crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN
_HS_OSC              EQU  H'3FFA'    ; HS oscillator: High Speed crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN
_FOSC_EC_OSC         EQU  H'3FFB'    ; EC oscillator: I/O function on RA6/OSC2/CLKOUT pin, CLKIN on RA7/OSC1/CLKIN
_EC_OSC              EQU  H'3FFB'    ; EC oscillator: I/O function on RA6/OSC2/CLKOUT pin, CLKIN on RA7/OSC1/CLKIN
_FOSC_INTOSCIO       EQU  H'3FFC'    ; INTOSCIO oscillator: I/O function on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN pins
_INTOSCIO            EQU  H'3FFC'    ; INTOSCIO oscillator: I/O function on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN pins
_FOSC_INTOSC         EQU  H'3FFD'    ; INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function  on RA7/OSC1/CLKIN
_INTOSC              EQU  H'3FFD'    ; INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function  on RA7/OSC1/CLKIN
_FOSC_EXTRCIO        EQU  H'3FFE'    ; RCIO oscillator: I/O function on RA6/OSC2/CLKOUT pin, RC on RA7/OSC1/CLKIN
_EXTRCIO             EQU  H'3FFE'    ; RCIO oscillator: I/O function on RA6/OSC2/CLKOUT pin, RC on RA7/OSC1/CLKIN
_FOSC_EXTRC          EQU  H'3FFF'    ; RC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, RC on RA7/OSC1/CLKIN
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

_BOREN_OFF           EQU  H'3CFF'    ; BOR disabled (Preconditioned State)
_BOREN_NSLEEP        EQU  H'3EFF'    ; BOR enabled during operation and disabled in Sleep
_BOREN_ON            EQU  H'3FFF'    ; BOR enabled

_BORV_25             EQU  H'3BFF'    ; Brown-out Reset Voltage (VBOR) set to 2.5 V nominal
_BORV_19             EQU  H'3FFF'    ; Brown-out Reset Voltage (VBOR) set to 1.9 V nominal

_PLLEN_OFF           EQU  H'2FFF'    ; INTOSC Frequency is 500 kHz
_PLLEN_ON            EQU  H'3FFF'    ; INTOSC Frequency is 16 MHz (32x)

;----- CONFIG2 Options --------------------------------------------------
_VCAPEN_RA0          EQU  H'3FCF'    ; VCAP functionality is enabled on RA0
_VCAPEN_RA5          EQU  H'3FDF'    ; VCAP functionality is enabled on RA5
_VCAPEN_RA6          EQU  H'3FEF'    ; VCAP functionality is enabled on RA6
_VCAPEN_OFF          EQU  H'3FFF'    ; All VCAP pin functions are disabled

;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'2006'

;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'2000'
_IDLOC1          EQU  H'2001'
_IDLOC2          EQU  H'2002'
_IDLOC3          EQU  H'2003'

        LIST
