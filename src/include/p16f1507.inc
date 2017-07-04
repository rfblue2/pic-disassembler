        LIST

;==========================================================================
;  MPASM PIC16F1507 processor include
; 
;  (c) Copyright 1999-2013 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16F1507 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16F1507
;       2. LIST directive in the source file
;               LIST   P=PIC16F1507
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16F1507
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
PIR1             EQU  H'0011'
PIR2             EQU  H'0012'
PIR3             EQU  H'0013'
TMR0             EQU  H'0015'
TMR1             EQU  H'0016'
TMR1L            EQU  H'0016'
TMR1H            EQU  H'0017'
T1CON            EQU  H'0018'
T1GCON           EQU  H'0019'
TMR2             EQU  H'001A'
PR2              EQU  H'001B'
T2CON            EQU  H'001C'

;-----Bank1------------------
TRISA            EQU  H'008C'
TRISB            EQU  H'008D'
TRISC            EQU  H'008E'
PIE1             EQU  H'0091'
PIE2             EQU  H'0092'
PIE3             EQU  H'0093'
OPTION_REG       EQU  H'0095'
PCON             EQU  H'0096'
WDTCON           EQU  H'0097'
OSCCON           EQU  H'0099'
OSCSTAT          EQU  H'009A'
ADRES            EQU  H'009B'
ADRESL           EQU  H'009B'
ADRESH           EQU  H'009C'
ADCON0           EQU  H'009D'
ADCON1           EQU  H'009E'
ADCON2           EQU  H'009F'

;-----Bank2------------------
LATA             EQU  H'010C'
LATB             EQU  H'010D'
LATC             EQU  H'010E'
BORCON           EQU  H'0116'
FVRCON           EQU  H'0117'
APFCON           EQU  H'011D'

;-----Bank3------------------
ANSELA           EQU  H'018C'
ANSELB           EQU  H'018D'
ANSELC           EQU  H'018E'
PMADR            EQU  H'0191'
PMADRL           EQU  H'0191'
PMADRH           EQU  H'0192'
PMDAT            EQU  H'0193'
PMDATL           EQU  H'0193'
PMDATH           EQU  H'0194'
PMCON1           EQU  H'0195'
PMCON2           EQU  H'0196'
VREGCON          EQU  H'0197'

;-----Bank4------------------
WPUA             EQU  H'020C'
WPUB             EQU  H'020D'

;-----Bank7------------------
IOCAP            EQU  H'0391'
IOCAN            EQU  H'0392'
IOCAF            EQU  H'0393'
IOCBP            EQU  H'0394'
IOCBN            EQU  H'0395'
IOCBF            EQU  H'0396'

;-----Bank9------------------
NCO1ACC          EQU  H'0498'
NCO1ACCL         EQU  H'0498'
NCO1ACCH         EQU  H'0499'
NCO1ACCU         EQU  H'049A'
NCO1INC          EQU  H'049B'
NCO1INCL         EQU  H'049B'
NCO1INCH         EQU  H'049C'
NCO1INCU         EQU  H'049D'
NCO1CON          EQU  H'049E'
NCO1CLK          EQU  H'049F'

;-----Bank12------------------
PWM1DCL          EQU  H'0611'
PWM1DCH          EQU  H'0612'
PWM1CON          EQU  H'0613'
PWM1CON0         EQU  H'0613'
PWM2DCL          EQU  H'0614'
PWM2DCH          EQU  H'0615'
PWM2CON          EQU  H'0616'
PWM2CON0         EQU  H'0616'
PWM3DCL          EQU  H'0617'
PWM3DCH          EQU  H'0618'
PWM3CON          EQU  H'0619'
PWM3CON0         EQU  H'0619'
PWM4DCL          EQU  H'061A'
PWM4DCH          EQU  H'061B'
PWM4CON          EQU  H'061C'
PWM4CON0         EQU  H'061C'

;-----Bank13------------------
CWG1DBR          EQU  H'0691'
CWG1DBF          EQU  H'0692'
CWG1CON0         EQU  H'0693'
CWG1CON1         EQU  H'0694'
CWG1CON2         EQU  H'0695'

