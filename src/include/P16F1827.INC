        LIST

;==========================================================================
;  MPASM PIC16F1827 processor include
; 
;  (c) Copyright 1999-2013 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16F1827 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16F1827
;       2. LIST directive in the source file
;               LIST   P=PIC16F1827
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16F1827
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
INDF0            EQU  H'0000'
INDF1            EQU  H'0001'
PCL              EQU  H'0002'
STATUS           EQU  H'0003'
FSR0             EQU  H'0004'
FSR0L            EQU  H'0004'
FSR0H            EQU  H'0005'
FSR1             EQU  H'0006'
FSR1L            EQU  H'0006'
FSR1H            EQU  H'0007'
BSR              EQU  H'0008'
WREG             EQU  H'0009'
PCLATH           EQU  H'000A'
INTCON           EQU  H'000B'
PORTA            EQU  H'000C'
PORTB            EQU  H'000D'
PIR1             EQU  H'0011'
PIR2             EQU  H'0012'
PIR3             EQU  H'0013'
PIR4             EQU  H'0014'
TMR0             EQU  H'0015'
TMR1             EQU  H'0016'
TMR1L            EQU  H'0016'
TMR1H            EQU  H'0017'
T1CON            EQU  H'0018'
T1GCON           EQU  H'0019'
TMR2             EQU  H'001A'
PR2              EQU  H'001B'
T2CON            EQU  H'001C'
CPSCON0          EQU  H'001E'
CPSCON1          EQU  H'001F'

;-----Bank1------------------
TRISA            EQU  H'008C'
TRISB            EQU  H'008D'
PIE1             EQU  H'0091'
PIE2             EQU  H'0092'
PIE3             EQU  H'0093'
PIE4             EQU  H'0094'
OPTION_REG       EQU  H'0095'
PCON             EQU  H'0096'
WDTCON           EQU  H'0097'
OSCTUNE          EQU  H'0098'
OSCCON           EQU  H'0099'
OSCSTAT          EQU  H'009A'
ADRES            EQU  H'009B'
ADRESL           EQU  H'009B'
ADRESH           EQU  H'009C'
ADCON0           EQU  H'009D'
ADCON1           EQU  H'009E'

;-----Bank2------------------
LATA             EQU  H'010C'
LATB             EQU  H'010D'
CM1CON0          EQU  H'0111'
CM1CON1          EQU  H'0112'
CM2CON0          EQU  H'0113'
CM2CON1          EQU  H'0114'
CMOUT            EQU  H'0115'
BORCON           EQU  H'0116'
FVRCON           EQU  H'0117'
DACCON0          EQU  H'0118'
DACCON1          EQU  H'0119'
SRCON0           EQU  H'011A'
SRCON1           EQU  H'011B'
APFCON0          EQU  H'011D'
APFCON1          EQU  H'011E'

;-----Bank3------------------
ANSELA           EQU  H'018C'
ANSELB           EQU  H'018D'
EEADR            EQU  H'0191'
EEADRL           EQU  H'0191'
EEADRH           EQU  H'0192'
EEDAT            EQU  H'0193'
EEDATL           EQU  H'0193'
EEDATH           EQU  H'0194'
EECON1           EQU  H'0195'
EECON2           EQU  H'0196'
RCREG            EQU  H'0199'
TXREG            EQU  H'019A'
SPBRG            EQU  H'019B'
SPBRGL           EQU  H'019B'
SPBRGH           EQU  H'019C'
RCSTA            EQU  H'019D'
TXSTA            EQU  H'019E'
BAUDCON          EQU  H'019F'

;-----Bank4------------------
WPUA             EQU  H'020C'
WPUB             EQU  H'020D'
SSP1BUF          EQU  H'0211'
SSPBUF           EQU  H'0211'
SSP1ADD          EQU  H'0212'
SSPADD           EQU  H'0212'
SSP1MSK          EQU  H'0213'
SSPMSK           EQU  H'0213'
SSP1STAT         EQU  H'0214'
SSPSTAT          EQU  H'0214'
SSP1CON1         EQU  H'0215'
SSPCON           EQU  H'0215'
SSPCON1          EQU  H'0215'
SSP1CON2         EQU  H'0216'
SSPCON2          EQU  H'0216'
SSP1CON3         EQU  H'0217'
SSPCON3          EQU  H'0217'
SSP2BUF          EQU  H'0219'
SSP2ADD          EQU  H'021A'
SSP2MSK          EQU  H'021B'
SSP2STAT         EQU  H'021C'
SSP2CON1         EQU  H'021D'
SSP2CON2         EQU  H'021E'
SSP2CON3         EQU  H'021F'

;-----Bank5------------------
CCPR1L           EQU  H'0291'
CCPR1H           EQU  H'0292'
CCP1CON          EQU  H'0293'
PWM1CON          EQU  H'0294'
CCP1AS           EQU  H'0295'
ECCP1AS          EQU  H'0295'
PSTR1CON         EQU  H'0296'
CCPR2L           EQU  H'0298'
CCPR2H           EQU  H'0299'
CCP2CON          EQU  H'029A'
PWM2CON          EQU  H'029B'
CCP2AS           EQU  H'029C'
ECCP2AS          EQU  H'029C'
PSTR2CON         EQU  H'029D'
CCPTMRS          EQU  H'029E'
CCPTMRS0         EQU  H'029E'

