        LIST

;==========================================================================
;  MPASM PIC16F753 processor include
; 
;  (c) Copyright 1999-2013 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16F753 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16F753
;       2. LIST directive in the source file
;               LIST   P=PIC16F753
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16F753
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
IOCAF            EQU  H'0008'
IOCCF            EQU  H'0009'
PCLATH           EQU  H'000A'
INTCON           EQU  H'000B'
PIR1             EQU  H'000C'
PIR2             EQU  H'000D'
TMR1             EQU  H'000F'
TMR1L            EQU  H'000F'
TMR1H            EQU  H'0010'
T1CON            EQU  H'0011'
T1GCON           EQU  H'0012'
CCPR1            EQU  H'0013'
CCPR1L           EQU  H'0013'
CCPR1H           EQU  H'0014'
CCP1CON          EQU  H'0015'
ADRES            EQU  H'001C'
ADRESL           EQU  H'001C'
ADRESH           EQU  H'001D'
ADCON0           EQU  H'001E'
ADCON1           EQU  H'001F'

;-----Bank1------------------
OPTION_REG       EQU  H'0081'
TRISA            EQU  H'0085'
TRISC            EQU  H'0087'
IOCAP            EQU  H'0088'
IOCCP            EQU  H'0089'
PIE1             EQU  H'008C'
PIE2             EQU  H'008D'
OSCCON           EQU  H'008F'
FVR1CON0         EQU  H'0090'
DAC1CON0         EQU  H'0091'
DAC1CON1         EQU  H'0092'
DAC1CON2         EQU  H'0093'
OPA1CON          EQU  H'0096'
C2CON0           EQU  H'009B'
CM2CON0          EQU  H'009B'
C2CON1           EQU  H'009C'
CM2CON1          EQU  H'009C'
C1CON0           EQU  H'009D'
CM1CON0          EQU  H'009D'
C1CON1           EQU  H'009E'
CM1CON1          EQU  H'009E'
CMOUT            EQU  H'009F'
MCOUT            EQU  H'009F'

;-----Bank2------------------
LATA             EQU  H'0105'
LATC             EQU  H'0107'
IOCAN            EQU  H'0108'
IOCCN            EQU  H'0109'
WPUA             EQU  H'010C'
WPUC             EQU  H'010D'
SLRCONC          EQU  H'010E'
PCON             EQU  H'010F'
TMR2             EQU  H'0110'
PR2              EQU  H'0111'
T2CON            EQU  H'0112'
TMR4A            EQU  H'0113'
PR4A             EQU  H'0114'
T4ACON0          EQU  H'0115'
T4ACON1          EQU  H'0116'
TMR6A            EQU  H'0117'
PR6A             EQU  H'0118'
T6ACON0          EQU  H'0119'
T6ACON1          EQU  H'011A'
SLPCCON0         EQU  H'011E'
SLPCCON1         EQU  H'011F'

;-----Bank3------------------
ANSELA           EQU  H'0185'
ANSELC           EQU  H'0187'
APFCON           EQU  H'0188'
OSCTUNE          EQU  H'0189'
PMCON1           EQU  H'018C'
PMCON2           EQU  H'018D'
PMADR            EQU  H'018E'
PMADRL           EQU  H'018E'
PMADRH           EQU  H'018F'
PMDAT            EQU  H'0190'
PMDATL           EQU  H'0190'
PMDATH           EQU  H'0191'
COG1PHR          EQU  H'0192'
COG1PHF          EQU  H'0193'
COG1BKR          EQU  H'0194'
COG1BKF          EQU  H'0195'
COG1DBR          EQU  H'0196'
COG1DBF          EQU  H'0197'
COG1CON0         EQU  H'0198'
COG1CON1         EQU  H'0199'
COG1RIS          EQU  H'019A'
COG1RSIM         EQU  H'019B'
COG1FIS          EQU  H'019C'
COG1FSIM         EQU  H'019D'
COG1ASD0         EQU  H'019E'
COG1ASD1         EQU  H'019F'

