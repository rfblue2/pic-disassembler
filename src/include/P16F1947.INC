        LIST

;==========================================================================
;  MPASM PIC16F1947 processor include
; 
;  (c) Copyright 1999-2013 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16F1947 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16F1947
;       2. LIST directive in the source file
;               LIST   P=PIC16F1947
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16F1947
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
PORTC            EQU  H'000E'
PORTD            EQU  H'000F'
PORTE            EQU  H'0010'
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
TRISC            EQU  H'008E'
TRISD            EQU  H'008F'
TRISE            EQU  H'0090'
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
LATC             EQU  H'010E'
LATD             EQU  H'010F'
LATE             EQU  H'0110'
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
APFCON           EQU  H'011D'
CM3CON0          EQU  H'011E'
CM3CON1          EQU  H'011F'

;-----Bank3------------------
ANSELA           EQU  H'018C'
ANSELE           EQU  H'0190'
EEADR            EQU  H'0191'
EEADRL           EQU  H'0191'
EEADRH           EQU  H'0192'
EEDAT            EQU  H'0193'
EEDATL           EQU  H'0193'
EEDATH           EQU  H'0194'
EECON1           EQU  H'0195'
EECON2           EQU  H'0196'
RC1REG           EQU  H'0199'
RCREG            EQU  H'0199'
TX1REG           EQU  H'019A'
TXREG            EQU  H'019A'
SP1BRGL          EQU  H'019B'
SPBRG            EQU  H'019B'
SPBRGL           EQU  H'019B'
SP1BRGH          EQU  H'019C'
SPBRGH           EQU  H'019C'
RC1STA           EQU  H'019D'
RCSTA            EQU  H'019D'
TX1STA           EQU  H'019E'
TXSTA            EQU  H'019E'
BAUD1CON         EQU  H'019F'

;-----Bank4------------------
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
PORTF            EQU  H'028C'
PORTG            EQU  H'028D'
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
CCPTMRS0         EQU  H'029E'
CCPTMRS1         EQU  H'029F'

;-----Bank6------------------
TRISF            EQU  H'030C'
TRISG            EQU  H'030D'
CCPR3L           EQU  H'0311'
CCPR3H           EQU  H'0312'
CCP3CON          EQU  H'0313'
PWM3CON          EQU  H'0314'
CCP3AS           EQU  H'0315'
ECCP3AS          EQU  H'0315'
PSTR3CON         EQU  H'0316'
CCPR4L           EQU  H'0318'
CCPR4H           EQU  H'0319'
CCP4CON          EQU  H'031A'
CCPR5L           EQU  H'031C'
CCPR5H           EQU  H'031D'
CCP5CON          EQU  H'031E'

;-----Bank7------------------
LATF             EQU  H'038C'
LATG             EQU  H'038D'
IOCBP            EQU  H'0394'
IOCBN            EQU  H'0395'
IOCBF            EQU  H'0396'

;-----Bank8------------------
ANSELF           EQU  H'040C'
ANSELG           EQU  H'040D'
TMR4             EQU  H'0415'
PR4              EQU  H'0416'
T4CON            EQU  H'0417'
TMR6             EQU  H'041C'
PR6              EQU  H'041D'
T6CON            EQU  H'041E'

;-----Bank9------------------
WPUG             EQU  H'048D'
RC2REG           EQU  H'0491'
TX2REG           EQU  H'0492'
SP2BRGL          EQU  H'0493'
SPBRG2           EQU  H'0493'
SP2BRGH          EQU  H'0494'
RC2STA           EQU  H'0495'
TX2STA           EQU  H'0496'
BAUD2CON         EQU  H'0497'

;-----Bank15------------------
LCDCON           EQU  H'0791'
LCDPS            EQU  H'0792'
LCDREF           EQU  H'0793'
LCDCST           EQU  H'0794'
LCDRL            EQU  H'0795'
LCDSE0           EQU  H'0798'
LCDSE1           EQU  H'0799'
LCDSE2           EQU  H'079A'
LCDSE3           EQU  H'079B'
LCDSE4           EQU  H'079C'
LCDSE5           EQU  H'079D'
LCDDATA0         EQU  H'07A0'
LCDDATA1         EQU  H'07A1'
LCDDATA2         EQU  H'07A2'
LCDDATA3         EQU  H'07A3'
LCDDATA4         EQU  H'07A4'
LCDDATA5         EQU  H'07A5'
LCDDATA6         EQU  H'07A6'
LCDDATA7         EQU  H'07A7'
LCDDATA8         EQU  H'07A8'
LCDDATA9         EQU  H'07A9'
LCDDATA10        EQU  H'07AA'
LCDDATA11        EQU  H'07AB'
LCDDATA12        EQU  H'07AC'
LCDDATA13        EQU  H'07AD'
LCDDATA14        EQU  H'07AE'
LCDDATA15        EQU  H'07AF'
LCDDATA16        EQU  H'07B0'
LCDDATA17        EQU  H'07B1'
LCDDATA18        EQU  H'07B2'
LCDDATA19        EQU  H'07B3'
LCDDATA20        EQU  H'07B4'
LCDDATA21        EQU  H'07B5'
LCDDATA22        EQU  H'07B6'
LCDDATA23        EQU  H'07B7'

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

AN0              EQU  H'0000'
AN1              EQU  H'0001'
AN2              EQU  H'0002'
AN3              EQU  H'0003'
AN4              EQU  H'0005'

