        LIST

;==========================================================================
;  MPASM PIC16F721 processor include
; 
;  (c) Copyright 1999-2013 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16F721 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16F721
;       2. LIST directive in the source file
;               LIST   P=PIC16F721
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16F721
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
SSPBUF           EQU  H'0013'
SSPCON           EQU  H'0014'
CCPR1            EQU  H'0015'
CCPR1L           EQU  H'0015'
CCPR1H           EQU  H'0016'
CCP1CON          EQU  H'0017'
RCSTA            EQU  H'0018'
TXREG            EQU  H'0019'
RCREG            EQU  H'001A'
ADRES            EQU  H'001E'
ADCON0           EQU  H'001F'

;-----Bank1------------------
OPTION_REG       EQU  H'0081'
TRISA            EQU  H'0085'
TRISB            EQU  H'0086'
TRISC            EQU  H'0087'
PIE1             EQU  H'008C'
PCON             EQU  H'008E'
T1GCON           EQU  H'008F'
OSCCON           EQU  H'0090'
OSCTUNE          EQU  H'0091'
PR2              EQU  H'0092'
SSPADD           EQU  H'0093'
SSPMSK           EQU  H'0093'
SSPSTAT          EQU  H'0094'
WPUA             EQU  H'0095'
IOCA             EQU  H'0096'
TXSTA            EQU  H'0098'
SPBRG            EQU  H'0099'
FVRCON           EQU  H'009D'
ADCON1           EQU  H'009F'

;-----Bank2------------------
PMDATL           EQU  H'010C'
PMADRL           EQU  H'010D'
PMDATH           EQU  H'010E'
PMADRH           EQU  H'010F'
WPUB             EQU  H'0115'
IOCB             EQU  H'0116'

;-----Bank3------------------
ANSELA           EQU  H'0185'
ANSELB           EQU  H'0186'
ANSELC           EQU  H'0187'
PMCON1           EQU  H'018C'
PMCON2           EQU  H'018D'

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
RABIF            EQU  H'0000'
INTF             EQU  H'0001'
TMR0IF           EQU  H'0002'
RABIE            EQU  H'0003'
INTE             EQU  H'0004'
TMR0IE           EQU  H'0005'
PEIE             EQU  H'0006'
GIE              EQU  H'0007'


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
CCP1IF           EQU  H'0002'
SSPIF            EQU  H'0003'
TXIF             EQU  H'0004'
RCIF             EQU  H'0005'
ADIF             EQU  H'0006'
TMR1GIF          EQU  H'0007'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
T1SYNC           EQU  H'0002'

NOT_T1SYNC       EQU  H'0002'
T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'
TMR1CS0          EQU  H'0006'
TMR1CS1          EQU  H'0007'


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
B1               EQU  H'0004'
DC1              EQU  H'0005'

CCP1M0           EQU  H'0000'
CCP1M1           EQU  H'0001'
CCP1M2           EQU  H'0002'
CCP1M3           EQU  H'0003'
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


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'

CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'


;----- OPTION_REG Bits -----------------------------------------------------
PSA              EQU  H'0003'
T0SE             EQU  H'0004'
T0CS             EQU  H'0005'
INTEDG           EQU  H'0006'
NOT_RABPU        EQU  H'0007'

PS0              EQU  H'0000'
PS1              EQU  H'0001'
PS2              EQU  H'0002'


;----- TRISA Bits -----------------------------------------------------
TRISA0           EQU  H'0000'
TRISA1           EQU  H'0001'
TRISA2           EQU  H'0002'
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
CCP1IE           EQU  H'0002'
SSPIE            EQU  H'0003'
TXIE             EQU  H'0004'
RCIE             EQU  H'0005'
ADIE             EQU  H'0006'
TMR1GIE          EQU  H'0007'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'


;----- T1GCON Bits -----------------------------------------------------
T1GVAL           EQU  H'0002'
T1GGO_DONE       EQU  H'0003'
T1GSPM           EQU  H'0004'
T1GTM            EQU  H'0005'
T1GPOL           EQU  H'0006'
TMR1GE           EQU  H'0007'