;-----Bank6------------------
CCPR3L           EQU  H'0311'
CCPR3H           EQU  H'0312'
CCP3CON          EQU  H'0313'
CCPR4L           EQU  H'0318'
CCPR4H           EQU  H'0319'
CCP4CON          EQU  H'031A'

;-----Bank7------------------
IOCBP            EQU  H'0394'
IOCBN            EQU  H'0395'
IOCBF            EQU  H'0396'
CLKRCON          EQU  H'039A'
MDCON            EQU  H'039C'
MDSRC            EQU  H'039D'
MDCARL           EQU  H'039E'
MDCARH           EQU  H'039F'

;-----Bank8------------------
TMR4             EQU  H'0415'
PR4              EQU  H'0416'
T4CON            EQU  H'0417'
TMR6             EQU  H'041C'
PR6              EQU  H'041D'
T6CON            EQU  H'041E'

;-----Bank31------------------
STATUS_SHAD      EQU  H'0FE4'
WREG_SHAD        EQU  H'0FE5'
BSR_SHAD         EQU  H'0FE6'
PCLATH_SHAD      EQU  H'0FE7'
FSR0L_SHAD       EQU  H'0FE8'
FSR0H_SHAD       EQU  H'0FE9'
FSR1L_SHAD       EQU  H'0FEA'
FSR1H_SHAD       EQU  H'0FEB'
STKPTR           EQU  H'0FED'
TOSL             EQU  H'0FEE'
TOSH             EQU  H'0FEF'

;----- STATUS Bits -----------------------------------------------------
C                EQU  H'0000'
DC               EQU  H'0001'
Z                EQU  H'0002'
NOT_PD           EQU  H'0003'
NOT_TO           EQU  H'0004'


;----- BSR Bits -----------------------------------------------------
BSR0             EQU  H'0000'
BSR1             EQU  H'0001'
BSR2             EQU  H'0002'
BSR3             EQU  H'0003'
BSR4             EQU  H'0004'



;----- INTCON Bits -----------------------------------------------------
IOCIF            EQU  H'0000'
INTF             EQU  H'0001'
TMR0IF           EQU  H'0002'
IOCIE            EQU  H'0003'
INTE             EQU  H'0004'
TMR0IE           EQU  H'0005'
PEIE             EQU  H'0006'
GIE              EQU  H'0007'

T0IF             EQU  H'0002'
T0IE             EQU  H'0005'


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


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
CCP1IF           EQU  H'0002'
SSP1IF           EQU  H'0003'
TXIF             EQU  H'0004'
RCIF             EQU  H'0005'
ADIF             EQU  H'0006'
TMR1GIF          EQU  H'0007'


;----- PIR2 Bits -----------------------------------------------------
CCP2IF           EQU  H'0000'
BCL1IF           EQU  H'0003'
EEIF             EQU  H'0004'
C1IF             EQU  H'0005'
C2IF             EQU  H'0006'
OSFIF            EQU  H'0007'


;----- PIR3 Bits -----------------------------------------------------
TMR4IF           EQU  H'0001'
TMR6IF           EQU  H'0003'
CCP3IF           EQU  H'0004'
CCP4IF           EQU  H'0005'


;----- PIR4 Bits -----------------------------------------------------
SSP2IF           EQU  H'0000'
BCL2IF           EQU  H'0001'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
NOT_T1SYNC       EQU  H'0002'
T1OSCEN          EQU  H'0003'
T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'
TMR1CS0          EQU  H'0006'
TMR1CS1          EQU  H'0007'



;----- T1GCON Bits -----------------------------------------------------
T1GSS0           EQU  H'0000'
T1GSS1           EQU  H'0001'
T1GVAL           EQU  H'0002'
T1GGO            EQU  H'0003'
T1GSPM           EQU  H'0004'
T1GTM            EQU  H'0005'
T1GPOL           EQU  H'0006'
TMR1GE           EQU  H'0007'



;----- T2CON Bits -----------------------------------------------------
T2CKPS0          EQU  H'0000'
T2CKPS1          EQU  H'0001'
TMR2ON           EQU  H'0002'
T2OUTPS0         EQU  H'0003'
T2OUTPS1         EQU  H'0004'
T2OUTPS2         EQU  H'0005'
T2OUTPS3         EQU  H'0006'



;----- CPSCON0 Bits -----------------------------------------------------
T0XCS            EQU  H'0000'
CPSOUT           EQU  H'0001'
CPSRNG0          EQU  H'0002'
CPSRNG1          EQU  H'0003'
CPSON            EQU  H'0007'



;----- CPSCON1 Bits -----------------------------------------------------
CPSCH0           EQU  H'0000'
CPSCH1           EQU  H'0001'
CPSCH2           EQU  H'0002'
CPSCH3           EQU  H'0003'



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
SSP1IE           EQU  H'0003'
TXIE             EQU  H'0004'
RCIE             EQU  H'0005'
ADIE             EQU  H'0006'
TMR1GIE          EQU  H'0007'