;-----Bank30------------------
CLCDATA          EQU  H'0F0F'
CLC1CON          EQU  H'0F10'
CLC1POL          EQU  H'0F11'
CLC1SEL0         EQU  H'0F12'
CLC1SEL1         EQU  H'0F13'
CLC1GLS0         EQU  H'0F14'
CLC1GLS1         EQU  H'0F15'
CLC1GLS2         EQU  H'0F16'
CLC1GLS3         EQU  H'0F17'
CLC2CON          EQU  H'0F18'
CLC2POL          EQU  H'0F19'
CLC2SEL0         EQU  H'0F1A'
CLC2SEL1         EQU  H'0F1B'
CLC2GLS0         EQU  H'0F1C'
CLC2GLS1         EQU  H'0F1D'
CLC2GLS2         EQU  H'0F1E'
CLC2GLS3         EQU  H'0F1F'

;-----Bank31------------------
BSR_ICDSHAD      EQU  H'0FE3'
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


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
ADIF             EQU  H'0006'
TMR1GIF          EQU  H'0007'


;----- PIR2 Bits -----------------------------------------------------
NCO1IF           EQU  H'0002'


;----- PIR3 Bits -----------------------------------------------------
CLC1IF           EQU  H'0000'
CLC2IF           EQU  H'0001'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
NOT_T1SYNC       EQU  H'0002'
T1OSCEN          EQU  H'0003'

T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'
TMR1CS0          EQU  H'0006'
TMR1CS1          EQU  H'0007'


;----- T1GCON Bits -----------------------------------------------------
T1GVAL           EQU  H'0002'
T1GGO_NOT_DONE   EQU  H'0003'
T1GSPM           EQU  H'0004'
T1GTM            EQU  H'0005'
T1GPOL           EQU  H'0006'
TMR1GE           EQU  H'0007'

T1GSS0           EQU  H'0000'
T1GSS1           EQU  H'0001'


;----- T2CON Bits -----------------------------------------------------
TMR2ON           EQU  H'0002'

T2CKPS0          EQU  H'0000'
T2CKPS1          EQU  H'0001'
TOUTPS0          EQU  H'0003'
TOUTPS1          EQU  H'0004'
TOUTPS2          EQU  H'0005'
TOUTPS3          EQU  H'0006'


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
ADIE             EQU  H'0006'
TMR1GIE          EQU  H'0007'


;----- PIE2 Bits -----------------------------------------------------
NCO1IE           EQU  H'0002'


;----- PIE3 Bits -----------------------------------------------------
CLC1IE           EQU  H'0000'
CLC2IE           EQU  H'0001'


;----- OPTION_REG Bits -----------------------------------------------------
PSA              EQU  H'0003'
TMR0SE           EQU  H'0004'
TMR0CS           EQU  H'0005'
INTEDG           EQU  H'0006'
NOT_WPUEN        EQU  H'0007'

PS0              EQU  H'0000'
PS1              EQU  H'0001'
PS2              EQU  H'0002'
T0SE             EQU  H'0004'
T0CS             EQU  H'0005'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'
NOT_RI           EQU  H'0002'
NOT_RMCLR        EQU  H'0003'
NOT_RWDT         EQU  H'0004'
STKUNF           EQU  H'0006'
STKOVF           EQU  H'0007'


;----- WDTCON Bits -----------------------------------------------------
SWDTEN           EQU  H'0000'

WDTPS0           EQU  H'0001'
WDTPS1           EQU  H'0002'
WDTPS2           EQU  H'0003'
WDTPS3           EQU  H'0004'
WDTPS4           EQU  H'0005'


;----- OSCCON Bits -----------------------------------------------------
SCS0             EQU  H'0000'
SCS1             EQU  H'0001'
IRCF0            EQU  H'0003'
IRCF1            EQU  H'0004'
IRCF2            EQU  H'0005'
IRCF3            EQU  H'0006'


;----- OSCSTAT Bits -----------------------------------------------------
HFIOFS           EQU  H'0000'
LFIOFR           EQU  H'0001'
HFIOFR           EQU  H'0004'
OSTS             EQU  H'0005'
SOSCR            EQU  H'0007'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'

ADGO             EQU  H'0001'
CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'
CHS4             EQU  H'0006'

GO               EQU  H'0001'


;----- ADCON1 Bits -----------------------------------------------------
ADFM             EQU  H'0007'