CPS0             EQU  H'0000'
CPS1             EQU  H'0001'
CPS2             EQU  H'0002'
CPS3             EQU  H'0003'
CPS4             EQU  H'0005'

SEG33            EQU  H'0000'
SEG18            EQU  H'0001'
SEG34            EQU  H'0002'
SEG35            EQU  H'0003'
SEG14            EQU  H'0004'
SEG15            EQU  H'0005'
SEG36            EQU  H'0006'
SEG37            EQU  H'0007'

VREFM            EQU  H'0002'
VREFP            EQU  H'0003'
T0CKI            EQU  H'0004'
OSC2             EQU  H'0006'
OSC1             EQU  H'0007'

CLKOUT           EQU  H'0006'
CLKIN            EQU  H'0007'


;----- PORTB Bits -----------------------------------------------------
RB0              EQU  H'0000'
RB1              EQU  H'0001'
RB2              EQU  H'0002'
RB3              EQU  H'0003'
RB4              EQU  H'0004'
RB5              EQU  H'0005'
RB6              EQU  H'0006'
RB7              EQU  H'0007'

SEG30            EQU  H'0000'
SEG8             EQU  H'0001'
SEG9             EQU  H'0002'
SEG10            EQU  H'0003'
SEG11            EQU  H'0004'
SEG29            EQU  H'0005'
SEG38            EQU  H'0006'
SEG39            EQU  H'0007'

SRI              EQU  H'0000'
T1G              EQU  H'0005'

FLT0             EQU  H'0000'


;----- PORTC Bits -----------------------------------------------------
RC0              EQU  H'0000'
RC1              EQU  H'0001'
RC2              EQU  H'0002'
RC3              EQU  H'0003'
RC4              EQU  H'0004'
RC5              EQU  H'0005'
RC6              EQU  H'0006'
RC7              EQU  H'0007'

SEG40            EQU  H'0000'
SEG32            EQU  H'0001'
SEG13            EQU  H'0002'
SEG17            EQU  H'0003'
SEG16            EQU  H'0004'
SEG12            EQU  H'0005'
SEG27            EQU  H'0006'
SEG28            EQU  H'0007'

T1OSO            EQU  H'0000'
T1OSI            EQU  H'0001'
SCK1             EQU  H'0003'
SDI1             EQU  H'0004'
SDO1             EQU  H'0005'
TX1              EQU  H'0006'
RX1              EQU  H'0007'

T1CKI            EQU  H'0000'
CCP2_PORTC       EQU  H'0001'
CCP1             EQU  H'0002'
SCL1             EQU  H'0003'
SDA1             EQU  H'0004'
CK1              EQU  H'0006'
DT1              EQU  H'0007'

P2A_PORTC        EQU  H'0001'
P1A              EQU  H'0002'


;----- PORTD Bits -----------------------------------------------------
RD0              EQU  H'0000'
RD1              EQU  H'0001'
RD2              EQU  H'0002'
RD3              EQU  H'0003'
RD4              EQU  H'0004'
RD5              EQU  H'0005'
RD6              EQU  H'0006'
RD7              EQU  H'0007'

SEG0             EQU  H'0000'
SEG1             EQU  H'0001'
SEG2             EQU  H'0002'
SEG3             EQU  H'0003'
SEG4             EQU  H'0004'
SEG5             EQU  H'0005'
SEG6             EQU  H'0006'
SEG7             EQU  H'0007'

P2D              EQU  H'0000'
P2C              EQU  H'0001'
P2B              EQU  H'0002'
P3C              EQU  H'0003'
P3B              EQU  H'0004'
P1C              EQU  H'0005'
P1B              EQU  H'0006'

SDO2             EQU  H'0004'
SDI2             EQU  H'0005'
SCK2             EQU  H'0006'
NOT_SS2          EQU  H'0007'

SDA2             EQU  H'0005'
SCL2             EQU  H'0006'


;----- PORTE Bits -----------------------------------------------------
RE0              EQU  H'0000'
RE1              EQU  H'0001'
RE2              EQU  H'0002'
RE3              EQU  H'0003'
RE4              EQU  H'0004'
RE5              EQU  H'0005'
RE6              EQU  H'0006'
RE7              EQU  H'0007'

VLCD1            EQU  H'0000'
VLCD2            EQU  H'0001'
VLCD3            EQU  H'0002'
COM0             EQU  H'0003'
COM1             EQU  H'0004'
COM2             EQU  H'0005'
COM3             EQU  H'0006'
SEG31            EQU  H'0007'

P2D              EQU  H'0000'
P2C              EQU  H'0001'
P2B              EQU  H'0002'
P3C              EQU  H'0003'
P3B              EQU  H'0004'
P1C              EQU  H'0005'
P1B              EQU  H'0006'
P2A_PORTE        EQU  H'0007'

CCP2_PORTE       EQU  H'0007'


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
CCP1IF           EQU  H'0002'
SSP1IF           EQU  H'0003'
TX1IF            EQU  H'0004'
RC1IF            EQU  H'0005'
ADIF             EQU  H'0006'
TMR1GIF          EQU  H'0007'

SSPIF            EQU  H'0003'
TXIF             EQU  H'0004'
RCIF             EQU  H'0005'