;----- PIE2 Bits -----------------------------------------------------
CCP2IE           EQU  H'0000'
BCL1IE           EQU  H'0003'
EEIE             EQU  H'0004'
C1IE             EQU  H'0005'
C2IE             EQU  H'0006'
OSFIE            EQU  H'0007'


;----- PIE3 Bits -----------------------------------------------------
TMR4IE           EQU  H'0001'
TMR6IE           EQU  H'0003'
CCP3IE           EQU  H'0004'
CCP4IE           EQU  H'0005'


;----- PIE4 Bits -----------------------------------------------------
SSP2IE           EQU  H'0000'
BCL2IE           EQU  H'0001'


;----- OPTION_REG Bits -----------------------------------------------------
PS0              EQU  H'0000'
PS1              EQU  H'0001'
PS2              EQU  H'0002'
PSA              EQU  H'0003'
TMR0SE           EQU  H'0004'
TMR0CS           EQU  H'0005'
INTEDG           EQU  H'0006'
NOT_WPUEN        EQU  H'0007'

T0SE             EQU  H'0004'
T0CS             EQU  H'0005'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'
NOT_RI           EQU  H'0002'
NOT_RMCLR        EQU  H'0003'
STKUNF           EQU  H'0006'
STKOVF           EQU  H'0007'


;----- WDTCON Bits -----------------------------------------------------
SWDTEN           EQU  H'0000'
WDTPS0           EQU  H'0001'
WDTPS1           EQU  H'0002'
WDTPS2           EQU  H'0003'
WDTPS3           EQU  H'0004'
WDTPS4           EQU  H'0005'



;----- OSCTUNE Bits -----------------------------------------------------
TUN0             EQU  H'0000'
TUN1             EQU  H'0001'
TUN2             EQU  H'0002'
TUN3             EQU  H'0003'
TUN4             EQU  H'0004'
TUN5             EQU  H'0005'



;----- OSCCON Bits -----------------------------------------------------
SCS0             EQU  H'0000'
SCS1             EQU  H'0001'
IRCF0            EQU  H'0003'
IRCF1            EQU  H'0004'
IRCF2            EQU  H'0005'
IRCF3            EQU  H'0006'
SPLLEN           EQU  H'0007'



;----- OSCSTAT Bits -----------------------------------------------------
HFIOFS           EQU  H'0000'
LFIOFR           EQU  H'0001'
MFIOFR           EQU  H'0002'
HFIOFL           EQU  H'0003'
HFIOFR           EQU  H'0004'
OSTS             EQU  H'0005'
PLLR             EQU  H'0006'
T1OSCR           EQU  H'0007'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'
CHS4             EQU  H'0006'

ADGO             EQU  H'0001'

GO               EQU  H'0001'


;----- ADCON1 Bits -----------------------------------------------------
ADPREF0          EQU  H'0000'
ADPREF1          EQU  H'0001'
ADNREF           EQU  H'0002'
ADCS0            EQU  H'0004'
ADCS1            EQU  H'0005'
ADCS2            EQU  H'0006'
ADFM             EQU  H'0007'



;----- LATA Bits -----------------------------------------------------
LATA0            EQU  H'0000'
LATA1            EQU  H'0001'
LATA2            EQU  H'0002'
LATA3            EQU  H'0003'
LATA4            EQU  H'0004'
LATA6            EQU  H'0006'
LATA7            EQU  H'0007'


;----- LATB Bits -----------------------------------------------------
LATB0            EQU  H'0000'
LATB1            EQU  H'0001'
LATB2            EQU  H'0002'
LATB3            EQU  H'0003'
LATB4            EQU  H'0004'
LATB5            EQU  H'0005'
LATB6            EQU  H'0006'
LATB7            EQU  H'0007'


;----- CM1CON0 Bits -----------------------------------------------------
C1SYNC           EQU  H'0000'
C1HYS            EQU  H'0001'
C1SP             EQU  H'0002'
C1POL            EQU  H'0004'
C1OE             EQU  H'0005'
C1OUT            EQU  H'0006'
C1ON             EQU  H'0007'


;----- CM1CON1 Bits -----------------------------------------------------
C1NCH0           EQU  H'0000'
C1NCH1           EQU  H'0001'
C1PCH0           EQU  H'0004'
C1PCH1           EQU  H'0005'
C1INTN           EQU  H'0006'
C1INTP           EQU  H'0007'



;----- CM2CON0 Bits -----------------------------------------------------
C2SYNC           EQU  H'0000'
C2HYS            EQU  H'0001'
C2SP             EQU  H'0002'
C2POL            EQU  H'0004'
C2OE             EQU  H'0005'
C2OUT            EQU  H'0006'
C2ON             EQU  H'0007'


;----- CM2CON1 Bits -----------------------------------------------------
C2NCH0           EQU  H'0000'
C2NCH1           EQU  H'0001'
C2PCH0           EQU  H'0004'
C2PCH1           EQU  H'0005'
C2INTN           EQU  H'0006'
C2INTP           EQU  H'0007'