ADPREF0          EQU  H'0000'
ADPREF1          EQU  H'0001'
ADCS0            EQU  H'0004'
ADCS1            EQU  H'0005'
ADCS2            EQU  H'0006'


;----- ADCON2 Bits -----------------------------------------------------
TRIGSEL0         EQU  H'0004'
TRIGSEL1         EQU  H'0005'
TRIGSEL2         EQU  H'0006'
TRIGSEL3         EQU  H'0007'


;----- LATA Bits -----------------------------------------------------
LATA0            EQU  H'0000'
LATA1            EQU  H'0001'
LATA2            EQU  H'0002'
LATA4            EQU  H'0004'
LATA5            EQU  H'0005'


;----- LATB Bits -----------------------------------------------------
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


;----- BORCON Bits -----------------------------------------------------
BORRDY           EQU  H'0000'
BORFS            EQU  H'0006'
SBOREN           EQU  H'0007'


;----- FVRCON Bits -----------------------------------------------------
TSRNG            EQU  H'0004'
TSEN             EQU  H'0005'
FVRRDY           EQU  H'0006'
FVREN            EQU  H'0007'

ADFVR0           EQU  H'0000'
ADFVR1           EQU  H'0001'


;----- APFCON Bits -----------------------------------------------------
NCO1SEL          EQU  H'0000'
CLC1SEL          EQU  H'0001'


;----- ANSELA Bits -----------------------------------------------------
ANSA0            EQU  H'0000'
ANSA1            EQU  H'0001'
ANSA2            EQU  H'0002'
ANSA4            EQU  H'0004'



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
WRERR            EQU  H'0003'
FREE             EQU  H'0004'
LWLO             EQU  H'0005'
CFGS             EQU  H'0006'
EEPGD            EQU  H'0007'


;----- VREGCON Bits -----------------------------------------------------
VREGPM0          EQU  H'0000'
VREGPM1          EQU  H'0001'


;----- WPUA Bits -----------------------------------------------------
WPUA0            EQU  H'0000'
WPUA1            EQU  H'0001'
WPUA2            EQU  H'0002'
WPUA3            EQU  H'0003'
WPUA4            EQU  H'0004'
WPUA5            EQU  H'0005'



;----- WPUB Bits -----------------------------------------------------
WPUB4            EQU  H'0004'
WPUB5            EQU  H'0005'
WPUB6            EQU  H'0006'
WPUB7            EQU  H'0007'



;----- IOCAP Bits -----------------------------------------------------
IOCAP0           EQU  H'0000'
IOCAP1           EQU  H'0001'
IOCAP2           EQU  H'0002'
IOCAP3           EQU  H'0003'
IOCAP4           EQU  H'0004'
IOCAP5           EQU  H'0005'



;----- IOCAN Bits -----------------------------------------------------
IOCAN0           EQU  H'0000'
IOCAN1           EQU  H'0001'
IOCAN2           EQU  H'0002'
IOCAN3           EQU  H'0003'
IOCAN4           EQU  H'0004'
IOCAN5           EQU  H'0005'



;----- IOCAF Bits -----------------------------------------------------
IOCAF0           EQU  H'0000'
IOCAF1           EQU  H'0001'
IOCAF2           EQU  H'0002'
IOCAF3           EQU  H'0003'
IOCAF4           EQU  H'0004'
IOCAF5           EQU  H'0005'



;----- IOCBP Bits -----------------------------------------------------
IOCBP4           EQU  H'0004'
IOCBP5           EQU  H'0005'
IOCBP6           EQU  H'0006'
IOCBP7           EQU  H'0007'



;----- IOCBN Bits -----------------------------------------------------
IOCBN4           EQU  H'0004'
IOCBN5           EQU  H'0005'
IOCBN6           EQU  H'0006'
IOCBN7           EQU  H'0007'



;----- IOCBF Bits -----------------------------------------------------
IOCBF4           EQU  H'0004'
IOCBF5           EQU  H'0005'
IOCBF6           EQU  H'0006'
IOCBF7           EQU  H'0007'



;----- NCO1ACCL Bits -----------------------------------------------------
NCO1ACC0         EQU  H'0000'
NCO1ACC1         EQU  H'0001'
NCO1ACC2         EQU  H'0002'
NCO1ACC3         EQU  H'0003'
NCO1ACC4         EQU  H'0004'
NCO1ACC5         EQU  H'0005'
NCO1ACC6         EQU  H'0006'
NCO1ACC7         EQU  H'0007'