;----- PIR2 Bits -----------------------------------------------------
CCP2IF           EQU  H'0000'
C3IF             EQU  H'0001'
LCDIF            EQU  H'0002'
BCLIF            EQU  H'0003'
EEIF             EQU  H'0004'
C1IF             EQU  H'0005'
C2IF             EQU  H'0006'
OSFIF            EQU  H'0007'


;----- PIR3 Bits -----------------------------------------------------
TMR4IF           EQU  H'0001'
TMR6IF           EQU  H'0003'
CCP3IF           EQU  H'0004'
CCP4IF           EQU  H'0005'
CCP5IF           EQU  H'0006'


;----- PIR4 Bits -----------------------------------------------------
SSP2IF           EQU  H'0000'
BCL2IF           EQU  H'0001'
TX2IF            EQU  H'0004'
RC2IF            EQU  H'0005'


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
T1GGO_NOT_DONE   EQU  H'0003'
T1GSPM           EQU  H'0004'
T1GTM            EQU  H'0005'
T1GPOL           EQU  H'0006'
TMR1GE           EQU  H'0007'

T1GGO            EQU  H'0003'


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
CPSRM            EQU  H'0006'
CPSON            EQU  H'0007'



;----- CPSCON1 Bits -----------------------------------------------------
CPSCH0           EQU  H'0000'
CPSCH1           EQU  H'0001'
CPSCH2           EQU  H'0002'
CPSCH3           EQU  H'0003'
CPSCH4           EQU  H'0004'



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
TRISE4           EQU  H'0004'
TRISE5           EQU  H'0005'
TRISE6           EQU  H'0006'
TRISE7           EQU  H'0007'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
CCP1IE           EQU  H'0002'
SSP1IE           EQU  H'0003'
TX1IE            EQU  H'0004'
RC1IE            EQU  H'0005'
ADIE             EQU  H'0006'
TMR1GIE          EQU  H'0007'

SSPIE            EQU  H'0003'
TXIE             EQU  H'0004'
RCIE             EQU  H'0005'


;----- PIE2 Bits -----------------------------------------------------
CCP2IE           EQU  H'0000'
C3IE             EQU  H'0001'
LCDIE            EQU  H'0002'
BCLIE            EQU  H'0003'
EEIE             EQU  H'0004'
C1IE             EQU  H'0005'
C2IE             EQU  H'0006'
OSFIE            EQU  H'0007'


;----- PIE3 Bits -----------------------------------------------------
TMR4IE           EQU  H'0001'
TMR6IE           EQU  H'0003'
CCP3IE           EQU  H'0004'
CCP4IE           EQU  H'0005'
CCP5IE           EQU  H'0006'


;----- PIE4 Bits -----------------------------------------------------
SSP2IE           EQU  H'0000'
BCL2IE           EQU  H'0001'
TX2IE            EQU  H'0004'
RC2IE            EQU  H'0005'


;----- OPTION_REG Bits -----------------------------------------------------
PS0              EQU  H'0000'
PS1              EQU  H'0001'
PS2              EQU  H'0002'
PSA              EQU  H'0003'
T0SE             EQU  H'0004'
T0CS             EQU  H'0005'
INTEDG           EQU  H'0006'
NOT_WPUEN        EQU  H'0007'

TMR0SE           EQU  H'0004'
TMR0CS           EQU  H'0005'


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

NOT_DONE         EQU  H'0001'


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
LATA5            EQU  H'0005'
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


;----- LATC Bits -----------------------------------------------------
LATC0            EQU  H'0000'
LATC1            EQU  H'0001'
LATC2            EQU  H'0002'
LATC3            EQU  H'0003'
LATC4            EQU  H'0004'
LATC5            EQU  H'0005'
LATC6            EQU  H'0006'
LATC7            EQU  H'0007'


;----- LATD Bits -----------------------------------------------------
LATD0            EQU  H'0000'
LATD1            EQU  H'0001'
LATD2            EQU  H'0002'
LATD3            EQU  H'0003'
LATD4            EQU  H'0004'
LATD5            EQU  H'0005'
LATD6            EQU  H'0006'
LATD7            EQU  H'0007'



;----- LATE Bits -----------------------------------------------------
LATE0            EQU  H'0000'
LATE1            EQU  H'0001'
LATE2            EQU  H'0002'
LATE3            EQU  H'0003'
LATE4            EQU  H'0004'
LATE5            EQU  H'0005'
LATE6            EQU  H'0006'
LATE7            EQU  H'0007'


;----- CM1CON0 Bits -----------------------------------------------------
C1SYNC           EQU  H'0000'
C1HYS            EQU  H'0001'
C1SP             EQU  H'0002'
C1POL            EQU  H'0004'
C1OE             EQU  H'0005'
C1OUT_CM1CON0    EQU  H'0006'
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
C2OUT_CM2CON0    EQU  H'0006'
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
MC3OUT           EQU  H'0002'


;----- BORCON Bits -----------------------------------------------------
BORRDY           EQU  H'0000'
SBOREN           EQU  H'0007'


;----- FVRCON Bits -----------------------------------------------------
ADFVR0           EQU  H'0000'
ADFVR1           EQU  H'0001'
CDAFVR0          EQU  H'0002'
CDAFVR1          EQU  H'0003'
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