;----- CMOUT Bits -----------------------------------------------------
MC1OUT           EQU  H'0000'
MC2OUT           EQU  H'0001'


;----- BORCON Bits -----------------------------------------------------
BORRDY           EQU  H'0000'
SBOREN           EQU  H'0007'


;----- FVRCON Bits -----------------------------------------------------
ADFVR0           EQU  H'0000'
ADFVR1           EQU  H'0001'
CDAFVR0          EQU  H'0002'
CDAFVR1          EQU  H'0003'
TSRNG            EQU  H'0004'
TSEN             EQU  H'0005'
FVRRDY           EQU  H'0006'
FVREN            EQU  H'0007'



;----- DACCON0 Bits -----------------------------------------------------
DACNSS           EQU  H'0000'
DACPSS0          EQU  H'0002'
DACPSS1          EQU  H'0003'
DACOE            EQU  H'0005'
DACLPS           EQU  H'0006'
DACEN            EQU  H'0007'



;----- DACCON1 Bits -----------------------------------------------------
DACR0            EQU  H'0000'
DACR1            EQU  H'0001'
DACR2            EQU  H'0002'
DACR3            EQU  H'0003'
DACR4            EQU  H'0004'



;----- SRCON0 Bits -----------------------------------------------------
SRPR             EQU  H'0000'
SRPS             EQU  H'0001'
SRNQEN           EQU  H'0002'
SRQEN            EQU  H'0003'
SRCLK0           EQU  H'0004'
SRCLK1           EQU  H'0005'
SRCLK2           EQU  H'0006'
SRLEN            EQU  H'0007'



;----- SRCON1 Bits -----------------------------------------------------
SRRC1E           EQU  H'0000'
SRRC2E           EQU  H'0001'
SRRCKE           EQU  H'0002'
SRRPE            EQU  H'0003'
SRSC1E           EQU  H'0004'
SRSC2E           EQU  H'0005'
SRSCKE           EQU  H'0006'
SRSPE            EQU  H'0007'


;----- APFCON0 Bits -----------------------------------------------------
CCP1SEL          EQU  H'0000'
P1CSEL           EQU  H'0001'
P1DSEL           EQU  H'0002'
CCP2SEL          EQU  H'0003'
P2BSEL           EQU  H'0004'
SS1SEL           EQU  H'0005'
SDO1SEL          EQU  H'0006'
RXDTSEL          EQU  H'0007'


;----- APFCON1 Bits -----------------------------------------------------
TXCKSEL          EQU  H'0000'


;----- ANSELA Bits -----------------------------------------------------
ANSA0            EQU  H'0000'
ANSA1            EQU  H'0001'
ANSA2            EQU  H'0002'
ANSA3            EQU  H'0003'
ANSA4            EQU  H'0004'



;----- ANSELB Bits -----------------------------------------------------
ANSB1            EQU  H'0001'
ANSB2            EQU  H'0002'
ANSB3            EQU  H'0003'
ANSB4            EQU  H'0004'
ANSB5            EQU  H'0005'
ANSB6            EQU  H'0006'
ANSB7            EQU  H'0007'



;----- EECON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
FREE             EQU  H'0004'
LWLO             EQU  H'0005'
CFGS             EQU  H'0006'
EEPGD            EQU  H'0007'


;----- RCSTA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'


;----- TXSTA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- BAUDCON Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
SCKP             EQU  H'0004'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- WPUA Bits -----------------------------------------------------
WPUA5            EQU  H'0005'



;----- WPUB Bits -----------------------------------------------------
WPUB0            EQU  H'0000'
WPUB1            EQU  H'0001'
WPUB2            EQU  H'0002'
WPUB3            EQU  H'0003'
WPUB4            EQU  H'0004'
WPUB5            EQU  H'0005'
WPUB6            EQU  H'0006'
WPUB7            EQU  H'0007'



;----- SSP1STAT Bits -----------------------------------------------------
BF               EQU  H'0000'
UA               EQU  H'0001'
R_NOT_W          EQU  H'0002'
S                EQU  H'0003'
P                EQU  H'0004'
D_NOT_A          EQU  H'0005'
CKE              EQU  H'0006'
SMP              EQU  H'0007'


;----- SSPSTAT Bits -----------------------------------------------------
BF               EQU  H'0000'
UA               EQU  H'0001'
R_NOT_W          EQU  H'0002'
S                EQU  H'0003'
P                EQU  H'0004'
D_NOT_A          EQU  H'0005'
CKE              EQU  H'0006'
SMP              EQU  H'0007'


;----- SSP1CON1 Bits -----------------------------------------------------
SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'



;----- SSPCON Bits -----------------------------------------------------
SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'



;----- SSPCON1 Bits -----------------------------------------------------
SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'



;----- SSP1CON2 Bits -----------------------------------------------------
SEN              EQU  H'0000'
RSEN             EQU  H'0001'
PEN              EQU  H'0002'
RCEN             EQU  H'0003'
ACKEN            EQU  H'0004'
ACKDT            EQU  H'0005'
ACKSTAT          EQU  H'0006'
GCEN             EQU  H'0007'