;----- STATUS Bits -----------------------------------------------------
C                EQU  H'0000'
DC               EQU  H'0001'
Z                EQU  H'0002'
NOT_PD           EQU  H'0003'
NOT_TO           EQU  H'0004'
RP0              EQU  H'0005'
RP1              EQU  H'0006'
IRP              EQU  H'0007'


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


;----- IOCAF Bits -----------------------------------------------------
IOCAF0           EQU  H'0000'
IOCAF1           EQU  H'0001'
IOCAF2           EQU  H'0002'
IOCAF3           EQU  H'0003'
IOCAF4           EQU  H'0004'
IOCAF5           EQU  H'0005'


;----- IOCCF Bits -----------------------------------------------------
IOCCF0           EQU  H'0000'
IOCCF1           EQU  H'0001'
IOCCF2           EQU  H'0002'
IOCCF3           EQU  H'0003'
IOCCF4           EQU  H'0004'
IOCCF5           EQU  H'0005'


;----- INTCON Bits -----------------------------------------------------
IOCIF            EQU  H'0000'
INTF             EQU  H'0001'
T0IF             EQU  H'0002'
IOCIE            EQU  H'0003'
INTE             EQU  H'0004'
T0IE             EQU  H'0005'
PEIE             EQU  H'0006'
GIE              EQU  H'0007'


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
TMR2IF           EQU  H'0001'
TMR4AIF          EQU  H'0002'
TMR6AIF          EQU  H'0003'
ADIF             EQU  H'0006'
TMR1GIF          EQU  H'0007'


;----- PIR2 Bits -----------------------------------------------------
CCP1IF           EQU  H'0000'
COG1IF           EQU  H'0002'
C1IF             EQU  H'0004'
C2IF             EQU  H'0005'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
NOT_T1SYNC       EQU  H'0002'

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
T1GGO            EQU  H'0003'


;----- CCP1CON Bits -----------------------------------------------------
CCP1M0           EQU  H'0000'
CCP1M1           EQU  H'0001'
CCP1M2           EQU  H'0002'
CCP1M3           EQU  H'0003'
DC1B0            EQU  H'0004'
DC1B1            EQU  H'0005'


;----- ADCON0 Bits -----------------------------------------------------
ADON             EQU  H'0000'
GO_NOT_DONE      EQU  H'0001'
ADFM             EQU  H'0007'

CHS0             EQU  H'0002'
CHS1             EQU  H'0003'
CHS2             EQU  H'0004'
CHS3             EQU  H'0005'


;----- ADCON1 Bits -----------------------------------------------------
ADPREF1          EQU  H'0000'

ADCS0            EQU  H'0004'
ADCS1            EQU  H'0005'
ADCS2            EQU  H'0006'


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


;----- IOCAP Bits -----------------------------------------------------
IOCAP0           EQU  H'0000'
IOCAP1           EQU  H'0001'
IOCAP2           EQU  H'0002'
IOCAP3           EQU  H'0003'
IOCAP4           EQU  H'0004'
IOCAP5           EQU  H'0005'


;----- IOCCP Bits -----------------------------------------------------
IOCCP0           EQU  H'0000'
IOCCP1           EQU  H'0001'
IOCCP2           EQU  H'0002'
IOCCP3           EQU  H'0003'
IOCCP4           EQU  H'0004'
IOCCP5           EQU  H'0005'


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
TMR2IE           EQU  H'0001'
TMR4AIE          EQU  H'0002'
TMR6AIE          EQU  H'0003'
ADIE             EQU  H'0006'
TMR1GIE          EQU  H'0007'


;----- PIE2 Bits -----------------------------------------------------
CCP1IE           EQU  H'0000'
COG1IE           EQU  H'0002'
C1IE             EQU  H'0004'
C2IE             EQU  H'0005'


;----- OSCCON Bits -----------------------------------------------------
LTS              EQU  H'0001'
HTS              EQU  H'0002'

IRCF0            EQU  H'0004'
IRCF1            EQU  H'0005'