;----- NCO1ACCH Bits -----------------------------------------------------
NCO1ACC8         EQU  H'0000'
NCO1ACC9         EQU  H'0001'
NCO1ACC10        EQU  H'0002'
NCO1ACC11        EQU  H'0003'
NCO1ACC12        EQU  H'0004'
NCO1ACC13        EQU  H'0005'
NCO1ACC14        EQU  H'0006'
NCO1ACC15        EQU  H'0007'


;----- NCO1ACCU Bits -----------------------------------------------------
NCO1ACC16        EQU  H'0000'
NCO1ACC17        EQU  H'0001'
NCO1ACC18        EQU  H'0002'
NCO1ACC19        EQU  H'0003'


;----- NCO1INCL Bits -----------------------------------------------------
NCO1INC0         EQU  H'0000'
NCO1INC1         EQU  H'0001'
NCO1INC2         EQU  H'0002'
NCO1INC3         EQU  H'0003'
NCO1INC4         EQU  H'0004'
NCO1INC5         EQU  H'0005'
NCO1INC6         EQU  H'0006'
NCO1INC7         EQU  H'0007'


;----- NCO1INCH Bits -----------------------------------------------------
NCO1INC8         EQU  H'0000'
NCO1INC9         EQU  H'0001'
NCO1INC10        EQU  H'0002'
NCO1INC11        EQU  H'0003'
NCO1INC12        EQU  H'0004'
NCO1INC13        EQU  H'0005'
NCO1INC14        EQU  H'0006'
NCO1INC15        EQU  H'0007'


;----- NCO1CON Bits -----------------------------------------------------
N1PFM            EQU  H'0000'
N1POL            EQU  H'0004'
N1OUT            EQU  H'0005'
N1OE             EQU  H'0006'
N1EN             EQU  H'0007'


;----- NCO1CLK Bits -----------------------------------------------------
N1CKS0           EQU  H'0000'
N1CKS1           EQU  H'0001'
N1PWS0           EQU  H'0005'
N1PWS1           EQU  H'0006'
N1PWS2           EQU  H'0007'


;----- PWM1DCL Bits -----------------------------------------------------
PWM1DCL0         EQU  H'0006'
PWM1DCL1         EQU  H'0007'


;----- PWM1DCH Bits -----------------------------------------------------
PWM1DCH0         EQU  H'0000'
PWM1DCH1         EQU  H'0001'
PWM1DCH2         EQU  H'0002'
PWM1DCH3         EQU  H'0003'
PWM1DCH4         EQU  H'0004'
PWM1DCH5         EQU  H'0005'
PWM1DCH6         EQU  H'0006'
PWM1DCH7         EQU  H'0007'


;----- PWM1CON Bits -----------------------------------------------------
PWM1POL          EQU  H'0004'
PWM1OUT          EQU  H'0005'
PWM1OE           EQU  H'0006'
PWM1EN           EQU  H'0007'


;----- PWM1CON0 Bits -----------------------------------------------------
PWM1POL          EQU  H'0004'
PWM1OUT          EQU  H'0005'
PWM1OE           EQU  H'0006'
PWM1EN           EQU  H'0007'


;----- PWM2DCL Bits -----------------------------------------------------
PWM2DCL0         EQU  H'0006'
PWM2DCL1         EQU  H'0007'


;----- PWM2DCH Bits -----------------------------------------------------
PWM2DCH0         EQU  H'0000'
PWM2DCH1         EQU  H'0001'
PWM2DCH2         EQU  H'0002'
PWM2DCH3         EQU  H'0003'
PWM2DCH4         EQU  H'0004'
PWM2DCH5         EQU  H'0005'
PWM2DCH6         EQU  H'0006'
PWM2DCH7         EQU  H'0007'


;----- PWM2CON Bits -----------------------------------------------------
PWM2POL          EQU  H'0004'
PWM2OUT          EQU  H'0005'
PWM2OE           EQU  H'0006'
PWM2EN           EQU  H'0007'


;----- PWM2CON0 Bits -----------------------------------------------------
PWM2POL          EQU  H'0004'
PWM2OUT          EQU  H'0005'
PWM2OE           EQU  H'0006'
PWM2EN           EQU  H'0007'