;----- APFCON Bits -----------------------------------------------------
P1BSEL           EQU  H'0000'
P1CSEL           EQU  H'0001'
CCP2SEL          EQU  H'0002'
P2BSEL           EQU  H'0003'
P2CSEL           EQU  H'0004'
P2DSEL           EQU  H'0005'
P3BSEL           EQU  H'0006'
P3CSEL           EQU  H'0007'


;----- CM3CON0 Bits -----------------------------------------------------
C3SYNC           EQU  H'0000'
C3HYS            EQU  H'0001'
C3SP             EQU  H'0002'
C3POL            EQU  H'0004'
C3OE             EQU  H'0005'
C3OUT_CM3CON0    EQU  H'0006'
C3ON             EQU  H'0007'


;----- CM3CON1 Bits -----------------------------------------------------
C3NCH0           EQU  H'0000'
C3NCH1           EQU  H'0001'
C3PCH0           EQU  H'0004'
C3PCH1           EQU  H'0005'
C3INTN           EQU  H'0006'
C3INTP           EQU  H'0007'



;----- ANSELA Bits -----------------------------------------------------
ANSA0            EQU  H'0000'
ANSA1            EQU  H'0001'
ANSA2            EQU  H'0002'
ANSA3            EQU  H'0003'
ANSA5            EQU  H'0005'



;----- ANSELE Bits -----------------------------------------------------
ANSE0            EQU  H'0000'
ANSE1            EQU  H'0001'
ANSE2            EQU  H'0002'



;----- EECON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
FREE             EQU  H'0004'
LWLO             EQU  H'0005'
CFGS             EQU  H'0006'
EEPGD            EQU  H'0007'


;----- RC1STA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'


;----- RCSTA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'


;----- TX1STA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- TXSTA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- BAUD1CON Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
SCKP             EQU  H'0004'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


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


;----- PORTF Bits -----------------------------------------------------
RF0              EQU  H'0000'
RF1              EQU  H'0001'
RF2              EQU  H'0002'
RF3              EQU  H'0003'
RF4              EQU  H'0004'
RF5              EQU  H'0005'
RF6              EQU  H'0006'
RF7              EQU  H'0007'

AN16             EQU  H'0000'
AN6              EQU  H'0001'
AN7              EQU  H'0002'
AN8              EQU  H'0003'
AN9              EQU  H'0004'
AN10             EQU  H'0005'
AN11             EQU  H'0006'
AN5              EQU  H'0007'

SEG41            EQU  H'0000'
SEG19            EQU  H'0001'
SEG20            EQU  H'0002'
SEG21            EQU  H'0003'
SEG22            EQU  H'0004'
SEG23            EQU  H'0005'
SEG24            EQU  H'0006'
SEG25            EQU  H'0007'

CPS16            EQU  H'0000'
CPS6             EQU  H'0001'
CPS7             EQU  H'0002'
CPS8             EQU  H'0003'
CPS9             EQU  H'0004'
CPS10            EQU  H'0005'
CPS11            EQU  H'0006'
CPS5             EQU  H'0007'

C1IN0N           EQU  H'0000'
C2OUT_PORTF      EQU  H'0001'
C1OUT_PORTF      EQU  H'0002'
C1IN2N           EQU  H'0003'
C2INP            EQU  H'0004'
C1IN1N           EQU  H'0005'
C1INP            EQU  H'0006'
C1IN3N           EQU  H'0007'

C2IN0N           EQU  H'0000'
SRNQ             EQU  H'0001'
SRQ              EQU  H'0002'
C2IN2N           EQU  H'0003'
C2IN1N           EQU  H'0005'
C2IN3N           EQU  H'0007'

C3IN2N           EQU  H'0003'
DACOUT           EQU  H'0005'
C3IN3N           EQU  H'0007'


;----- PORTG Bits -----------------------------------------------------
RG0              EQU  H'0000'
RG1              EQU  H'0001'
RG2              EQU  H'0002'
RG3              EQU  H'0003'
RG4              EQU  H'0004'
RG5              EQU  H'0005'

AN15             EQU  H'0001'
AN14             EQU  H'0002'
AN13             EQU  H'0003'
AN12             EQU  H'0004'
NOT_MCLR         EQU  H'0005'

SEG42            EQU  H'0000'
SEG43            EQU  H'0001'
SEG44            EQU  H'0002'
SEG45            EQU  H'0003'
SEG26            EQU  H'0004'

CPS15            EQU  H'0001'
CPS14            EQU  H'0002'
CPS13            EQU  H'0003'
CPS12            EQU  H'0004'

C3OUT_PORTG      EQU  H'0001'
C3INP            EQU  H'0002'
C3IN0N           EQU  H'0003'
C3IN1N           EQU  H'0004'

CCP3             EQU  H'0000'
TX2              EQU  H'0001'
RX2              EQU  H'0002'
CCP4             EQU  H'0003'
CCP5             EQU  H'0004'

P3A              EQU  H'0000'
CK2              EQU  H'0001'
DT2              EQU  H'0002'
P3D              EQU  H'0003'
P1D              EQU  H'0004'


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


;----- CCPTMRS0 Bits -----------------------------------------------------
C1TSEL0          EQU  H'0000'
C1TSEL1          EQU  H'0001'
C2TSEL0          EQU  H'0002'
C2TSEL1          EQU  H'0003'
C3TSEL0          EQU  H'0004'
C3TSEL1          EQU  H'0005'
C4TSEL0          EQU  H'0006'
C4TSEL1          EQU  H'0007'