;----- FVR1CON0 Bits -----------------------------------------------------
FVRBUFEN         EQU  H'0000'
FVRBUFSS0        EQU  H'0003'
FVRBUFSS1        EQU  H'0004'
FVROE            EQU  H'0005'
FVRRDY           EQU  H'0006'
FVREN            EQU  H'0007'


;----- DAC1CON0 Bits -----------------------------------------------------
DACPSS0          EQU  H'0002'
DACPSS1          EQU  H'0003'
DACOE            EQU  H'0005'
DACFM            EQU  H'0006'
DACEN            EQU  H'0007'


;----- OPA1CON Bits -----------------------------------------------------
OPAPCH0          EQU  H'0000'
OPAPCH1          EQU  H'0001'
OPANCH0          EQU  H'0002'
OPANCH1          EQU  H'0003'
OPAUGM           EQU  H'0004'
OPAEN            EQU  H'0007'


;----- C2CON0 Bits -----------------------------------------------------
C2SYNC           EQU  H'0000'
C2HYS            EQU  H'0001'
C2SP             EQU  H'0002'
C2ZLF            EQU  H'0003'
C2POL            EQU  H'0004'
C2OE             EQU  H'0005'
C2OUT            EQU  H'0006'
C2ON             EQU  H'0007'


;----- CM2CON0 Bits -----------------------------------------------------
C2SYNC           EQU  H'0000'
C2HYS            EQU  H'0001'
C2SP             EQU  H'0002'
C2ZLF            EQU  H'0003'
C2POL            EQU  H'0004'
C2OE             EQU  H'0005'
C2OUT            EQU  H'0006'
C2ON             EQU  H'0007'


;----- C2CON1 Bits -----------------------------------------------------
C2INTN           EQU  H'0006'
C2INTP           EQU  H'0007'

C2NCH0           EQU  H'0000'
C2NCH1           EQU  H'0001'
C2NCH2           EQU  H'0002'
C2PCH0           EQU  H'0003'
C2PCH1           EQU  H'0004'
C2PCH2           EQU  H'0005'


;----- CM2CON1 Bits -----------------------------------------------------
C2INTN           EQU  H'0006'
C2INTP           EQU  H'0007'

C2NCH0           EQU  H'0000'
C2NCH1           EQU  H'0001'
C2NCH2           EQU  H'0002'
C2PCH0           EQU  H'0003'
C2PCH1           EQU  H'0004'
C2PCH2           EQU  H'0005'


;----- C1CON0 Bits -----------------------------------------------------
C1SYNC           EQU  H'0000'
C1HYS            EQU  H'0001'
C1SP             EQU  H'0002'
C1ZLF            EQU  H'0003'
C1POL            EQU  H'0004'
C1OE             EQU  H'0005'
C1OUT            EQU  H'0006'
C1ON             EQU  H'0007'


;----- CM1CON0 Bits -----------------------------------------------------
C1SYNC           EQU  H'0000'
C1HYS            EQU  H'0001'
C1SP             EQU  H'0002'
C1ZLF            EQU  H'0003'
C1POL            EQU  H'0004'
C1OE             EQU  H'0005'
C1OUT            EQU  H'0006'
C1ON             EQU  H'0007'


;----- C1CON1 Bits -----------------------------------------------------
C1INTN           EQU  H'0006'
C1INTP           EQU  H'0007'

C1NCH0           EQU  H'0000'
C1NCH1           EQU  H'0001'
C1NCH2           EQU  H'0002'
C1PCH0           EQU  H'0003'
C1PCH1           EQU  H'0004'
C1PCH2           EQU  H'0005'


;----- CM1CON1 Bits -----------------------------------------------------
C1INTN           EQU  H'0006'
C1INTP           EQU  H'0007'

C1NCH0           EQU  H'0000'
C1NCH1           EQU  H'0001'
C1NCH2           EQU  H'0002'
C1PCH0           EQU  H'0003'
C1PCH1           EQU  H'0004'
C1PCH2           EQU  H'0005'


;----- CMOUT Bits -----------------------------------------------------
MCOUT1           EQU  H'0000'
MCOUT2           EQU  H'0001'