;----- SSPCON2 Bits -----------------------------------------------------
SEN              EQU  H'0000'
RSEN             EQU  H'0001'
PEN              EQU  H'0002'
RCEN             EQU  H'0003'
ACKEN            EQU  H'0004'
ACKDT            EQU  H'0005'
ACKSTAT          EQU  H'0006'
GCEN             EQU  H'0007'


;----- SSP1CON3 Bits -----------------------------------------------------
DHEN             EQU  H'0000'
AHEN             EQU  H'0001'
SBCDE            EQU  H'0002'
SDAHT            EQU  H'0003'
BOEN             EQU  H'0004'
SCIE             EQU  H'0005'
PCIE             EQU  H'0006'
ACKTIM           EQU  H'0007'


;----- SSPCON3 Bits -----------------------------------------------------
DHEN             EQU  H'0000'
AHEN             EQU  H'0001'
SBCDE            EQU  H'0002'
SDAHT            EQU  H'0003'
BOEN             EQU  H'0004'
SCIE             EQU  H'0005'
PCIE             EQU  H'0006'
ACKTIM           EQU  H'0007'


;----- SSP2STAT Bits -----------------------------------------------------
BF               EQU  H'0000'
UA               EQU  H'0001'
R_NOT_W          EQU  H'0002'
S                EQU  H'0003'
P                EQU  H'0004'
D_NOT_A          EQU  H'0005'
CKE              EQU  H'0006'
SMP              EQU  H'0007'


;----- SSP2CON1 Bits -----------------------------------------------------
SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'



;----- SSP2CON2 Bits -----------------------------------------------------
SEN              EQU  H'0000'
RSEN             EQU  H'0001'
PEN              EQU  H'0002'
RCEN             EQU  H'0003'
ACKEN            EQU  H'0004'
ACKDT            EQU  H'0005'
ACKSTAT          EQU  H'0006'
GCEN             EQU  H'0007'


;----- SSP2CON3 Bits -----------------------------------------------------
DHEN             EQU  H'0000'
AHEN             EQU  H'0001'
SBCDE            EQU  H'0002'
SDAHT            EQU  H'0003'
BOEN             EQU  H'0004'
SCIE             EQU  H'0005'
PCIE             EQU  H'0006'
ACKTIM           EQU  H'0007'


;----- CCP1CON Bits -----------------------------------------------------
CCP1M0           EQU  H'0000'
CCP1M1           EQU  H'0001'
CCP1M2           EQU  H'0002'
CCP1M3           EQU  H'0003'
DC1B0            EQU  H'0004'
DC1B1            EQU  H'0005'
P1M0             EQU  H'0006'
P1M1             EQU  H'0007'



;----- PWM1CON Bits -----------------------------------------------------
P1DC0            EQU  H'0000'
P1DC1            EQU  H'0001'
P1DC2            EQU  H'0002'
P1DC3            EQU  H'0003'
P1DC4            EQU  H'0004'
P1DC5            EQU  H'0005'
P1DC6            EQU  H'0006'
P1RSEN           EQU  H'0007'



;----- CCP1AS Bits -----------------------------------------------------
PSS1BD0          EQU  H'0000'
PSS1BD1          EQU  H'0001'
PSS1AC0          EQU  H'0002'
PSS1AC1          EQU  H'0003'
CCP1AS0          EQU  H'0004'
CCP1AS1          EQU  H'0005'
CCP1AS2          EQU  H'0006'
CCP1ASE          EQU  H'0007'



;----- ECCP1AS Bits -----------------------------------------------------
PSS1BD0          EQU  H'0000'
PSS1BD1          EQU  H'0001'
PSS1AC0          EQU  H'0002'
PSS1AC1          EQU  H'0003'
CCP1AS0          EQU  H'0004'
CCP1AS1          EQU  H'0005'
CCP1AS2          EQU  H'0006'
CCP1ASE          EQU  H'0007'



;----- PSTR1CON Bits -----------------------------------------------------
STR1A            EQU  H'0000'
STR1B            EQU  H'0001'
STR1C            EQU  H'0002'
STR1D            EQU  H'0003'
STR1SYNC         EQU  H'0004'


;----- CCP2CON Bits -----------------------------------------------------
CCP2M0           EQU  H'0000'
CCP2M1           EQU  H'0001'
CCP2M2           EQU  H'0002'
CCP2M3           EQU  H'0003'
DC2B0            EQU  H'0004'
DC2B1            EQU  H'0005'
P2M0             EQU  H'0006'
P2M1             EQU  H'0007'



;----- PWM2CON Bits -----------------------------------------------------
P2DC0            EQU  H'0000'
P2DC1            EQU  H'0001'
P2DC2            EQU  H'0002'
P2DC3            EQU  H'0003'
P2DC4            EQU  H'0004'
P2DC5            EQU  H'0005'
P2DC6            EQU  H'0006'
P2RSEN           EQU  H'0007'



;----- CCP2AS Bits -----------------------------------------------------
PSS2BD0          EQU  H'0000'
PSS2BD1          EQU  H'0001'
PSS2AC0          EQU  H'0002'
PSS2AC1          EQU  H'0003'
CCP2AS0          EQU  H'0004'
CCP2AS1          EQU  H'0005'
CCP2AS2          EQU  H'0006'
CCP2ASE          EQU  H'0007'