;----- CCPTMRS1 Bits -----------------------------------------------------
C5TSEL0          EQU  H'0000'
C5TSEL1          EQU  H'0001'



;----- TRISF Bits -----------------------------------------------------
TRISF0           EQU  H'0000'
TRISF1           EQU  H'0001'
TRISF2           EQU  H'0002'
TRISF3           EQU  H'0003'
TRISF4           EQU  H'0004'
TRISF5           EQU  H'0005'
TRISF6           EQU  H'0006'
TRISF7           EQU  H'0007'


;----- TRISG Bits -----------------------------------------------------
TRISG0           EQU  H'0000'
TRISG1           EQU  H'0001'
TRISG2           EQU  H'0002'
TRISG3           EQU  H'0003'
TRISG4           EQU  H'0004'
TRISG5           EQU  H'0005'


;----- CCP3CON Bits -----------------------------------------------------
CCP3M0           EQU  H'0000'
CCP3M1           EQU  H'0001'
CCP3M2           EQU  H'0002'
CCP3M3           EQU  H'0003'
DC3B0            EQU  H'0004'
DC3B1            EQU  H'0005'
P3M0             EQU  H'0006'
P3M1             EQU  H'0007'


;----- PWM3CON Bits -----------------------------------------------------
P3DC0            EQU  H'0000'
P3DC1            EQU  H'0001'
P3DC2            EQU  H'0002'
P3DC3            EQU  H'0003'
P3DC4            EQU  H'0004'
P3DC5            EQU  H'0005'
P3DC6            EQU  H'0006'
P3RSEN           EQU  H'0007'


;----- CCP3AS Bits -----------------------------------------------------
PSS3BD0          EQU  H'0000'
PSS3BD1          EQU  H'0001'
PSS3AC0          EQU  H'0002'
PSS3AC1          EQU  H'0003'
CCP3AS0          EQU  H'0004'
CCP3AS1          EQU  H'0005'
CCP3AS2          EQU  H'0006'
CCP3ASE          EQU  H'0007'


;----- ECCP3AS Bits -----------------------------------------------------
PSS3BD0          EQU  H'0000'
PSS3BD1          EQU  H'0001'
PSS3AC0          EQU  H'0002'
PSS3AC1          EQU  H'0003'
CCP3AS0          EQU  H'0004'
CCP3AS1          EQU  H'0005'
CCP3AS2          EQU  H'0006'
CCP3ASE          EQU  H'0007'


;----- PSTR3CON Bits -----------------------------------------------------
STR3A            EQU  H'0000'
STR3B            EQU  H'0001'
STR3C            EQU  H'0002'
STR3D            EQU  H'0003'
STR3SYNC         EQU  H'0004'


;----- CCP4CON Bits -----------------------------------------------------
CCP4M0           EQU  H'0000'
CCP4M1           EQU  H'0001'
CCP4M2           EQU  H'0002'
CCP4M3           EQU  H'0003'
DC4B0            EQU  H'0004'
DC4B1            EQU  H'0005'


;----- CCP5CON Bits -----------------------------------------------------
CCP5M0           EQU  H'0000'
CCP5M1           EQU  H'0001'
CCP5M2           EQU  H'0002'
CCP5M3           EQU  H'0003'
DC5B0            EQU  H'0004'
DC5B1            EQU  H'0005'


;----- LATF Bits -----------------------------------------------------
LATF0            EQU  H'0000'
LATF1            EQU  H'0001'
LATF2            EQU  H'0002'
LATF3            EQU  H'0003'
LATF4            EQU  H'0004'
LATF5            EQU  H'0005'
LATF6            EQU  H'0006'
LATF7            EQU  H'0007'


;----- LATG Bits -----------------------------------------------------
LATG0            EQU  H'0000'
LATG1            EQU  H'0001'
LATG2            EQU  H'0002'
LATG3            EQU  H'0003'
LATG4            EQU  H'0004'
LATG5            EQU  H'0005'


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



;----- ANSELF Bits -----------------------------------------------------
ANSF0            EQU  H'0000'
ANSF1            EQU  H'0001'
ANSF2            EQU  H'0002'
ANSF3            EQU  H'0003'
ANSF4            EQU  H'0004'
ANSF5            EQU  H'0005'
ANSF6            EQU  H'0006'
ANSF7            EQU  H'0007'



;----- ANSELG Bits -----------------------------------------------------
ANSG1            EQU  H'0001'
ANSG2            EQU  H'0002'
ANSG3            EQU  H'0003'
ANSG4            EQU  H'0004'



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



;----- WPUG Bits -----------------------------------------------------
WPUG5            EQU  H'0005'


;----- RC2STA Bits -----------------------------------------------------
RX9D             EQU  H'0000'
OERR             EQU  H'0001'
FERR             EQU  H'0002'
ADDEN            EQU  H'0003'
CREN             EQU  H'0004'
SREN             EQU  H'0005'
RX9              EQU  H'0006'
SPEN             EQU  H'0007'


;----- TX2STA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SENDB            EQU  H'0003'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- BAUD2CON Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
SCKP             EQU  H'0004'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- LCDCON Bits -----------------------------------------------------
LMUX0            EQU  H'0000'
LMUX1            EQU  H'0001'
CS0              EQU  H'0002'
CS1              EQU  H'0003'
WERR             EQU  H'0005'
SLPEN            EQU  H'0006'
LCDEN            EQU  H'0007'