;----- MCOUT Bits -----------------------------------------------------
MCOUT1           EQU  H'0000'
MCOUT2           EQU  H'0001'


;----- LATA Bits -----------------------------------------------------
LATA0            EQU  H'0000'
LATA1            EQU  H'0001'
LATA2            EQU  H'0002'
LATA4            EQU  H'0004'
LATA5            EQU  H'0005'


;----- LATC Bits -----------------------------------------------------
LATC0            EQU  H'0000'
LATC1            EQU  H'0001'
LATC2            EQU  H'0002'
LATC3            EQU  H'0003'
LATC4            EQU  H'0004'
LATC5            EQU  H'0005'


;----- IOCAN Bits -----------------------------------------------------
IOCAN0           EQU  H'0000'
IOCAN1           EQU  H'0001'
IOCAN2           EQU  H'0002'
IOCAN3           EQU  H'0003'
IOCAN4           EQU  H'0004'
IOCAN5           EQU  H'0005'


;----- IOCCN Bits -----------------------------------------------------
IOCCN0           EQU  H'0000'
IOCCN1           EQU  H'0001'
IOCCN2           EQU  H'0002'
IOCCN3           EQU  H'0003'
IOCCN4           EQU  H'0004'
IOCCN5           EQU  H'0005'


;----- WPUA Bits -----------------------------------------------------
WPUA0            EQU  H'0000'
WPUA1            EQU  H'0001'
WPUA2            EQU  H'0002'
WPUA3            EQU  H'0003'
WPUA4            EQU  H'0004'
WPUA5            EQU  H'0005'


;----- WPUC Bits -----------------------------------------------------
WPUC0            EQU  H'0000'
WPUC1            EQU  H'0001'
WPUC2            EQU  H'0002'
WPUC3            EQU  H'0003'
WPUC4            EQU  H'0004'
WPUC5            EQU  H'0005'


;----- SLRCONC Bits -----------------------------------------------------
SLRC4            EQU  H'0004'
SLRC5            EQU  H'0005'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'


;----- T2CON Bits -----------------------------------------------------
TMR2ON           EQU  H'0002'

T2CKPS0          EQU  H'0000'
T2CKPS1          EQU  H'0001'
T2OUTPS0         EQU  H'0003'
T2OUTPS1         EQU  H'0004'
T2OUTPS2         EQU  H'0005'
T2OUTPS3         EQU  H'0006'


;----- T4ACON0 Bits -----------------------------------------------------
TMR4AON          EQU  H'0002'

T4ACKPS0         EQU  H'0000'
T4ACKPS1         EQU  H'0001'
T4OUTPS0         EQU  H'0003'
T4OUTPS1         EQU  H'0004'
T4OUTPS2         EQU  H'0005'
T4OUTPS3         EQU  H'0006'


;----- T4ACON1 Bits -----------------------------------------------------
T4ARIREN         EQU  H'0000'
T4AFIREN         EQU  H'0001'
T4ARIMS          EQU  H'0006'
T4AFIMS          EQU  H'0007'

T4AERS0          EQU  H'0002'
T4AERS1          EQU  H'0003'
T4AERS2          EQU  H'0004'


;----- T6ACON0 Bits -----------------------------------------------------
TMR6AON          EQU  H'0002'

T6ACKPS0         EQU  H'0000'
T6ACKPS1         EQU  H'0001'
T6OUTPS0         EQU  H'0003'
T6OUTPS1         EQU  H'0004'
T6OUTPS2         EQU  H'0005'
T6OUTPS3         EQU  H'0006'


;----- T6ACON1 Bits -----------------------------------------------------
T6ARIREN         EQU  H'0000'
T6AFIREN         EQU  H'0001'
T6ERS0           EQU  H'0002'
T6ERS1           EQU  H'0003'
T6ERS2           EQU  H'0004'
T6ARIMS          EQU  H'0006'
T6AFIMS          EQU  H'0007'