T1GSS0           EQU  H'0000'
T1GSS1           EQU  H'0001'
T1GGO_NOT_DONE   EQU  H'0003'


;----- OSCCON Bits -----------------------------------------------------
ICSS             EQU  H'0002'
ICSL             EQU  H'0003'

IRCF0            EQU  H'0004'
IRCF1            EQU  H'0005'


;----- OSCTUNE Bits -----------------------------------------------------
TUN0             EQU  H'0000'
TUN1             EQU  H'0001'
TUN2             EQU  H'0002'
TUN3             EQU  H'0003'
TUN4             EQU  H'0004'
TUN5             EQU  H'0005'


;----- SSPADD Bits -----------------------------------------------------
ADD0             EQU  H'0000'
ADD1             EQU  H'0001'
ADD2             EQU  H'0002'
ADD3             EQU  H'0003'
ADD4             EQU  H'0004'
ADD5             EQU  H'0005'
ADD6             EQU  H'0006'
ADD7             EQU  H'0007'


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


;----- WPUA Bits -----------------------------------------------------
WPUA0            EQU  H'0000'
WPUA1            EQU  H'0001'
WPUA2            EQU  H'0002'
WPUA3            EQU  H'0003'
WPUA4            EQU  H'0004'
WPUA5            EQU  H'0005'


;----- IOCA Bits -----------------------------------------------------
IOCA0            EQU  H'0000'
IOCA1            EQU  H'0001'
IOCA2            EQU  H'0002'
IOCA3            EQU  H'0003'
IOCA4            EQU  H'0004'
IOCA5            EQU  H'0005'


;----- TXSTA Bits -----------------------------------------------------
TX9D             EQU  H'0000'
TRMT             EQU  H'0001'
BRGH             EQU  H'0002'
SYNC             EQU  H'0004'
TXEN             EQU  H'0005'
TX9              EQU  H'0006'
CSRC             EQU  H'0007'


;----- FVRCON Bits -----------------------------------------------------
ADFVR0           EQU  H'0000'
ADFVR1           EQU  H'0001'
TSRNG            EQU  H'0004'
TSEN             EQU  H'0005'
FVREN            EQU  H'0006'
FVRRDY           EQU  H'0007'


;----- ADCON1 Bits -----------------------------------------------------
ADCS0            EQU  H'0004'
ADCS1            EQU  H'0005'
ADCS2            EQU  H'0006'


;----- WPUB Bits -----------------------------------------------------
WPUB4            EQU  H'0004'
WPUB5            EQU  H'0005'
WPUB6            EQU  H'0006'
WPUB7            EQU  H'0007'


;----- IOCB Bits -----------------------------------------------------
IOCB4            EQU  H'0004'
IOCB5            EQU  H'0005'
IOCB6            EQU  H'0006'
IOCB7            EQU  H'0007'


;----- ANSELA Bits -----------------------------------------------------
ANSA0            EQU  H'0000'
ANSA1            EQU  H'0001'
ANSA2            EQU  H'0002'
ANSA4            EQU  H'0004'
ANSA5            EQU  H'0005'


;----- ANSELB Bits -----------------------------------------------------
ANSB4            EQU  H'0004'
ANSB5            EQU  H'0005'


;----- ANSELC Bits -----------------------------------------------------
ANSC0            EQU  H'0000'
ANSC1            EQU  H'0001'
ANSC2            EQU  H'0002'
ANSC3            EQU  H'0003'
ANSC6            EQU  H'0006'
ANSC7            EQU  H'0007'


;----- PMCON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
FREE             EQU  H'0004'
LWLO             EQU  H'0005'
CFGS             EQU  H'0006'