;----- ECCP2AS Bits -----------------------------------------------------
PSS2BD0          EQU  H'0000'
PSS2BD1          EQU  H'0001'
PSS2AC0          EQU  H'0002'
PSS2AC1          EQU  H'0003'
CCP2AS0          EQU  H'0004'
CCP2AS1          EQU  H'0005'
CCP2AS2          EQU  H'0006'
CCP2ASE          EQU  H'0007'



;----- PSTR2CON Bits -----------------------------------------------------
STR2A            EQU  H'0000'
STR2B            EQU  H'0001'
STR2C            EQU  H'0002'
STR2D            EQU  H'0003'
STR2SYNC         EQU  H'0004'


;----- CCPTMRS Bits -----------------------------------------------------
C1TSEL0          EQU  H'0000'
C1TSEL1          EQU  H'0001'
C2TSEL0          EQU  H'0002'
C2TSEL1          EQU  H'0003'
C3TSEL0          EQU  H'0004'
C3TSEL1          EQU  H'0005'
C4TSEL0          EQU  H'0006'
C4TSEL1          EQU  H'0007'



;----- CCPTMRS0 Bits -----------------------------------------------------
C1TSEL0          EQU  H'0000'
C1TSEL1          EQU  H'0001'
C2TSEL0          EQU  H'0002'
C2TSEL1          EQU  H'0003'
C3TSEL0          EQU  H'0004'
C3TSEL1          EQU  H'0005'
C4TSEL0          EQU  H'0006'
C4TSEL1          EQU  H'0007'



;----- CCP3CON Bits -----------------------------------------------------
CCP3M0           EQU  H'0000'
CCP3M1           EQU  H'0001'
CCP3M2           EQU  H'0002'
CCP3M3           EQU  H'0003'
DC3B0            EQU  H'0004'
DC3B1            EQU  H'0005'



;----- CCP4CON Bits -----------------------------------------------------
CCP4M0           EQU  H'0000'
CCP4M1           EQU  H'0001'
CCP4M2           EQU  H'0002'
CCP4M3           EQU  H'0003'
DC4B0            EQU  H'0004'
DC4B1            EQU  H'0005'



;----- IOCBP Bits -----------------------------------------------------
IOCBP0           EQU  H'0000'
IOCBP1           EQU  H'0001'
IOCBP2           EQU  H'0002'
IOCBP3           EQU  H'0003'
IOCBP4           EQU  H'0004'
IOCBP5           EQU  H'0005'
IOCBP6           EQU  H'0006'
IOCBP7           EQU  H'0007'



;----- IOCBN Bits -----------------------------------------------------
IOCBN0           EQU  H'0000'
IOCBN1           EQU  H'0001'
IOCBN2           EQU  H'0002'
IOCBN3           EQU  H'0003'
IOCBN4           EQU  H'0004'
IOCBN5           EQU  H'0005'
IOCBN6           EQU  H'0006'
IOCBN7           EQU  H'0007'



;----- IOCBF Bits -----------------------------------------------------
IOCBF0           EQU  H'0000'
IOCBF1           EQU  H'0001'
IOCBF2           EQU  H'0002'
IOCBF3           EQU  H'0003'
IOCBF4           EQU  H'0004'
IOCBF5           EQU  H'0005'
IOCBF6           EQU  H'0006'
IOCBF7           EQU  H'0007'



;----- CLKRCON Bits -----------------------------------------------------
CLKRDIV0         EQU  H'0000'
CLKRDIV1         EQU  H'0001'
CLKRDIV2         EQU  H'0002'
CLKRDC0          EQU  H'0003'
CLKRDC1          EQU  H'0004'
CLKRSLR          EQU  H'0005'
CLKROE           EQU  H'0006'
CLKREN           EQU  H'0007'



;----- MDCON Bits -----------------------------------------------------
MDBIT            EQU  H'0000'
MDOUT            EQU  H'0003'
MDOPOL           EQU  H'0004'
MDSLR            EQU  H'0005'
MDOE             EQU  H'0006'
MDEN             EQU  H'0007'


;----- MDSRC Bits -----------------------------------------------------
MDMS0            EQU  H'0000'
MDMS1            EQU  H'0001'
MDMS2            EQU  H'0002'
MDMS3            EQU  H'0003'
MDMSODIS         EQU  H'0007'



;----- MDCARL Bits -----------------------------------------------------
MDCL0            EQU  H'0000'
MDCL1            EQU  H'0001'
MDCL2            EQU  H'0002'
MDCL3            EQU  H'0003'
MDCLSYNC         EQU  H'0005'
MDCLPOL          EQU  H'0006'
MDCLODIS         EQU  H'0007'



;----- MDCARH Bits -----------------------------------------------------
MDCH0            EQU  H'0000'
MDCH1            EQU  H'0001'
MDCH2            EQU  H'0002'
MDCH3            EQU  H'0003'
MDCHSYNC         EQU  H'0005'
MDCHPOL          EQU  H'0006'
MDCHODIS         EQU  H'0007'