;----- SLPCCON0 Bits -----------------------------------------------------
SC1INS           EQU  H'0000'
SC1TSS0          EQU  H'0002'
SC1TSS1          EQU  H'0003'
SC1POL           EQU  H'0004'
SC1MRPE          EQU  H'0005'
SC1EN            EQU  H'0007'


;----- SLPCCON1 Bits -----------------------------------------------------
SC1ISET0         EQU  H'0000'
SC1ISET1         EQU  H'0001'
SC1ISET2         EQU  H'0002'
SC1ISET3         EQU  H'0003'
SC1ISET4         EQU  H'0004'


;----- ANSELA Bits -----------------------------------------------------
ANSA0            EQU  H'0000'
ANSA1            EQU  H'0001'
ANSA2            EQU  H'0002'
ANSA4            EQU  H'0004'


;----- ANSELC Bits -----------------------------------------------------
ANSC0            EQU  H'0000'
ANSC1            EQU  H'0001'
ANSC2            EQU  H'0002'
ANSC3            EQU  H'0003'


;----- APFCON Bits -----------------------------------------------------
T1GSEL           EQU  H'0004'


;----- OSCTUNE Bits -----------------------------------------------------
TUN0             EQU  H'0000'
TUN1             EQU  H'0001'
TUN2             EQU  H'0002'
TUN3             EQU  H'0003'
TUN4             EQU  H'0004'


;----- PMCON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'


;----- COG1PHR Bits -----------------------------------------------------
PHR0             EQU  H'0000'
PHR1             EQU  H'0001'
PHR2             EQU  H'0002'
PHR3             EQU  H'0003'


;----- COG1PHF Bits -----------------------------------------------------
PHF0             EQU  H'0000'
PHF1             EQU  H'0001'
PHF2             EQU  H'0002'
PHF3             EQU  H'0003'


;----- COG1BKR Bits -----------------------------------------------------
BKR0             EQU  H'0000'
BKR1             EQU  H'0001'
BKR2             EQU  H'0002'
BKR3             EQU  H'0003'


;----- COG1BKF Bits -----------------------------------------------------
BKF0             EQU  H'0000'
BKF1             EQU  H'0001'
BKF2             EQU  H'0002'
BKF3             EQU  H'0003'


;----- COG1DBR Bits -----------------------------------------------------
DBR0             EQU  H'0000'
DBR1             EQU  H'0001'
DBR2             EQU  H'0002'
DBR3             EQU  H'0003'


;----- COG1DBF Bits -----------------------------------------------------
DBF0             EQU  H'0000'
DBF1             EQU  H'0001'
DBF2             EQU  H'0002'
DBF3             EQU  H'0003'


;----- COG1CON0 Bits -----------------------------------------------------
G1MD             EQU  H'0000'
G1LD             EQU  H'0002'
G1POL0           EQU  H'0003'
G1POL1           EQU  H'0004'
G1OE0            EQU  H'0005'
G1OE1            EQU  H'0006'
G1EN             EQU  H'0007'


;----- COG1CON1 Bits -----------------------------------------------------
G1CS0            EQU  H'0000'
G1CS1            EQU  H'0001'
G1FDBTS          EQU  H'0006'
G1RDBTS          EQU  H'0007'


;----- COG1RIS Bits -----------------------------------------------------
G1RIS0           EQU  H'0000'
G1RIS1           EQU  H'0001'
G1RIS2           EQU  H'0002'
G1RIS3           EQU  H'0003'
G1RIS4           EQU  H'0004'
G1RIS5           EQU  H'0005'
G1RIS6           EQU  H'0006'
G1RIS7           EQU  H'0007'


;----- COG1RSIM Bits -----------------------------------------------------
G1RSIM0          EQU  H'0000'
G1RSIM1          EQU  H'0001'
G1RSIM2          EQU  H'0002'
G1RSIM3          EQU  H'0003'
G1RSIM4          EQU  H'0004'
G1RSIM5          EQU  H'0005'
G1RSIM6          EQU  H'0006'
G1RSIM7          EQU  H'0007'