;----- LCDPS Bits -----------------------------------------------------
LP0              EQU  H'0000'
LP1              EQU  H'0001'
LP2              EQU  H'0002'
LP3              EQU  H'0003'
WA               EQU  H'0004'
LCDA             EQU  H'0005'
BIASMD           EQU  H'0006'
WFT              EQU  H'0007'



;----- LCDREF Bits -----------------------------------------------------
VLCD1PE          EQU  H'0001'
VLCD2PE          EQU  H'0002'
VLCD3PE          EQU  H'0003'
LCDIRI           EQU  H'0005'
LCDIRS           EQU  H'0006'
LCDIRE           EQU  H'0007'


;----- LCDCST Bits -----------------------------------------------------
LCDCST0          EQU  H'0000'
LCDCST1          EQU  H'0001'
LCDCST2          EQU  H'0002'



;----- LCDRL Bits -----------------------------------------------------
LRLAT0           EQU  H'0000'
LRLAT1           EQU  H'0001'
LRLAT2           EQU  H'0002'
LRLBP0           EQU  H'0004'
LRLBP1           EQU  H'0005'
LRLAP0           EQU  H'0006'
LRLAP1           EQU  H'0007'



;----- LCDSE0 Bits -----------------------------------------------------
SE0              EQU  H'0000'
SE1              EQU  H'0001'
SE2              EQU  H'0002'
SE3              EQU  H'0003'
SE4              EQU  H'0004'
SE5              EQU  H'0005'
SE6              EQU  H'0006'
SE7              EQU  H'0007'


;----- LCDSE1 Bits -----------------------------------------------------
SE8              EQU  H'0000'
SE9              EQU  H'0001'
SE10             EQU  H'0002'
SE11             EQU  H'0003'
SE12             EQU  H'0004'
SE13             EQU  H'0005'
SE14             EQU  H'0006'
SE15             EQU  H'0007'


;----- LCDSE2 Bits -----------------------------------------------------
SE16             EQU  H'0000'
SE17             EQU  H'0001'
SE18             EQU  H'0002'
SE19             EQU  H'0003'
SE20             EQU  H'0004'
SE21             EQU  H'0005'
SE22             EQU  H'0006'
SE23             EQU  H'0007'


;----- LCDSE3 Bits -----------------------------------------------------
SE24             EQU  H'0000'
SE25             EQU  H'0001'
SE26             EQU  H'0002'
SE27             EQU  H'0003'
SE28             EQU  H'0004'
SE29             EQU  H'0005'
SE30             EQU  H'0006'
SE31             EQU  H'0007'


;----- LCDSE4 Bits -----------------------------------------------------
SE32             EQU  H'0000'
SE33             EQU  H'0001'
SE34             EQU  H'0002'
SE35             EQU  H'0003'
SE36             EQU  H'0004'
SE37             EQU  H'0005'
SE38             EQU  H'0006'
SE39             EQU  H'0007'


;----- LCDSE5 Bits -----------------------------------------------------
SE40             EQU  H'0000'
SE41             EQU  H'0001'
SE42             EQU  H'0002'
SE43             EQU  H'0003'
SE44             EQU  H'0004'
SE45             EQU  H'0005'


;----- LCDDATA0 Bits -----------------------------------------------------
SEG0COM0         EQU  H'0000'
SEG1COM0         EQU  H'0001'
SEG2COM0         EQU  H'0002'
SEG3COM0         EQU  H'0003'
SEG4COM0         EQU  H'0004'
SEG5COM0         EQU  H'0005'
SEG6COM0         EQU  H'0006'
SEG7COM0         EQU  H'0007'


;----- LCDDATA1 Bits -----------------------------------------------------
SEG8COM0         EQU  H'0000'
SEG9COM0         EQU  H'0001'
SEG10COM0        EQU  H'0002'
SEG11COM0        EQU  H'0003'
SEG12COM0        EQU  H'0004'
SEG13COM0        EQU  H'0005'
SEG14COM0        EQU  H'0006'
SEG15COM0        EQU  H'0007'


;----- LCDDATA2 Bits -----------------------------------------------------
SEG16COM0        EQU  H'0000'
SEG17COM0        EQU  H'0001'
SEG18COM0        EQU  H'0002'
SEG19COM0        EQU  H'0003'
SEG20COM0        EQU  H'0004'
SEG21COM0        EQU  H'0005'
SEG22COM0        EQU  H'0006'
SEG23COM0        EQU  H'0007'


;----- LCDDATA3 Bits -----------------------------------------------------
SEG0COM1         EQU  H'0000'
SEG1COM1         EQU  H'0001'
SEG2COM1         EQU  H'0002'
SEG3COM1         EQU  H'0003'
SEG4COM1         EQU  H'0004'
SEG5COM1         EQU  H'0005'
SEG6COM1         EQU  H'0006'
SEG7COM1         EQU  H'0007'


;----- LCDDATA4 Bits -----------------------------------------------------
SEG8COM1         EQU  H'0000'
SEG9COM1         EQU  H'0001'
SEG10COM1        EQU  H'0002'
SEG11COM1        EQU  H'0003'
SEG12COM1        EQU  H'0004'
SEG13COM1        EQU  H'0005'
SEG14COM1        EQU  H'0006'
SEG15COM1        EQU  H'0007'