;----- T4CON Bits -----------------------------------------------------
T4CKPS0          EQU  H'0000'
T4CKPS1          EQU  H'0001'
TMR4ON           EQU  H'0002'
T4OUTPS0         EQU  H'0003'
T4OUTPS1         EQU  H'0004'
T4OUTPS2         EQU  H'0005'
T4OUTPS3         EQU  H'0006'



;----- T6CON Bits -----------------------------------------------------
T6CKPS0          EQU  H'0000'
T6CKPS1          EQU  H'0001'
TMR6ON           EQU  H'0002'
T6OUTPS0         EQU  H'0003'
T6OUTPS1         EQU  H'0004'
T6OUTPS2         EQU  H'0005'
T6OUTPS3         EQU  H'0006'



;----- STATUS_SHAD Bits -----------------------------------------------------
C_SHAD           EQU  H'0000'
DC_SHAD          EQU  H'0001'
Z_SHAD           EQU  H'0002'



;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'0FFF'
       __BADRAM  H'000E'-H'0010'
       __BADRAM  H'001D'
       __BADRAM  H'008E'-H'0090'
       __BADRAM  H'009F'
       __BADRAM  H'010E'-H'0110'
       __BADRAM  H'011C'
       __BADRAM  H'011F'
       __BADRAM  H'018E'-H'0190'
       __BADRAM  H'0197'-H'0198'
       __BADRAM  H'020E'-H'0210'
       __BADRAM  H'0218'
       __BADRAM  H'0250'-H'026F'
       __BADRAM  H'028C'-H'0290'
       __BADRAM  H'0297'
       __BADRAM  H'029F'
       __BADRAM  H'02A0'-H'02EF'
       __BADRAM  H'030C'-H'0310'
       __BADRAM  H'0314'-H'0317'
       __BADRAM  H'031B'-H'031F'
       __BADRAM  H'0320'-H'036F'
       __BADRAM  H'038C'-H'0393'
       __BADRAM  H'0397'-H'0399'
       __BADRAM  H'039B'
       __BADRAM  H'03A0'-H'03EF'
       __BADRAM  H'040C'-H'0414'
       __BADRAM  H'0418'-H'041B'
       __BADRAM  H'041F'
       __BADRAM  H'0420'-H'046F'
       __BADRAM  H'048C'-H'049F'
       __BADRAM  H'04A0'-H'04EF'
       __BADRAM  H'050C'-H'051F'
       __BADRAM  H'0520'-H'056F'
       __BADRAM  H'058C'-H'059F'
       __BADRAM  H'05A0'-H'05EF'
       __BADRAM  H'060C'-H'061F'
       __BADRAM  H'0620'-H'066F'
       __BADRAM  H'068C'-H'069F'
       __BADRAM  H'06A0'-H'06EF'
       __BADRAM  H'070C'-H'071F'
       __BADRAM  H'0720'-H'076F'
       __BADRAM  H'078C'-H'079F'
       __BADRAM  H'07A0'-H'07EF'
       __BADRAM  H'080C'-H'081F'
       __BADRAM  H'0820'-H'086F'
       __BADRAM  H'088C'-H'089F'
       __BADRAM  H'08A0'-H'08EF'
       __BADRAM  H'090C'-H'091F'
       __BADRAM  H'0920'-H'096F'
       __BADRAM  H'098C'-H'099F'
       __BADRAM  H'09A0'-H'09EF'
       __BADRAM  H'0A0C'-H'0A1F'
       __BADRAM  H'0A20'-H'0A6F'
       __BADRAM  H'0A8C'-H'0A9F'
       __BADRAM  H'0AA0'-H'0AEF'
       __BADRAM  H'0B0C'-H'0B1F'
       __BADRAM  H'0B20'-H'0B6F'
       __BADRAM  H'0B8C'-H'0B9F'
       __BADRAM  H'0BA0'-H'0BEF'
       __BADRAM  H'0C0C'-H'0C1F'
       __BADRAM  H'0C20'-H'0C6F'
       __BADRAM  H'0C8C'-H'0C9F'
       __BADRAM  H'0CA0'-H'0CEF'
       __BADRAM  H'0D0C'-H'0D1F'
       __BADRAM  H'0D20'-H'0D6F'
       __BADRAM  H'0D8C'-H'0D9F'
       __BADRAM  H'0DA0'-H'0DEF'
       __BADRAM  H'0E0C'-H'0E1F'
       __BADRAM  H'0E20'-H'0E6F'
       __BADRAM  H'0E8C'-H'0E9F'
       __BADRAM  H'0EA0'-H'0EEF'
       __BADRAM  H'0F0C'-H'0F1F'
       __BADRAM  H'0F20'-H'0F6F'
       __BADRAM  H'0F8C'-H'0FE3'
       __BADRAM  H'0FEC'

;==========================================================================
;
;       Configuration Bits
;
;   NAME            Address
;   CONFIG1           8007h
;   CONFIG2           8008h
;
;==========================================================================

; The following is an assignment of address values for all of the
; configuration registers for the purpose of table reads
_CONFIG1         EQU  H'8007'
_CONFIG2         EQU  H'8008'