;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'01FF'
       __BADRAM  H'0008'-H'0009'
       __BADRAM  H'000D'
       __BADRAM  H'001B'-H'001D'
       __BADRAM  H'0088'-H'0089'
       __BADRAM  H'008D'
       __BADRAM  H'0097'
       __BADRAM  H'009A'-H'009C'
       __BADRAM  H'009E'
       __BADRAM  H'0105'-H'0109'
       __BADRAM  H'0110'-H'0114'
       __BADRAM  H'0117'-H'011F'
       __BADRAM  H'0188'-H'0189'
       __BADRAM  H'018E'-H'019F'
       __BADRAM  H'01A0'-H'01EF'

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
_FOSC_INTOSCIO       EQU  H'3FFC'    ; INTOSCIO oscillator: I/O function on RA4/CLKO pin, I/O function on RA5/CLKI
_INTOSC_NOCLKOUT     EQU  H'3FFC'    ; INTOSCIO oscillator: I/O function on RA4/CLKO pin, I/O function on RA5/CLKI
_FOSC_INTOSCCLK      EQU  H'3FFD'    ; INTOSC oscillator: CLKO function on RA4/CLKO pin, I/O function on RA5/CLKI
_INTOSC_CLKOUT       EQU  H'3FFD'    ; INTOSC oscillator: CLKO function on RA4/CLKO pin, I/O function on RA5/CLKI
_FOSC_ECIO           EQU  H'3FFE'    ; EC oscillator: I/O function on RA4/CLKO pin, CLKI on RA5/CLKI
_EC_OSC_NOCLKOUT     EQU  H'3FFE'    ; EC oscillator: I/O function on RA4/CLKO pin, CLKI on RA5/CLKI
_FOSC_ECCLK          EQU  H'3FFF'    ; EC oscillator: CLKO function on RA4/CLKO pin, CLKI on RA5/CLKI
_EC_OSC_CLKOUT       EQU  H'3FFF'    ; EC oscillator: CLKO function on RA4/CLKO pin, CLKI on RA5/CLKI

_WDTE_OFF            EQU  H'3FF7'    ; WDT disabled
_WDTEN_OFF           EQU  H'3FF7'    ; WDT disabled
_WDTE_ON             EQU  H'3FFF'    ; WDT enabled
_WDTEN_ON            EQU  H'3FFF'    ; WDT enabled

_PWRTE_ON            EQU  H'3FEF'    ; PWRT enabled
_PWRTE_OFF           EQU  H'3FFF'    ; PWRT disabled

_MCLRE_OFF           EQU  H'3FDF'    ; RA3/MCLR/VPP pin function is digital input; MCLR internally disabled; Weak pull-up disabled
_MCLRE_ON            EQU  H'3FFF'    ; RA3/MCLR/VPP pin function is MCLR; Weak pull-up enabled.

_CP_ON               EQU  H'3FBF'    ; 0000h to 0FFFh code protection on
_CP_OFF              EQU  H'3FFF'    ; Code protection off

_BOREN_OFF           EQU  H'3CFF'    ; Brown-out Reset disabled (Preconditioned State)
_BOREN_NSLEEP        EQU  H'3EFF'    ; Brown-out Reset enabled during operation and disabled in Sleep
_BOREN_ON            EQU  H'3FFF'    ; Brown-out Reset enabled

_PLLEN_OFF           EQU  H'2FFF'    ; INTOSC Frequency is 500 kHz
_PLLEN_ON            EQU  H'3FFF'    ; INTOSC Frequency is 16 MHz (32x)

;----- CONFIG2 Options --------------------------------------------------
_WRTEN_FULL          EQU  H'3FFC'    ; 0h to FFFh of flash memory write protected, no address may be modified
_WRTEN_HALF          EQU  H'3FFD'    ; 0h to 7FFh of flash memory write protected, 800h to FFFh may be modified
_WRTEN_BOOT          EQU  H'3FFE'    ; 0h to 1FFh of flash memory write protected, 200h to FFFh may be modified
_WRTEN_OFF           EQU  H'3FFF'    ; Write protection off

;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'2006'

;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'2000'
_IDLOC1          EQU  H'2001'
_IDLOC2          EQU  H'2002'
_IDLOC3          EQU  H'2003'

        LIST