;----- COG1FIS Bits -----------------------------------------------------
G1FIS0           EQU  H'0000'
G1FIS1           EQU  H'0001'
G1FIS2           EQU  H'0002'
G1FIS3           EQU  H'0003'
G1FIS4           EQU  H'0004'
G1FIS5           EQU  H'0005'
G1FIS6           EQU  H'0006'
G1FIS7           EQU  H'0007'


;----- COG1FSIM Bits -----------------------------------------------------
G1FSM0           EQU  H'0000'
G1FSM1           EQU  H'0001'
G1FSM2           EQU  H'0002'
G1FSM3           EQU  H'0003'
G1FSM4           EQU  H'0004'
G1FSM5           EQU  H'0005'
G1FSM6           EQU  H'0006'
G1FSM7           EQU  H'0007'


;----- COG1ASD0 Bits -----------------------------------------------------
G1ASD0L0         EQU  H'0002'
G1ASD0L1         EQU  H'0003'
G1ASD1L0         EQU  H'0004'
G1ASD1L1         EQU  H'0005'
C1ARSEN          EQU  H'0006'
C1ASDE           EQU  H'0007'


;----- COG1ASD1 Bits -----------------------------------------------------
G1AS0E           EQU  H'0000'
G1AS1E           EQU  H'0001'
G1AS2E           EQU  H'0002'
G1AS3E           EQU  H'0003'
G1AS4E           EQU  H'0004'
G1AS5E           EQU  H'0005'
G1AS6E           EQU  H'0006'
G1AS7E           EQU  H'0007'




;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'01FF'
       __BADRAM  H'0006'
       __BADRAM  H'000E'
       __BADRAM  H'0016'-H'001B'
       __BADRAM  H'0086'
       __BADRAM  H'008E'
       __BADRAM  H'0094'-H'0095'
       __BADRAM  H'0097'-H'009A'
       __BADRAM  H'00C0'-H'00EF'
       __BADRAM  H'0106'
       __BADRAM  H'011B'-H'011D'
       __BADRAM  H'0120'-H'016F'
       __BADRAM  H'0186'
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
_FOSC0_INT           EQU  H'3FFE'    ; Internal oscillator mode.  I/O function on RA5/CLKIN
_FOSC0_EC            EQU  H'3FFF'    ; EC oscillator mode.  CLKIN function on RA5/CLKIN

_WDTE_OFF            EQU  H'3FF7'    ; Watchdog Timer disabled
_WDTE_ON             EQU  H'3FFF'    ; Watchdog Timer enabled

_PWRTE_ON            EQU  H'3FEF'    ; Power-up Timer enabled
_PWRTE_OFF           EQU  H'3FFF'    ; Power-up Timer disabled

_MCLRE_OFF           EQU  H'3FDF'    ; MCLR pin is alternate function
_MCLRE_ON            EQU  H'3FFF'    ; MCLR pin is MCLR function with internal weak pullup

_CP_ON               EQU  H'3FBF'    ; Program memory code protection is enabled
_CP_OFF              EQU  H'3FFF'    ; Program memory code protection is disabled

_BOREN_DIS           EQU  H'3CFF'    ; BOR disabled
_BOREN_SLEEP_DIS     EQU  H'3EFF'    ; BOR enabled during operation and disabled in Sleep
_BOREN_EN            EQU  H'3FFF'    ; BOR enabled

_WRT_ALL             EQU  H'33FF'    ; 000h to 3FFh self-write protected
_WRT_HALF            EQU  H'37FF'    ; 000h to 1FFh self-write protected
_WRT_FOURTH          EQU  H'3BFF'    ; 000h to 0FFh self-write protected
_WRT_OFF             EQU  H'3FFF'    ; Flash self-write protection off

_CLKOUTEN_ON         EQU  H'2FFF'    ; CLKOUT function enabled.  CLKOUT pin is CLKOUT
_CLKOUTEN_OFF        EQU  H'3FFF'    ; CLKOUT function disabled.  CLKOUT pin acts as I/O

;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'2006'

;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'2000'
_IDLOC1          EQU  H'2001'
_IDLOC2          EQU  H'2002'
_IDLOC3          EQU  H'2003'

        LIST