;----- CONFIG1 Options --------------------------------------------------
_FOSC_LP         EQU  H'FFF8'    ; LP Oscillator, Low-power crystal connected between OSC1 and OSC2 pins
_FOSC_XT         EQU  H'FFF9'    ; XT Oscillator, Crystal/resonator connected between OSC1 and OSC2 pins
_FOSC_HS         EQU  H'FFFA'    ; HS Oscillator, High-speed crystal/resonator connected between OSC1 and OSC2 pins
_FOSC_EXTRC      EQU  H'FFFB'    ; EXTRC oscillator: External RC circuit connected to CLKIN pin
_FOSC_INTOSC     EQU  H'FFFC'    ; INTOSC oscillator: I/O function on CLKIN pin
_FOSC_ECL        EQU  H'FFFD'    ; ECL, External Clock, Low Power Mode (0-0.5 MHz): device clock supplied to CLKIN pin
_FOSC_ECM        EQU  H'FFFE'    ; ECM, External Clock, Medium Power Mode (0.5-4 MHz): device clock supplied to CLKIN pin
_FOSC_ECH        EQU  H'FFFF'    ; ECH, External Clock, High Power Mode (4-32 MHz): device clock supplied to CLKIN pin

_WDTE_OFF        EQU  H'FFE7'    ; WDT disabled
_WDTE_SWDTEN     EQU  H'FFEF'    ; WDT controlled by the SWDTEN bit in the WDTCON register
_WDTE_NSLEEP     EQU  H'FFF7'    ; WDT enabled while running and disabled in Sleep
_WDTE_ON         EQU  H'FFFF'    ; WDT enabled

_PWRTE_ON        EQU  H'FFDF'    ; PWRT enabled
_PWRTE_OFF       EQU  H'FFFF'    ; PWRT disabled

_MCLRE_OFF       EQU  H'FFBF'    ; MCLR/VPP pin function is digital input
_MCLRE_ON        EQU  H'FFFF'    ; MCLR/VPP pin function is MCLR

_CP_ON           EQU  H'FF7F'    ; Program memory code protection is enabled
_CP_OFF          EQU  H'FFFF'    ; Program memory code protection is disabled

_CPD_ON          EQU  H'FEFF'    ; Data memory code protection is enabled
_CPD_OFF         EQU  H'FFFF'    ; Data memory code protection is disabled

_BOREN_OFF       EQU  H'F9FF'    ; Brown-out Reset disabled
_BOREN_SBODEN    EQU  H'FBFF'    ; Brown-out Reset controlled by the SBOREN bit in the BORCON register
_BOREN_NSLEEP    EQU  H'FDFF'    ; Brown-out Reset enabled while running and disabled in Sleep
_BOREN_ON        EQU  H'FFFF'    ; Brown-out Reset enabled

_CLKOUTEN_ON     EQU  H'F7FF'    ; CLKOUT function is enabled on the CLKOUT pin
_CLKOUTEN_OFF    EQU  H'FFFF'    ; CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin

_IESO_OFF        EQU  H'EFFF'    ; Internal/External Switchover mode is disabled
_IESO_ON         EQU  H'FFFF'    ; Internal/External Switchover mode is enabled

_FCMEN_OFF       EQU  H'DFFF'    ; Fail-Safe Clock Monitor is disabled
_FCMEN_ON        EQU  H'FFFF'    ; Fail-Safe Clock Monitor is enabled

;----- CONFIG2 Options --------------------------------------------------
_WRT_ALL         EQU  H'FFFC'    ; 000h to FFFh write protected, no addresses may be modified by EECON control
_WRT_HALF        EQU  H'FFFD'    ; 000h to 7FFh write protected, 800h to FFFh may be modified by EECON control
_WRT_BOOT        EQU  H'FFFE'    ; 000h to 1FFh write protected, 200h to FFFh may be modified by EECON control
_WRT_OFF         EQU  H'FFFF'    ; Write protection off

_PLLEN_OFF       EQU  H'FEFF'    ; 4x PLL disabled
_PLLEN_ON        EQU  H'FFFF'    ; 4x PLL enabled

_STVREN_OFF      EQU  H'FDFF'    ; Stack Overflow or Underflow will not cause a Reset
_STVREN_ON       EQU  H'FFFF'    ; Stack Overflow or Underflow will cause a Reset

_BORV_HI         EQU  H'FBFF'    ; Brown-out Reset Voltage (Vbor), high trip point selected.
_BORV_LO         EQU  H'FFFF'    ; Brown-out Reset Voltage (Vbor), low trip point selected.
_BORV_19         EQU  H'FFFF'    ; Brown-out Reset Voltage (Vbor), low trip point selected.

_LVP_OFF         EQU  H'DFFF'    ; High-voltage on MCLR/VPP must be used for programming
_LVP_ON          EQU  H'FFFF'    ; Low-voltage programming enabled

;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'8006'

;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'8000'
_IDLOC1          EQU  H'8001'
_IDLOC2          EQU  H'8002'
_IDLOC3          EQU  H'8003'

        LIST