;----- PWM3DCL Bits -----------------------------------------------------
PWM3DCL0         EQU  H'0006'
PWM3DCL1         EQU  H'0007'


;----- PWM3DCH Bits -----------------------------------------------------
PWM3DCH0         EQU  H'0000'
PWM3DCH1         EQU  H'0001'
PWM3DCH2         EQU  H'0002'
PWM3DCH3         EQU  H'0003'
PWM3DCH4         EQU  H'0004'
PWM3DCH5         EQU  H'0005'
PWM3DCH6         EQU  H'0006'
PWM3DCH7         EQU  H'0007'


;----- PWM3CON Bits -----------------------------------------------------
PWM3POL          EQU  H'0004'
PWM3OUT          EQU  H'0005'
PWM3OE           EQU  H'0006'
PWM3EN           EQU  H'0007'


;----- PWM3CON0 Bits -----------------------------------------------------
PWM3POL          EQU  H'0004'
PWM3OUT          EQU  H'0005'
PWM3OE           EQU  H'0006'
PWM3EN           EQU  H'0007'


;----- PWM4DCL Bits -----------------------------------------------------
PWM4DCL0         EQU  H'0006'
PWM4DCL1         EQU  H'0007'


;----- PWM4DCH Bits -----------------------------------------------------
PWM4DCH0         EQU  H'0000'
PWM4DCH1         EQU  H'0001'
PWM4DCH2         EQU  H'0002'
PWM4DCH3         EQU  H'0003'
PWM4DCH4         EQU  H'0004'
PWM4DCH5         EQU  H'0005'
PWM4DCH6         EQU  H'0006'
PWM4DCH7         EQU  H'0007'


;----- PWM4CON Bits -----------------------------------------------------
PWM4POL          EQU  H'0004'
PWM4OUT          EQU  H'0005'
PWM4OE           EQU  H'0006'
PWM4EN           EQU  H'0007'


;----- PWM4CON0 Bits -----------------------------------------------------
PWM4POL          EQU  H'0004'
PWM4OUT          EQU  H'0005'
PWM4OE           EQU  H'0006'
PWM4EN           EQU  H'0007'


;----- CWG1DBR Bits -----------------------------------------------------
CWG1DBR0         EQU  H'0000'
CWG1DBR1         EQU  H'0001'
CWG1DBR2         EQU  H'0002'
CWG1DBR3         EQU  H'0003'
CWG1DBR4         EQU  H'0004'
CWG1DBR5         EQU  H'0005'


;----- CWG1DBF Bits -----------------------------------------------------
CWG1DBF0         EQU  H'0000'
CWG1DBF1         EQU  H'0001'
CWG1DBF2         EQU  H'0002'
CWG1DBF3         EQU  H'0003'
CWG1DBF4         EQU  H'0004'
CWG1DBF5         EQU  H'0005'


;----- CWG1CON0 Bits -----------------------------------------------------
G1CS0            EQU  H'0000'
G1POLA           EQU  H'0003'
G1POLB           EQU  H'0004'
G1OEA            EQU  H'0005'
G1OEB            EQU  H'0006'
G1EN             EQU  H'0007'



;----- CWG1CON1 Bits -----------------------------------------------------
G1IS0            EQU  H'0000'
G1IS1            EQU  H'0001'
G1IS2            EQU  H'0002'

G1ASDLA0         EQU  H'0004'
G1ASDLA1         EQU  H'0005'
G1ASDLB0         EQU  H'0006'
G1ASDLB1         EQU  H'0007'


;----- CWG1CON2 Bits -----------------------------------------------------
G1ASDSCLC2       EQU  H'0000'
G1ASDSFLT        EQU  H'0001'
G1ARSEN          EQU  H'0006'
G1ASE            EQU  H'0007'


;----- CLCDATA Bits -----------------------------------------------------
MCLC1OUT         EQU  H'0000'
MCLC2OUT         EQU  H'0001'


;----- CLC1CON Bits -----------------------------------------------------
LC1MODE0         EQU  H'0000'
LC1MODE1         EQU  H'0001'
LC1MODE2         EQU  H'0002'
LC1INTN          EQU  H'0003'
LC1INTP          EQU  H'0004'
LC1OUT           EQU  H'0005'
LC1OE            EQU  H'0006'
LC1EN            EQU  H'0007'