;----- LCDDATA5 Bits -----------------------------------------------------
SEG16COM1        EQU  H'0000'
SEG17COM1        EQU  H'0001'
SEG18COM1        EQU  H'0002'
SEG19COM1        EQU  H'0003'
SEG20COM1        EQU  H'0004'
SEG21COM1        EQU  H'0005'
SEG22COM1        EQU  H'0006'
SEG23COM1        EQU  H'0007'


;----- LCDDATA6 Bits -----------------------------------------------------
SEG0COM2         EQU  H'0000'
SEG1COM2         EQU  H'0001'
SEG2COM2         EQU  H'0002'
SEG3COM2         EQU  H'0003'
SEG4COM2         EQU  H'0004'
SEG5COM2         EQU  H'0005'
SEG6COM2         EQU  H'0006'
SEG7COM2         EQU  H'0007'


;----- LCDDATA7 Bits -----------------------------------------------------
SEG8COM2         EQU  H'0000'
SEG9COM2         EQU  H'0001'
SEG10COM2        EQU  H'0002'
SEG11COM2        EQU  H'0003'
SEG12COM2        EQU  H'0004'
SEG13COM2        EQU  H'0005'
SEG14COM2        EQU  H'0006'
SEG15COM2        EQU  H'0007'


;----- LCDDATA8 Bits -----------------------------------------------------
SEG16COM2        EQU  H'0000'
SEG17COM2        EQU  H'0001'
SEG18COM2        EQU  H'0002'
SEG19COM2        EQU  H'0003'
SEG20COM2        EQU  H'0004'
SEG21COM2        EQU  H'0005'
SEG22COM2        EQU  H'0006'
SEG23COM2        EQU  H'0007'


;----- LCDDATA9 Bits -----------------------------------------------------
SEG0COM3         EQU  H'0000'
SEG1COM3         EQU  H'0001'
SEG2COM3         EQU  H'0002'
SEG3COM3         EQU  H'0003'
SEG4COM3         EQU  H'0004'
SEG5COM3         EQU  H'0005'
SEG6COM3         EQU  H'0006'
SEG7COM3         EQU  H'0007'


;----- LCDDATA10 Bits -----------------------------------------------------
SEG8COM3         EQU  H'0000'
SEG9COM3         EQU  H'0001'
SEG10COM3        EQU  H'0002'
SEG11COM3        EQU  H'0003'
SEG12COM3        EQU  H'0004'
SEG13COM3        EQU  H'0005'
SEG14COM3        EQU  H'0006'
SEG15COM3        EQU  H'0007'


;----- LCDDATA11 Bits -----------------------------------------------------
SEG16COM3        EQU  H'0000'
SEG17COM3        EQU  H'0001'
SEG18COM3        EQU  H'0002'
SEG19COM3        EQU  H'0003'
SEG20COM3        EQU  H'0004'
SEG21COM3        EQU  H'0005'
SEG22COM3        EQU  H'0006'
SEG23COM3        EQU  H'0007'


;----- LCDDATA12 Bits -----------------------------------------------------
SEG24COM0        EQU  H'0000'
SEG25COM0        EQU  H'0001'
SEG26COM0        EQU  H'0002'
SEG27COM0        EQU  H'0003'
SEG28COM0        EQU  H'0004'
SEG29COM0        EQU  H'0005'
SEG30COM0        EQU  H'0006'
SEG31COM0        EQU  H'0007'


;----- LCDDATA13 Bits -----------------------------------------------------
SEG32COM0        EQU  H'0000'
SEG33COM0        EQU  H'0001'
SEG34COM0        EQU  H'0002'
SEG35COM0        EQU  H'0003'
SEG36COM0        EQU  H'0004'
SEG37COM0        EQU  H'0005'
SEG38COM0        EQU  H'0006'
SEG39COM0        EQU  H'0007'


;----- LCDDATA14 Bits -----------------------------------------------------
SEG40COM0        EQU  H'0000'
SEG41COM0        EQU  H'0001'
SEG42COM0        EQU  H'0002'
SEG43COM0        EQU  H'0003'
SEG44COM0        EQU  H'0004'
SEG45COM0        EQU  H'0005'


;----- LCDDATA15 Bits -----------------------------------------------------
SEG24COM1        EQU  H'0000'
SEG25COM1        EQU  H'0001'
SEG26COM1        EQU  H'0002'
SEG27COM1        EQU  H'0003'
SEG28COM1        EQU  H'0004'
SEG29COM1        EQU  H'0005'
SEG30COM1        EQU  H'0006'
SEG31COM1        EQU  H'0007'


;----- LCDDATA16 Bits -----------------------------------------------------
SEG32COM1        EQU  H'0000'
SEG33COM1        EQU  H'0001'
SEG34COM1        EQU  H'0002'
SEG35COM1        EQU  H'0003'
SEG36COM1        EQU  H'0004'
SEG37COM1        EQU  H'0005'
SEG38COM1        EQU  H'0006'
SEG39COM1        EQU  H'0007'


;----- LCDDATA17 Bits -----------------------------------------------------
SEG40COM1        EQU  H'0000'
SEG41COM1        EQU  H'0001'
SEG42COM1        EQU  H'0002'
SEG43COM1        EQU  H'0003'
SEG44COM1        EQU  H'0004'
SEG45COM1        EQU  H'0005'