LCMODE0          EQU  H'0000'
LCMODE1          EQU  H'0001'
LCMODE2          EQU  H'0002'
LCINTN           EQU  H'0003'
LCINTP           EQU  H'0004'
LCOUT            EQU  H'0005'
LCOE             EQU  H'0006'
LCEN             EQU  H'0007'



;----- CLC1POL Bits -----------------------------------------------------
LC1G1POL         EQU  H'0000'
LC1G2POL         EQU  H'0001'
LC1G3POL         EQU  H'0002'
LC1G4POL         EQU  H'0003'
LC1POL           EQU  H'0007'

G1POL            EQU  H'0000'
G2POL            EQU  H'0001'
G3POL            EQU  H'0002'
G4POL            EQU  H'0003'
POL              EQU  H'0007'


;----- CLC1SEL0 Bits -----------------------------------------------------
LC1D1S0          EQU  H'0000'
LC1D1S1          EQU  H'0001'
LC1D1S2          EQU  H'0002'
LC1D2S0          EQU  H'0004'
LC1D2S1          EQU  H'0005'
LC1D2S2          EQU  H'0006'

D1S0             EQU  H'0000'
D1S1             EQU  H'0001'
D1S2             EQU  H'0002'
D2S0             EQU  H'0004'
D2S1             EQU  H'0005'
D2S2             EQU  H'0006'



;----- CLC1SEL1 Bits -----------------------------------------------------
LC1D3S0          EQU  H'0000'
LC1D3S1          EQU  H'0001'
LC1D3S2          EQU  H'0002'
LC1D4S0          EQU  H'0004'
LC1D4S1          EQU  H'0005'
LC1D4S2          EQU  H'0006'

D3S0             EQU  H'0000'
D3S1             EQU  H'0001'
D3S2             EQU  H'0002'
D4S0             EQU  H'0004'
D4S1             EQU  H'0005'
D4S2             EQU  H'0006'



;----- CLC1GLS0 Bits -----------------------------------------------------
LC1G1D1N         EQU  H'0000'
LC1G1D1T         EQU  H'0001'
LC1G1D2N         EQU  H'0002'
LC1G1D2T         EQU  H'0003'
LC1G1D3N         EQU  H'0004'
LC1G1D3T         EQU  H'0005'
LC1G1D4N         EQU  H'0006'
LC1G1D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC1GLS1 Bits -----------------------------------------------------
LC1G2D1N         EQU  H'0000'
LC1G2D1T         EQU  H'0001'
LC1G2D2N         EQU  H'0002'
LC1G2D2T         EQU  H'0003'
LC1G2D3N         EQU  H'0004'
LC1G2D3T         EQU  H'0005'
LC1G2D4N         EQU  H'0006'
LC1G2D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC1GLS2 Bits -----------------------------------------------------
LC1G3D1N         EQU  H'0000'
LC1G3D1T         EQU  H'0001'
LC1G3D2N         EQU  H'0002'
LC1G3D2T         EQU  H'0003'
LC1G3D3N         EQU  H'0004'
LC1G3D3T         EQU  H'0005'
LC1G3D4N         EQU  H'0006'
LC1G3D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC1GLS3 Bits -----------------------------------------------------
LC1G4D1N         EQU  H'0000'
LC1G4D1T         EQU  H'0001'
LC1G4D2N         EQU  H'0002'
LC1G4D2T         EQU  H'0003'
LC1G4D3N         EQU  H'0004'
LC1G4D3T         EQU  H'0005'
LC1G4D4N         EQU  H'0006'
LC1G4D4T         EQU  H'0007'

G4D1N            EQU  H'0000'
G4D1T            EQU  H'0001'
G4D2N            EQU  H'0002'
G4D2T            EQU  H'0003'
G4D3N            EQU  H'0004'
G4D3T            EQU  H'0005'
G4D4N            EQU  H'0006'
G4D4T            EQU  H'0007'


;----- CLC2CON Bits -----------------------------------------------------
LC2MODE0         EQU  H'0000'
LC2MODE1         EQU  H'0001'
LC2MODE2         EQU  H'0002'
LC2INTN          EQU  H'0003'
LC2INTP          EQU  H'0004'
LC2OUT           EQU  H'0005'
LC2OE            EQU  H'0006'
LC2EN            EQU  H'0007'

LCMODE0          EQU  H'0000'
LCMODE1          EQU  H'0001'
LCMODE2          EQU  H'0002'
LCINTN           EQU  H'0003'
LCINTP           EQU  H'0004'
LCOUT            EQU  H'0005'
LCOE             EQU  H'0006'
LCEN             EQU  H'0007'



;----- CLC2POL Bits -----------------------------------------------------
LC2G1POL         EQU  H'0000'
LC2G2POL         EQU  H'0001'
LC2G3POL         EQU  H'0002'
LC2G4POL         EQU  H'0003'
LC2POL           EQU  H'0007'

G1POL            EQU  H'0000'
G2POL            EQU  H'0001'
G3POL            EQU  H'0002'
G4POL            EQU  H'0003'
POL              EQU  H'0007'


;----- CLC2SEL0 Bits -----------------------------------------------------
LC2D1S0          EQU  H'0000'
LC2D1S1          EQU  H'0001'
LC2D1S2          EQU  H'0002'
LC2D2S0          EQU  H'0004'
LC2D2S1          EQU  H'0005'
LC2D2S2          EQU  H'0006'

D1S0             EQU  H'0000'
D1S1             EQU  H'0001'
D1S2             EQU  H'0002'
D2S0             EQU  H'0004'
D2S1             EQU  H'0005'
D2S2             EQU  H'0006'



;----- CLC2SEL1 Bits -----------------------------------------------------
LC2D3S0          EQU  H'0000'
LC2D3S1          EQU  H'0001'
LC2D3S2          EQU  H'0002'
LC2D4S0          EQU  H'0004'
LC2D4S1          EQU  H'0005'
LC2D4S2          EQU  H'0006'

D3S0             EQU  H'0000'
D3S1             EQU  H'0001'
D3S2             EQU  H'0002'
D4S0             EQU  H'0004'
D4S1             EQU  H'0005'
D4S2             EQU  H'0006'



;----- CLC2GLS0 Bits -----------------------------------------------------
LC2G1D1N         EQU  H'0000'
LC2G1D1T         EQU  H'0001'
LC2G1D2N         EQU  H'0002'
LC2G1D2T         EQU  H'0003'
LC2G1D3N         EQU  H'0004'
LC2G1D3T         EQU  H'0005'
LC2G1D4N         EQU  H'0006'
LC2G1D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC2GLS1 Bits -----------------------------------------------------
LC2G2D1N         EQU  H'0000'
LC2G2D1T         EQU  H'0001'
LC2G2D2N         EQU  H'0002'
LC2G2D2T         EQU  H'0003'
LC2G2D3N         EQU  H'0004'
LC2G2D3T         EQU  H'0005'
LC2G2D4N         EQU  H'0006'
LC2G2D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC2GLS2 Bits -----------------------------------------------------
LC2G3D1N         EQU  H'0000'
LC2G3D1T         EQU  H'0001'
LC2G3D2N         EQU  H'0002'
LC2G3D2T         EQU  H'0003'
LC2G3D3N         EQU  H'0004'
LC2G3D3T         EQU  H'0005'
LC2G3D4N         EQU  H'0006'
LC2G3D4T         EQU  H'0007'

D1N              EQU  H'0000'
D1T              EQU  H'0001'
D2N              EQU  H'0002'
D2T              EQU  H'0003'
D3N              EQU  H'0004'
D3T              EQU  H'0005'
D4N              EQU  H'0006'
D4T              EQU  H'0007'


;----- CLC2GLS3 Bits -----------------------------------------------------
LC2G4D1N         EQU  H'0000'
LC2G4D1T         EQU  H'0001'
LC2G4D2N         EQU  H'0002'
LC2G4D2T         EQU  H'0003'
LC2G4D3N         EQU  H'0004'
LC2G4D3T         EQU  H'0005'
LC2G4D4N         EQU  H'0006'
LC2G4D4T         EQU  H'0007'