;----- LCDDATA18 Bits -----------------------------------------------------
SEG24COM2        EQU  H'0000'
SEG25COM2        EQU  H'0001'
SEG26COM2        EQU  H'0002'
SEG27COM2        EQU  H'0003'
SEG28COM2        EQU  H'0004'
SEG29COM2        EQU  H'0005'
SEG30COM2        EQU  H'0006'
SEG31COM2        EQU  H'0007'


;----- LCDDATA19 Bits -----------------------------------------------------
SEG32COM2        EQU  H'0000'
SEG33COM2        EQU  H'0001'
SEG34COM2        EQU  H'0002'
SEG35COM2        EQU  H'0003'
SEG36COM2        EQU  H'0004'
SEG37COM2        EQU  H'0005'
SEG38COM2        EQU  H'0006'
SEG39COM2        EQU  H'0007'


;----- LCDDATA20 Bits -----------------------------------------------------
SEG40COM2        EQU  H'0000'
SEG41COM2        EQU  H'0001'
SEG42COM2        EQU  H'0002'
SEG43COM2        EQU  H'0003'
SEG44COM2        EQU  H'0004'
SEG45COM2        EQU  H'0005'


;----- LCDDATA21 Bits -----------------------------------------------------
SEG24COM3        EQU  H'0000'
SEG25COM3        EQU  H'0001'
SEG26COM3        EQU  H'0002'
SEG27COM3        EQU  H'0003'
SEG28COM3        EQU  H'0004'
SEG29COM3        EQU  H'0005'
SEG30COM3        EQU  H'0006'
SEG31COM3        EQU  H'0007'


;----- LCDDATA22 Bits -----------------------------------------------------
SEG32COM3        EQU  H'0000'
SEG33COM3        EQU  H'0001'
SEG34COM3        EQU  H'0002'
SEG35COM3        EQU  H'0003'
SEG36COM3        EQU  H'0004'
SEG37COM3        EQU  H'0005'
SEG38COM3        EQU  H'0006'
SEG39COM3        EQU  H'0007'


;----- LCDDATA23 Bits -----------------------------------------------------
SEG40COM3        EQU  H'0000'
SEG41COM3        EQU  H'0001'
SEG42COM3        EQU  H'0002'
SEG43COM3        EQU  H'0003'
SEG44COM3        EQU  H'0004'
SEG45COM3        EQU  H'0005'


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
       __BADRAM  H'001D'
       __BADRAM  H'009F'
       __BADRAM  H'011C'
       __BADRAM  H'018D'-H'018F'
       __BADRAM  H'0197'-H'0198'
       __BADRAM  H'020C'
       __BADRAM  H'020E'-H'0210'
       __BADRAM  H'0218'
       __BADRAM  H'028E'-H'0290'
       __BADRAM  H'0297'
       __BADRAM  H'030E'-H'0310'
       __BADRAM  H'0317'
       __BADRAM  H'031B'
       __BADRAM  H'031F'
       __BADRAM  H'038E'-H'0393'
       __BADRAM  H'0397'-H'039F'
       __BADRAM  H'040E'-H'0414'
       __BADRAM  H'0418'-H'041B'
       __BADRAM  H'041F'
       __BADRAM  H'048C'
       __BADRAM  H'048E'-H'0490'
       __BADRAM  H'0498'-H'049F'
       __BADRAM  H'050C'-H'051F'
       __BADRAM  H'058C'-H'059F'
       __BADRAM  H'060C'-H'061F'
       __BADRAM  H'0650'-H'066F'
       __BADRAM  H'068C'-H'069F'
       __BADRAM  H'06A0'-H'06EF'
       __BADRAM  H'070C'-H'071F'
       __BADRAM  H'0720'-H'076F'
       __BADRAM  H'078C'-H'0790'
       __BADRAM  H'0796'-H'0797'
       __BADRAM  H'079E'-H'079F'
       __BADRAM  H'07B8'-H'07EF'
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
_WRT_ALL         EQU  H'FFFC'    ; 000h to 3FFFh write protected, no addresses may be modified by EECON control
_WRT_HALF        EQU  H'FFFD'    ; 000h to 1FFFh write protected, 2000h to 3FFFh may be modified by EECON control
_WRT_BOOT        EQU  H'FFFE'    ; 000h to 1FFh write protected, 200h to 3FFFh may be modified by EECON control
_WRT_OFF         EQU  H'FFFF'    ; Write protection off

_VCAPEN_ON       EQU  H'FFEF'    ; VCAP functionality is enabled on VCAP pin
_VCAPEN_OFF      EQU  H'FFFF'    ; VCAP pin functionality is disabled

_PLLEN_OFF       EQU  H'FEFF'    ; 4x PLL disabled
_PLLEN_ON        EQU  H'FFFF'    ; 4x PLL enabled

_STVREN_OFF      EQU  H'FDFF'    ; Stack Overflow or Underflow will not cause a Reset
_STVREN_ON       EQU  H'FFFF'    ; Stack Overflow or Underflow will cause a Reset

_BORV_HI         EQU  H'FBFF'    ; Brown-out Reset Voltage (Vbor), high trip point selected.
_BORV_25         EQU  H'FBFF'    ; Brown-out Reset Voltage (Vbor), high trip point selected.
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