G4D1N            EQU  H'0000'
G4D1T            EQU  H'0001'
G4D2N            EQU  H'0002'
G4D2T            EQU  H'0003'
G4D3N            EQU  H'0004'
G4D3T            EQU  H'0005'
G4D4N            EQU  H'0006'
G4D4T            EQU  H'0007'


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
       __BADRAM  H'000F'
       __BADRAM  H'0010'
       __BADRAM  H'0014'
       __BADRAM  H'001D'-H'001F'
       __BADRAM  H'008F'
       __BADRAM  H'0090'
       __BADRAM  H'0094'
       __BADRAM  H'0098'
       __BADRAM  H'00C0'-H'00EF'
       __BADRAM  H'010F'-H'0115'
       __BADRAM  H'0118'-H'011C'
       __BADRAM  H'011E'-H'011F'
       __BADRAM  H'0120'-H'016F'
       __BADRAM  H'018F'-H'0190'
       __BADRAM  H'0198'-H'019F'
       __BADRAM  H'01A0'-H'01EF'
       __BADRAM  H'020E'-H'021F'
       __BADRAM  H'0220'-H'026F'
       __BADRAM  H'028C'-H'029F'
       __BADRAM  H'02A0'-H'02EF'
       __BADRAM  H'030C'-H'031F'
       __BADRAM  H'0320'-H'036F'
       __BADRAM  H'038C'-H'0390'
       __BADRAM  H'0397'-H'039F'
       __BADRAM  H'03A0'-H'03EF'
       __BADRAM  H'040C'-H'041F'
       __BADRAM  H'0420'-H'046F'
       __BADRAM  H'048C'-H'0497'
       __BADRAM  H'04A0'-H'04EF'
       __BADRAM  H'050C'-H'051F'
       __BADRAM  H'0520'-H'056F'
       __BADRAM  H'058C'-H'059F'
       __BADRAM  H'05A0'-H'05EF'
       __BADRAM  H'060C'-H'0610'
       __BADRAM  H'061D'-H'061F'
       __BADRAM  H'0620'-H'066F'
       __BADRAM  H'068C'-H'0690'
       __BADRAM  H'0696'-H'069F'
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
       __BADRAM  H'0F0C'-H'0F0E'
       __BADRAM  H'0F20'-H'0F6F'
       __BADRAM  H'0F8C'-H'0FE2'
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
_FOSC_INTOSC     EQU  H'FFFC'    ; Internal Oscillator, I/O Function on OSC1
_FOSC_ECL        EQU  H'FFFD'    ; External Clock, Low Power Mode
_FOSC_ECM        EQU  H'FFFE'    ; External Clock, Medium Power Mode
_FOSC_ECH        EQU  H'FFFF'    ; External Clock, High Power Mode

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

_BOREN_OFF       EQU  H'F9FF'    ; Brown-out Reset disabled
_BOREN_SBODEN    EQU  H'FBFF'    ; Brown-out Reset controlled by the SBOREN bit in the BORCON register
_BOREN_NSLEEP    EQU  H'FDFF'    ; Brown-out Reset enabled while running and disabled in Sleep
_BOREN_ON        EQU  H'FFFF'    ; Brown-out Reset enabled

_CLKOUTEN_ON     EQU  H'F7FF'    ; CLKOUT function is enabled on the CLKOUT pin
_CLKOUTEN_OFF    EQU  H'FFFF'    ; CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin

;----- CONFIG2 Options --------------------------------------------------
_WRT_ALL         EQU  H'FFFC'    ; 000h to 1FFFh write protected, no addresses may be modified by EECON control
_WRT_HALF        EQU  H'FFFD'    ; 000h to FFFh write protected, 1000h to 1FFFh may be modified by EECON control
_WRT_BOOT        EQU  H'FFFE'    ; 000h to 1FFh write protected, 200h to 1FFFh may be modified by EECON control
_WRT_OFF         EQU  H'FFFF'    ; Write protection off

_STVREN_OFF      EQU  H'FDFF'    ; Stack Overflow or Underflow will not cause a Reset
_STVREN_ON       EQU  H'FFFF'    ; Stack Overflow or Underflow will cause a Reset

_BORV_HI         EQU  H'FBFF'    ; Brown-out Reset Voltage (Vbor), high trip point selected.
_BORV_LO         EQU  H'FFFF'    ; Brown-out Reset Voltage (Vbor), low trip point selected.

_LPBOR_ON        EQU  H'F7FF'    ; Low-Power BOR is enabled
_LPBOR_OFF       EQU  H'FFFF'    ; Low-Power BOR is disabled

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
