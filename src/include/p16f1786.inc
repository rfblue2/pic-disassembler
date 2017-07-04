        LIST

;==========================================================================
;  MPASM PIC16F1786 processor include
; 
;  (c) Copyright 1999-2013 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16F1786 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16F1786
;       2. LIST directive in the source file
;               LIST   P=PIC16F1786
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16F1786
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

;-----Bank1------------------
TRISA            EQU  H'008C'
TRISB            EQU  H'008D'
TRISC            EQU  H'008E'
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
ADCON2           EQU  H'009F'

;-----Bank2------------------
LATA             EQU  H'010C'
LATB             EQU  H'010D'
LATC             EQU  H'010E'
CM1CON0          EQU  H'0111'
CM1CON1          EQU  H'0112'
CM2CON0          EQU  H'0113'
CM2CON1          EQU  H'0114'
CMOUT            EQU  H'0115'
BORCON           EQU  H'0116'
FVRCON           EQU  H'0117'
DACCON0          EQU  H'0118'
DACCON1          EQU  H'0119'
CM4CON0          EQU  H'011A'
CM4CON1          EQU  H'011B'
APFCON2          EQU  H'011C'
APFCON           EQU  H'011D'
APFCON0          EQU  H'011D'
APFCON1          EQU  H'011D'
CM3CON0          EQU  H'011E'
CM3CON1          EQU  H'011F'

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
VREGCON          EQU  H'0197'
RC1REG           EQU  H'0199'
RCREG            EQU  H'0199'
RCREG1           EQU  H'0199'
TX1REG           EQU  H'019A'
TXREG            EQU  H'019A'
TXREG1           EQU  H'019A'
SP1BRG           EQU  H'019B'
SP1BRGL          EQU  H'019B'
SPBRG            EQU  H'019B'
SPBRG1           EQU  H'019B'
SPBRGL           EQU  H'019B'
SP1BRGH          EQU  H'019C'
SPBRGH           EQU  H'019C'
SPBRGH1          EQU  H'019C'
RC1STA           EQU  H'019D'
RCSTA            EQU  H'019D'
RCSTA1           EQU  H'019D'
TX1STA           EQU  H'019E'
TXSTA            EQU  H'019E'
TXSTA1           EQU  H'019E'
BAUD1CON         EQU  H'019F'
BAUDCON          EQU  H'019F'
BAUDCON1         EQU  H'019F'
BAUDCTL          EQU  H'019F'
BAUDCTL1         EQU  H'019F'

;-----Bank4------------------
WPUA             EQU  H'020C'
WPUB             EQU  H'020D'
WPUC             EQU  H'020E'
WPUE             EQU  H'0210'
SSP1BUF          EQU  H'0211'
SSPBUF           EQU  H'0211'
SSP1ADD          EQU  H'0212'
SSPADD           EQU  H'0212'
SSP1MSK          EQU  H'0213'
SSPMSK           EQU  H'0213'
SSP1STAT         EQU  H'0214'
SSPSTAT          EQU  H'0214'
SSP1CON          EQU  H'0215'
SSPCON           EQU  H'0215'
SSP1CON2         EQU  H'0216'
SSPCON2          EQU  H'0216'
SSP1CON3         EQU  H'0217'
SSPCON3          EQU  H'0217'

;-----Bank5------------------
ODCONA           EQU  H'028C'
ODCONB           EQU  H'028D'
ODCONC           EQU  H'028E'
CCPR1            EQU  H'0291'
CCPR1L           EQU  H'0291'
CCPR1H           EQU  H'0292'
CCP1CON          EQU  H'0293'
CCPR2            EQU  H'0298'
CCPR2L           EQU  H'0298'
CCPR2H           EQU  H'0299'
CCP2CON          EQU  H'029A'

;-----Bank6------------------
SLRCONA          EQU  H'030C'
SLRCONB          EQU  H'030D'
SLRCONC          EQU  H'030E'
CCPR3            EQU  H'0311'
CCPR3L           EQU  H'0311'
CCPR3H           EQU  H'0312'
CCP3CON          EQU  H'0313'

;-----Bank7------------------
INLVLA           EQU  H'038C'
INLVLB           EQU  H'038D'
INLVLC           EQU  H'038E'
INLVLE           EQU  H'0390'
IOCAP            EQU  H'0391'
IOCAN            EQU  H'0392'
IOCAF            EQU  H'0393'
IOCBP            EQU  H'0394'
IOCBN            EQU  H'0395'
IOCBF            EQU  H'0396'
IOCCP            EQU  H'0397'
IOCCN            EQU  H'0398'
IOCCF            EQU  H'0399'
IOCEP            EQU  H'039D'
IOCEN            EQU  H'039E'
IOCEF            EQU  H'039F'

;-----Bank10------------------
OPA1CON          EQU  H'0511'
OPA2CON          EQU  H'0513'
CLKRCON          EQU  H'051A'

;-----Bank16------------------
PSMC1CON         EQU  H'0811'
PSMC1MDL         EQU  H'0812'
PSMC1SYNC        EQU  H'0813'
PSMC1CLK         EQU  H'0814'
PSMC1OEN         EQU  H'0815'
PSMC1POL         EQU  H'0816'
PSMC1BLNK        EQU  H'0817'
PSMC1REBS        EQU  H'0818'
PSMC1FEBS        EQU  H'0819'
PSMC1PHS         EQU  H'081A'
PSMC1DCS         EQU  H'081B'
PSMC1PRS         EQU  H'081C'
PSMC1ASDC        EQU  H'081D'
PSMC1ASDL        EQU  H'081E'
PSMC1ASDS        EQU  H'081F'
PSMC1INT         EQU  H'0820'
PSMC1PH          EQU  H'0821'
PSMC1PHL         EQU  H'0821'
PSMC1PHH         EQU  H'0822'
PSMC1DC          EQU  H'0823'
PSMC1DCL         EQU  H'0823'
PSMC1DCH         EQU  H'0824'
PSMC1PR          EQU  H'0825'
PSMC1PRL         EQU  H'0825'
PSMC1PRH         EQU  H'0826'
PSMC1TMR         EQU  H'0827'
PSMC1TMRL        EQU  H'0827'
PSMC1TMRH        EQU  H'0828'
PSMC1DBR         EQU  H'0829'
PSMC1DBF         EQU  H'082A'
PSMC1BLKR        EQU  H'082B'
PSMC1BLKF        EQU  H'082C'
PSMC1FFA         EQU  H'082D'
PSMC1STR0        EQU  H'082E'
PSMC1STR1        EQU  H'082F'
PSMC2CON         EQU  H'0831'
PSMC2MDL         EQU  H'0832'
PSMC2SYNC        EQU  H'0833'
PSMC2CLK         EQU  H'0834'
PSMC2OEN         EQU  H'0835'
PSMC2POL         EQU  H'0836'
PSMC2BLNK        EQU  H'0837'
PSMC2REBS        EQU  H'0838'
PSMC2FEBS        EQU  H'0839'
PSMC2PHS         EQU  H'083A'
PSMC2DCS         EQU  H'083B'
PSMC2PRS         EQU  H'083C'
PSMC2ASDC        EQU  H'083D'
PSMC2ASDL        EQU  H'083E'
PSMC2ASDS        EQU  H'083F'
PSMC2INT         EQU  H'0840'
PSMC2PH          EQU  H'0841'
PSMC2PHL         EQU  H'0841'
PSMC2PHH         EQU  H'0842'
PSMC2DC          EQU  H'0843'
PSMC2DCL         EQU  H'0843'
PSMC2DCH         EQU  H'0844'
PSMC2PR          EQU  H'0845'
PSMC2PRL         EQU  H'0845'
PSMC2PRH         EQU  H'0846'
PSMC2TMR         EQU  H'0847'
PSMC2TMRL        EQU  H'0847'
PSMC2TMRH        EQU  H'0848'
PSMC2DBR         EQU  H'0849'
PSMC2DBF         EQU  H'084A'
PSMC2BLKR        EQU  H'084B'
PSMC2BLKF        EQU  H'084C'
PSMC2FFA         EQU  H'084D'
PSMC2STR0        EQU  H'084E'
PSMC2STR1        EQU  H'084F'
PSMC3CON         EQU  H'0851'
PSMC3MDL         EQU  H'0852'
PSMC3SYNC        EQU  H'0853'
PSMC3CLK         EQU  H'0854'
PSMC3OEN         EQU  H'0855'
PSMC3POL         EQU  H'0856'
PSMC3BLNK        EQU  H'0857'
PSMC3REBS        EQU  H'0858'
PSMC3FEBS        EQU  H'0859'
PSMC3PHS         EQU  H'085A'
PSMC3DCS         EQU  H'085B'
PSMC3PRS         EQU  H'085C'
PSMC3ASDC        EQU  H'085D'
PSMC3ASDL        EQU  H'085E'
PSMC3ASDS        EQU  H'085F'
PSMC3INT         EQU  H'0860'
PSMC3PH          EQU  H'0861'
PSMC3PHL         EQU  H'0861'
PSMC3PHH         EQU  H'0862'
PSMC3DC          EQU  H'0863'
PSMC3DCL         EQU  H'0863'
PSMC3DCH         EQU  H'0864'
PSMC3PR          EQU  H'0865'
PSMC3PRL         EQU  H'0865'
PSMC3PRH         EQU  H'0866'
PSMC3TMR         EQU  H'0867'
PSMC3TMRL        EQU  H'0867'
PSMC3TMRH        EQU  H'0868'
PSMC3DBR         EQU  H'0869'
PSMC3DBF         EQU  H'086A'
PSMC3BLKR        EQU  H'086B'
PSMC3BLKF        EQU  H'086C'
PSMC3FFA         EQU  H'086D'
PSMC3STR0        EQU  H'086E'
PSMC3STR1        EQU  H'086F'

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



;----- PORTC Bits -----------------------------------------------------
RC0              EQU  H'0000'
RC1              EQU  H'0001'
RC2              EQU  H'0002'
RC3              EQU  H'0003'
RC4              EQU  H'0004'
RC5              EQU  H'0005'
RC6              EQU  H'0006'
RC7              EQU  H'0007'



;----- PORTE Bits -----------------------------------------------------
RE3              EQU  H'0003'


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
C3IF             EQU  H'0001'
C4IF             EQU  H'0002'
BCL1IF           EQU  H'0003'
EEIF             EQU  H'0004'
C1IF             EQU  H'0005'
C2IF             EQU  H'0006'
OSFIF            EQU  H'0007'


;----- PIR3 Bits -----------------------------------------------------
CCP3IF           EQU  H'0004'


;----- PIR4 Bits -----------------------------------------------------
PSMC1SIF         EQU  H'0000'
PSMC2SIF         EQU  H'0001'
PSMC3SIF         EQU  H'0002'
PSMC1TIF         EQU  H'0004'
PSMC2TIF         EQU  H'0005'
PSMC3TIF         EQU  H'0006'


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



;----- TRISE Bits -----------------------------------------------------
TRISE3           EQU  H'0003'


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
C3IE             EQU  H'0001'
C4IE             EQU  H'0002'
BCL1IE           EQU  H'0003'
EEIE             EQU  H'0004'
C1IE             EQU  H'0005'
C2IE             EQU  H'0006'
OSFIE            EQU  H'0007'


;----- PIE3 Bits -----------------------------------------------------
CCP3IE           EQU  H'0004'


;----- PIE4 Bits -----------------------------------------------------
PSMC1SIE         EQU  H'0000'
PSMC2SIE         EQU  H'0001'
PSMC3SIE         EQU  H'0002'
PSMC1TIE         EQU  H'0004'
PSMC2TIE         EQU  H'0005'
PMSC3TIE         EQU  H'0006'


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
ADRMD            EQU  H'0007'

ADGO             EQU  H'0001'

GO               EQU  H'0001'

DONE             EQU  H'0001'


;----- ADCON1 Bits -----------------------------------------------------
ADPREF0          EQU  H'0000'
ADPREF1          EQU  H'0001'
ADNREF           EQU  H'0002'
ADCS0            EQU  H'0004'
ADCS1            EQU  H'0005'
ADCS2            EQU  H'0006'
ADFM             EQU  H'0007'



;----- ADCON2 Bits -----------------------------------------------------
CHSN0            EQU  H'0000'
CHSN1            EQU  H'0001'
CHSN2            EQU  H'0002'
CHSN3            EQU  H'0003'
TRIGSEL0         EQU  H'0004'
TRIGSEL1         EQU  H'0005'
TRIGSEL2         EQU  H'0006'
TRIGSEL3         EQU  H'0007'



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



;----- CM1CON0 Bits -----------------------------------------------------
C1SYNC           EQU  H'0000'
C1HYS            EQU  H'0001'
C1SP             EQU  H'0002'
C1ZLF            EQU  H'0003'
C1POL            EQU  H'0004'
C1OE             EQU  H'0005'
C1OUT            EQU  H'0006'
C1ON             EQU  H'0007'


;----- CM1CON1 Bits -----------------------------------------------------
C1INTN           EQU  H'0006'
C1INTP           EQU  H'0007'

C1NCH0           EQU  H'0000'
C1NCH1           EQU  H'0001'
C1NCH2           EQU  H'0002'
C1PCH0           EQU  H'0003'
C1PCH1           EQU  H'0004'
C1PCH2           EQU  H'0005'


;----- CM2CON0 Bits -----------------------------------------------------
C2SYNC           EQU  H'0000'
C2HYS            EQU  H'0001'
C2SP             EQU  H'0002'
C2ZLF            EQU  H'0003'
C2POL            EQU  H'0004'
C2OE             EQU  H'0005'
C2OUT            EQU  H'0006'
C2ON             EQU  H'0007'


;----- CM2CON1 Bits -----------------------------------------------------
C2INTN           EQU  H'0006'
C2INTP           EQU  H'0007'

C2NCH0           EQU  H'0000'
C2NCH1           EQU  H'0001'
C2NCH2           EQU  H'0002'
C2PCH0           EQU  H'0003'
C2PCH1           EQU  H'0004'
C2PCH2           EQU  H'0005'


;----- CMOUT Bits -----------------------------------------------------
MC1OUT           EQU  H'0000'
MC2OUT           EQU  H'0001'
MC3OUT           EQU  H'0002'
MC4OUT           EQU  H'0003'


;----- BORCON Bits -----------------------------------------------------
BORRDY           EQU  H'0000'
BORFS            EQU  H'0006'
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
DACOE2           EQU  H'0004'
DACOE1           EQU  H'0005'
DACEN            EQU  H'0007'



;----- DACCON1 Bits -----------------------------------------------------
DACR0            EQU  H'0000'
DACR1            EQU  H'0001'
DACR2            EQU  H'0002'
DACR3            EQU  H'0003'
DACR4            EQU  H'0004'
DACR5            EQU  H'0005'
DACR6            EQU  H'0006'
DACR7            EQU  H'0007'



;----- CM4CON0 Bits -----------------------------------------------------
C4SYNC           EQU  H'0000'
C4HYS            EQU  H'0001'
C4SP             EQU  H'0002'
C4ZLF            EQU  H'0003'
C4POL            EQU  H'0004'
C4OE             EQU  H'0005'
C4OUT            EQU  H'0006'
C4ON             EQU  H'0007'


;----- CM4CON1 Bits -----------------------------------------------------
C4INTN           EQU  H'0006'
C4INTP           EQU  H'0007'

C4NCH0           EQU  H'0000'
C4NCH1           EQU  H'0001'
C4NCH2           EQU  H'0002'
C4PCH0           EQU  H'0003'
C4PCH1           EQU  H'0004'
C4PCH2           EQU  H'0005'


;----- APFCON2 Bits -----------------------------------------------------
CCP3SEL          EQU  H'0000'


;----- APFCON Bits -----------------------------------------------------
CCP2SEL          EQU  H'0000'
RXSEL            EQU  H'0001'
TXSEL            EQU  H'0002'
SDISEL           EQU  H'0003'
SCKSEL           EQU  H'0004'
SDOSEL           EQU  H'0005'
CCP1SEL          EQU  H'0006'
C2OUTSEL         EQU  H'0007'


;----- APFCON0 Bits -----------------------------------------------------
CCP2SEL          EQU  H'0000'
RXSEL            EQU  H'0001'
TXSEL            EQU  H'0002'
SDISEL           EQU  H'0003'
SCKSEL           EQU  H'0004'
SDOSEL           EQU  H'0005'
CCP1SEL          EQU  H'0006'
C2OUTSEL         EQU  H'0007'


;----- APFCON1 Bits -----------------------------------------------------
CCP2SEL          EQU  H'0000'
RXSEL            EQU  H'0001'
TXSEL            EQU  H'0002'
SDISEL           EQU  H'0003'
SCKSEL           EQU  H'0004'
SDOSEL           EQU  H'0005'
CCP1SEL          EQU  H'0006'
C2OUTSEL         EQU  H'0007'


;----- CM3CON0 Bits -----------------------------------------------------
C3SYNC           EQU  H'0000'
C3HYS            EQU  H'0001'
C3SP             EQU  H'0002'
C3ZLF            EQU  H'0003'
C3POL            EQU  H'0004'
C3OE             EQU  H'0005'
C3OUT            EQU  H'0006'
C3ON             EQU  H'0007'


;----- CM3CON1 Bits -----------------------------------------------------
C3INTN           EQU  H'0006'
C3INTP           EQU  H'0007'

C3NCH0           EQU  H'0000'
C3NCH1           EQU  H'0001'
C3NCH2           EQU  H'0002'
C3PCH0           EQU  H'0003'
C3PCH1           EQU  H'0004'
C3PCH2           EQU  H'0005'


;----- ANSELA Bits -----------------------------------------------------
ANSA0            EQU  H'0000'
ANSA1            EQU  H'0001'
ANSA2            EQU  H'0002'
ANSA3            EQU  H'0003'
ANSA4            EQU  H'0004'
ANSA5            EQU  H'0005'
ANSA7            EQU  H'0007'



;----- ANSELB Bits -----------------------------------------------------
ANSB0            EQU  H'0000'
ANSB1            EQU  H'0001'
ANSB2            EQU  H'0002'
ANSB3            EQU  H'0003'
ANSB4            EQU  H'0004'
ANSB5            EQU  H'0005'
ANSB6            EQU  H'0006'



;----- EECON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'
FREE             EQU  H'0004'
LWLO             EQU  H'0005'
CFGS             EQU  H'0006'
EEPGD            EQU  H'0007'


;----- VREGCON Bits -----------------------------------------------------
VREGPM           EQU  H'0001'


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


;----- RCSTA1 Bits -----------------------------------------------------
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


;----- TXSTA1 Bits -----------------------------------------------------
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


;----- BAUDCON Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
SCKP             EQU  H'0004'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- BAUDCON1 Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
SCKP             EQU  H'0004'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- BAUDCTL Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
SCKP             EQU  H'0004'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- BAUDCTL1 Bits -----------------------------------------------------
ABDEN            EQU  H'0000'
WUE              EQU  H'0001'
BRG16            EQU  H'0003'
SCKP             EQU  H'0004'
RCIDL            EQU  H'0006'
ABDOVF           EQU  H'0007'


;----- WPUA Bits -----------------------------------------------------
WPUA0            EQU  H'0000'
WPUA1            EQU  H'0001'
WPUA2            EQU  H'0002'
WPUA3            EQU  H'0003'
WPUA4            EQU  H'0004'
WPUA5            EQU  H'0005'
WPUA6            EQU  H'0006'
WPUA7            EQU  H'0007'



;----- WPUB Bits -----------------------------------------------------
WPUB0            EQU  H'0000'
WPUB1            EQU  H'0001'
WPUB2            EQU  H'0002'
WPUB3            EQU  H'0003'
WPUB4            EQU  H'0004'
WPUB5            EQU  H'0005'
WPUB6            EQU  H'0006'
WPUB7            EQU  H'0007'



;----- WPUC Bits -----------------------------------------------------
WPUC0            EQU  H'0000'
WPUC1            EQU  H'0001'
WPUC2            EQU  H'0002'
WPUC3            EQU  H'0003'
WPUC4            EQU  H'0004'
WPUC5            EQU  H'0005'
WPUC6            EQU  H'0006'
WPUC7            EQU  H'0007'



;----- WPUE Bits -----------------------------------------------------
WPUE3            EQU  H'0003'


;----- SSP1BUF Bits -----------------------------------------------------
SSP1BUF0         EQU  H'0000'
SSP1BUF1         EQU  H'0001'
SSP1BUF2         EQU  H'0002'
SSP1BUF3         EQU  H'0003'
SSP1BUF4         EQU  H'0004'
SSP1BUF5         EQU  H'0005'
SSP1BUF6         EQU  H'0006'
SSP1BUF7         EQU  H'0007'


BUF0             EQU  H'0000'
BUF1             EQU  H'0001'
BUF2             EQU  H'0002'
BUF3             EQU  H'0003'
BUF4             EQU  H'0004'
BUF5             EQU  H'0005'
BUF6             EQU  H'0006'
BUF7             EQU  H'0007'



;----- SSPBUF Bits -----------------------------------------------------
SSP1BUF0         EQU  H'0000'
SSP1BUF1         EQU  H'0001'
SSP1BUF2         EQU  H'0002'
SSP1BUF3         EQU  H'0003'
SSP1BUF4         EQU  H'0004'
SSP1BUF5         EQU  H'0005'
SSP1BUF6         EQU  H'0006'
SSP1BUF7         EQU  H'0007'


BUF0             EQU  H'0000'
BUF1             EQU  H'0001'
BUF2             EQU  H'0002'
BUF3             EQU  H'0003'
BUF4             EQU  H'0004'
BUF5             EQU  H'0005'
BUF6             EQU  H'0006'
BUF7             EQU  H'0007'



;----- SSP1ADD Bits -----------------------------------------------------
SSP1ADD0         EQU  H'0000'
SSP1ADD1         EQU  H'0001'
SSP1ADD2         EQU  H'0002'
SSP1ADD3         EQU  H'0003'
SSP1ADD4         EQU  H'0004'
SSP1ADD5         EQU  H'0005'
SSP1ADD6         EQU  H'0006'
SSP1ADD7         EQU  H'0007'


ADD0             EQU  H'0000'
ADD1             EQU  H'0001'
ADD2             EQU  H'0002'
ADD3             EQU  H'0003'
ADD4             EQU  H'0004'
ADD5             EQU  H'0005'
ADD6             EQU  H'0006'
ADD7             EQU  H'0007'



;----- SSPADD Bits -----------------------------------------------------
SSP1ADD0         EQU  H'0000'
SSP1ADD1         EQU  H'0001'
SSP1ADD2         EQU  H'0002'
SSP1ADD3         EQU  H'0003'
SSP1ADD4         EQU  H'0004'
SSP1ADD5         EQU  H'0005'
SSP1ADD6         EQU  H'0006'
SSP1ADD7         EQU  H'0007'


ADD0             EQU  H'0000'
ADD1             EQU  H'0001'
ADD2             EQU  H'0002'
ADD3             EQU  H'0003'
ADD4             EQU  H'0004'
ADD5             EQU  H'0005'
ADD6             EQU  H'0006'
ADD7             EQU  H'0007'



;----- SSP1MSK Bits -----------------------------------------------------
SSP1MSK0         EQU  H'0000'
SSP1MSK1         EQU  H'0001'
SSP1MSK2         EQU  H'0002'
SSP1MSK3         EQU  H'0003'
SSP1MSK4         EQU  H'0004'
SSP1MSK5         EQU  H'0005'
SSP1MSK6         EQU  H'0006'
SSP1MSK7         EQU  H'0007'


MSK0             EQU  H'0000'
MSK1             EQU  H'0001'
MSK2             EQU  H'0002'
MSK3             EQU  H'0003'
MSK4             EQU  H'0004'
MSK5             EQU  H'0005'
MSK6             EQU  H'0006'
MSK7             EQU  H'0007'



;----- SSPMSK Bits -----------------------------------------------------
SSP1MSK0         EQU  H'0000'
SSP1MSK1         EQU  H'0001'
SSP1MSK2         EQU  H'0002'
SSP1MSK3         EQU  H'0003'
SSP1MSK4         EQU  H'0004'
SSP1MSK5         EQU  H'0005'
SSP1MSK6         EQU  H'0006'
SSP1MSK7         EQU  H'0007'


MSK0             EQU  H'0000'
MSK1             EQU  H'0001'
MSK2             EQU  H'0002'
MSK3             EQU  H'0003'
MSK4             EQU  H'0004'
MSK5             EQU  H'0005'
MSK6             EQU  H'0006'
MSK7             EQU  H'0007'



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


;----- SSP1CON Bits -----------------------------------------------------
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'

SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'


;----- SSPCON Bits -----------------------------------------------------
CKP              EQU  H'0004'
SSPEN            EQU  H'0005'
SSPOV            EQU  H'0006'
WCOL             EQU  H'0007'

SSPM0            EQU  H'0000'
SSPM1            EQU  H'0001'
SSPM2            EQU  H'0002'
SSPM3            EQU  H'0003'


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


;----- ODCONA Bits -----------------------------------------------------
ODCONA0          EQU  H'0000'
ODCONA1          EQU  H'0001'
ODCONA2          EQU  H'0002'
ODCONA3          EQU  H'0003'
ODCONA4          EQU  H'0004'
ODCONA5          EQU  H'0005'
ODCONA6          EQU  H'0006'
ODCONA7          EQU  H'0007'



;----- ODCONB Bits -----------------------------------------------------
ODCONB0          EQU  H'0000'
ODCONB1          EQU  H'0001'
ODCONB2          EQU  H'0002'
ODCONB3          EQU  H'0003'
ODCONB4          EQU  H'0004'
ODCONB5          EQU  H'0005'
ODCONB6          EQU  H'0006'
ODCONB7          EQU  H'0007'



;----- ODCONC Bits -----------------------------------------------------
ODCONC0          EQU  H'0000'
ODCONC1          EQU  H'0001'
ODCONC2          EQU  H'0002'
ODCONC3          EQU  H'0003'
ODCONC4          EQU  H'0004'
ODCONC5          EQU  H'0005'
ODCONC6          EQU  H'0006'
ODCONC7          EQU  H'0007'



;----- CCP1CON Bits -----------------------------------------------------
CCP1M0           EQU  H'0000'
CCP1M1           EQU  H'0001'
CCP1M2           EQU  H'0002'
CCP1M3           EQU  H'0003'
DC1B0            EQU  H'0004'
DC1B1            EQU  H'0005'


;----- CCP2CON Bits -----------------------------------------------------
CCP2M0           EQU  H'0000'
CCP2M1           EQU  H'0001'
CCP2M2           EQU  H'0002'
CCP2M3           EQU  H'0003'
DC2B0            EQU  H'0004'
DC2B1            EQU  H'0005'


;----- SLRCONA Bits -----------------------------------------------------
SLRCONA0         EQU  H'0000'
SLRCONA1         EQU  H'0001'
SLRCONA2         EQU  H'0002'
SLRCONA3         EQU  H'0003'
SLRCONA4         EQU  H'0004'
SLRCONA5         EQU  H'0005'
SLRCONA6         EQU  H'0006'
SLRCONA7         EQU  H'0007'



;----- SLRCONB Bits -----------------------------------------------------
SLRCONB0         EQU  H'0000'
SLRCONB1         EQU  H'0001'
SLRCONB2         EQU  H'0002'
SLRCONB3         EQU  H'0003'
SLRCONB4         EQU  H'0004'
SLRCONB5         EQU  H'0005'
SLRCONB6         EQU  H'0006'
SLRCONB7         EQU  H'0007'



;----- SLRCONC Bits -----------------------------------------------------
SLRCONC0         EQU  H'0000'
SLRCONC1         EQU  H'0001'
SLRCONC2         EQU  H'0002'
SLRCONC3         EQU  H'0003'
SLRCONC4         EQU  H'0004'
SLRCONC5         EQU  H'0005'
SLRCONC6         EQU  H'0006'
SLRCONC7         EQU  H'0007'



;----- CCP3CON Bits -----------------------------------------------------
CCP3M0           EQU  H'0000'
CCP3M1           EQU  H'0001'
CCP3M2           EQU  H'0002'
CCP3M3           EQU  H'0003'
DC3B0            EQU  H'0004'
DC3B1            EQU  H'0005'


;----- INLVLA Bits -----------------------------------------------------
INLVLA0          EQU  H'0000'
INLVLA1          EQU  H'0001'
INLVLA2          EQU  H'0002'
INLVLA3          EQU  H'0003'
INLVLA4          EQU  H'0004'
INLVLA5          EQU  H'0005'
INLVLA6          EQU  H'0006'
INLVLA7          EQU  H'0007'



;----- INLVLB Bits -----------------------------------------------------
INLVLB0          EQU  H'0000'
INLVLB1          EQU  H'0001'
INLVLB2          EQU  H'0002'
INLVLB3          EQU  H'0003'
INLVLB4          EQU  H'0004'
INLVLB5          EQU  H'0005'
INLVLB6          EQU  H'0006'
INLVLB7          EQU  H'0007'



;----- INLVLC Bits -----------------------------------------------------
INLVLC0          EQU  H'0000'
INLVLC1          EQU  H'0001'
INLVLC2          EQU  H'0002'
INLVLC3          EQU  H'0003'
INLVLC4          EQU  H'0004'
INLVLC5          EQU  H'0005'
INLVLC6          EQU  H'0006'
INLVLC7          EQU  H'0007'



;----- INLVLE Bits -----------------------------------------------------
INLVLE3          EQU  H'0003'


;----- IOCAP Bits -----------------------------------------------------
IOCAP0           EQU  H'0000'
IOCAP1           EQU  H'0001'
IOCAP2           EQU  H'0002'
IOCAP3           EQU  H'0003'
IOCAP4           EQU  H'0004'
IOCAP5           EQU  H'0005'
IOCAP6           EQU  H'0006'
IOCAP7           EQU  H'0007'



;----- IOCAN Bits -----------------------------------------------------
IOCAN0           EQU  H'0000'
IOCAN1           EQU  H'0001'
IOCAN2           EQU  H'0002'
IOCAN3           EQU  H'0003'
IOCAN4           EQU  H'0004'
IOCAN5           EQU  H'0005'
IOCAN6           EQU  H'0006'
IOCAN7           EQU  H'0007'



;----- IOCAF Bits -----------------------------------------------------
IOCAF0           EQU  H'0000'
IOCAF1           EQU  H'0001'
IOCAF2           EQU  H'0002'
IOCAF3           EQU  H'0003'
IOCAF4           EQU  H'0004'
IOCAF5           EQU  H'0005'
IOCAF6           EQU  H'0006'
IOCAF7           EQU  H'0007'



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



;----- IOCCP Bits -----------------------------------------------------
IOCCP0           EQU  H'0000'
IOCCP1           EQU  H'0001'
IOCCP2           EQU  H'0002'
IOCCP3           EQU  H'0003'
IOCCP4           EQU  H'0004'
IOCCP5           EQU  H'0005'
IOCCP6           EQU  H'0006'
IOCCP7           EQU  H'0007'



;----- IOCCN Bits -----------------------------------------------------
IOCCN0           EQU  H'0000'
IOCCN1           EQU  H'0001'
IOCCN2           EQU  H'0002'
IOCCN3           EQU  H'0003'
IOCCN4           EQU  H'0004'
IOCCN5           EQU  H'0005'
IOCCN6           EQU  H'0006'
IOCCN7           EQU  H'0007'



;----- IOCCF Bits -----------------------------------------------------
IOCCF0           EQU  H'0000'
IOCCF1           EQU  H'0001'
IOCCF2           EQU  H'0002'
IOCCF3           EQU  H'0003'
IOCCF4           EQU  H'0004'
IOCCF5           EQU  H'0005'
IOCCF6           EQU  H'0006'
IOCCF7           EQU  H'0007'



;----- IOCEP Bits -----------------------------------------------------
IOCEP3           EQU  H'0003'


;----- IOCEN Bits -----------------------------------------------------
IOCEN3           EQU  H'0003'


;----- IOCEF Bits -----------------------------------------------------
IOCEF3           EQU  H'0003'


;----- OPA1CON Bits -----------------------------------------------------
OPA1PCH0         EQU  H'0000'
OPA1PCH1         EQU  H'0001'

OPA1SP           EQU  H'0006'
OPA1EN           EQU  H'0007'


;----- OPA2CON Bits -----------------------------------------------------
OPA2PCH0         EQU  H'0000'
OPA2PCH1         EQU  H'0001'

OPA2SP           EQU  H'0006'
OPA2EN           EQU  H'0007'


;----- CLKRCON Bits -----------------------------------------------------
CLKRDIV0         EQU  H'0000'
CLKRDIV1         EQU  H'0001'
CLKRDIV2         EQU  H'0002'
CLKRDC0          EQU  H'0003'
CLKRDC1          EQU  H'0004'
CLKRSLR          EQU  H'0005'
CLKROE           EQU  H'0006'
CLKREN           EQU  H'0007'



;----- PSMC1CON Bits -----------------------------------------------------
P1DBRE           EQU  H'0004'
P1DBFE           EQU  H'0005'
PSMC1LD          EQU  H'0006'
PSMC1EN          EQU  H'0007'

P1MODE0          EQU  H'0000'
P1MODE1          EQU  H'0001'
P1MODE2          EQU  H'0002'
P1MODE3          EQU  H'0003'


;----- PSMC1MDL Bits -----------------------------------------------------
P1MDLBIT         EQU  H'0005'
P1MDLPOL         EQU  H'0006'
P1MDLEN          EQU  H'0007'

P1MSRC0          EQU  H'0000'
P1MSRC1          EQU  H'0001'
P1MSRC2          EQU  H'0002'
P1MSRC3          EQU  H'0003'


;----- PSMC1SYNC Bits -----------------------------------------------------
P1SYNC0          EQU  H'0000'
P1SYNC1          EQU  H'0001'
P1SYNC2          EQU  H'0002'
P1DCPOL          EQU  H'0005'
P1PRPOL          EQU  H'0006'
P1POFST          EQU  H'0007'


;----- PSMC1CLK Bits -----------------------------------------------------
P1CSRC0          EQU  H'0000'
P1CSRC1          EQU  H'0001'
P1CPRE0          EQU  H'0004'
P1CPRE1          EQU  H'0005'



;----- PSMC1OEN Bits -----------------------------------------------------
P1OEA            EQU  H'0000'
P1OEB            EQU  H'0001'
P1OEC            EQU  H'0002'
P1OED            EQU  H'0003'
P1OEE            EQU  H'0004'
P1OEF            EQU  H'0005'


;----- PSMC1POL Bits -----------------------------------------------------
P1POLA           EQU  H'0000'
P1POLB           EQU  H'0001'
P1POLC           EQU  H'0002'
P1POLD           EQU  H'0003'
P1POLE           EQU  H'0004'
P1POLF           EQU  H'0005'
P1INPOL          EQU  H'0006'


;----- PSMC1BLNK Bits -----------------------------------------------------
P1REBM0          EQU  H'0000'
P1REBM1          EQU  H'0001'
P1FEBM0          EQU  H'0004'
P1FEBM1          EQU  H'0005'


;----- PSMC1REBS Bits -----------------------------------------------------
P1REBSC1         EQU  H'0001'
P1REBSC2         EQU  H'0002'
P1REBSC3         EQU  H'0003'
P1REBSC4         EQU  H'0004'
P1REBSIN         EQU  H'0007'


;----- PSMC1FEBS Bits -----------------------------------------------------
P1FEBSC1         EQU  H'0001'
P1FEBSC2         EQU  H'0002'
P1FEBSC3         EQU  H'0003'
P1FEBSC4         EQU  H'0004'
P1FEBSIN         EQU  H'0007'


;----- PSMC1PHS Bits -----------------------------------------------------
P1PHST           EQU  H'0000'
P1PHSC1          EQU  H'0001'
P1PHSC2          EQU  H'0002'
P1PHSC3          EQU  H'0003'
P1PHSC4          EQU  H'0004'
P1PHSIN          EQU  H'0007'


;----- PSMC1DCS Bits -----------------------------------------------------
P1DCST           EQU  H'0000'
P1DCSC1          EQU  H'0001'
P1DCSC2          EQU  H'0002'
P1DCSC3          EQU  H'0003'
P1DCSC4          EQU  H'0004'
P1DCSIN          EQU  H'0007'


;----- PSMC1PRS Bits -----------------------------------------------------
P1PRST           EQU  H'0000'
P1PRSC1          EQU  H'0001'
P1PRSC2          EQU  H'0002'
P1PRSC3          EQU  H'0003'
P1PRSC4          EQU  H'0004'
P1PRSIN          EQU  H'0007'


;----- PSMC1ASDC Bits -----------------------------------------------------
P1ASDOV          EQU  H'0000'
P1ARSEN          EQU  H'0005'
P1ASDEN          EQU  H'0006'
P1ASE            EQU  H'0007'


;----- PSMC1ASDL Bits -----------------------------------------------------
P1ASDLA          EQU  H'0000'
P1ASDLB          EQU  H'0001'
P1ASDLC          EQU  H'0002'
P1ASDLD          EQU  H'0003'
P1ASDLE          EQU  H'0004'
P1ASDLF          EQU  H'0005'


;----- PSMC1ASDS Bits -----------------------------------------------------
P1ASDSC1         EQU  H'0001'
P1ASDSC2         EQU  H'0002'
P1ASDSC3         EQU  H'0003'
P1ASDSC4         EQU  H'0004'
P1ASDSIN         EQU  H'0007'


;----- PSMC1INT Bits -----------------------------------------------------
P1TPRIF          EQU  H'0000'
P1TDCIF          EQU  H'0001'
P1TPHIF          EQU  H'0002'
P1TOVIF          EQU  H'0003'
P1TPRIE          EQU  H'0004'
P1TDCIE          EQU  H'0005'
P1TPHIE          EQU  H'0006'
P1TOVIE          EQU  H'0007'


;----- PSMC1PHL Bits -----------------------------------------------------
PSMC1PH0         EQU  H'0000'
PSMC1PH1         EQU  H'0001'
PSMC1PH2         EQU  H'0002'
PSMC1PH3         EQU  H'0003'
PSMC1PH4         EQU  H'0004'
PSMC1PH5         EQU  H'0005'
PSMC1PH6         EQU  H'0006'
PSMC1PH7         EQU  H'0007'


;----- PSMC1PHH Bits -----------------------------------------------------
PSMC1PH8         EQU  H'0000'
PSMC1PH9         EQU  H'0001'
PSMC1PH10        EQU  H'0002'
PSMC1PH11        EQU  H'0003'
PSMC1PH12        EQU  H'0004'
PSMC1PH13        EQU  H'0005'
PSMC1PH14        EQU  H'0006'
PSMC1PH15        EQU  H'0007'


;----- PSMC1DCL Bits -----------------------------------------------------
PSMC1DC0         EQU  H'0000'
PSMC1DC1         EQU  H'0001'
PSMC1DC2         EQU  H'0002'
PSMC1DC3         EQU  H'0003'
PSMC1DC4         EQU  H'0004'
PSMC1DC5         EQU  H'0005'
PSMC1DC6         EQU  H'0006'
PSMC1DC7         EQU  H'0007'


;----- PSMC1DCH Bits -----------------------------------------------------
PSMC1DC8         EQU  H'0000'
PSMC1DC9         EQU  H'0001'
PSMC1DC10        EQU  H'0002'
PSMC1DC11        EQU  H'0003'
PSMC1DC12        EQU  H'0004'
PSMC1DC13        EQU  H'0005'
PSMC1DC14        EQU  H'0006'
PSMC1DC15        EQU  H'0007'


;----- PSMC1PRL Bits -----------------------------------------------------
PSMC1PR0         EQU  H'0000'
PSMC1PR1         EQU  H'0001'
PSMC1PR2         EQU  H'0002'
PSMC1PR3         EQU  H'0003'
PSMC1PR4         EQU  H'0004'
PSMC1PR5         EQU  H'0005'
PSMC1PR6         EQU  H'0006'
PSMC1PR7         EQU  H'0007'


;----- PSMC1PRH Bits -----------------------------------------------------
PSMC1PR8         EQU  H'0000'
PSMC1PR9         EQU  H'0001'
PSMC1PR10        EQU  H'0002'
PSMC1PR11        EQU  H'0003'
PSMC1PR12        EQU  H'0004'
PSMC1PR13        EQU  H'0005'
PSMC1PR14        EQU  H'0006'
PSMC1PR15        EQU  H'0007'


;----- PSMC1TMRL Bits -----------------------------------------------------
PSMC1TMR0        EQU  H'0000'
PSMC1TMR1        EQU  H'0001'
PSMC1TMR2        EQU  H'0002'
PSMC1TMR3        EQU  H'0003'
PSMC1TMR4        EQU  H'0004'
PSMC1TMR5        EQU  H'0005'
PSMC1TMR6        EQU  H'0006'
PSMC1TMR7        EQU  H'0007'


;----- PSMC1TMRH Bits -----------------------------------------------------
PSMC1TMR8        EQU  H'0000'
PSMC1TMR9        EQU  H'0001'
PSMC1TMR10       EQU  H'0002'
PSMC1TMR11       EQU  H'0003'
PSMC1TMR12       EQU  H'0004'
PSMC1TMR13       EQU  H'0005'
PSMC1TMR14       EQU  H'0006'
PSMC1TMR15       EQU  H'0007'


;----- PSMC1DBR Bits -----------------------------------------------------
PSMC1DBR0        EQU  H'0000'
PSMC1DBR1        EQU  H'0001'
PSMC1DBR2        EQU  H'0002'
PSMC1DBR3        EQU  H'0003'
PSMC1DBR4        EQU  H'0004'
PSMC1DBR5        EQU  H'0005'
PSMC1DBR6        EQU  H'0006'
PSMC1DBR7        EQU  H'0007'


;----- PSMC1DBF Bits -----------------------------------------------------
PSMC1DBF0        EQU  H'0000'
PSMC1DBF1        EQU  H'0001'
PSMC1DBF2        EQU  H'0002'
PSMC1DBF3        EQU  H'0003'
PSMC1DBF4        EQU  H'0004'
PSMC1DBF5        EQU  H'0005'
PSMC1DBF6        EQU  H'0006'
PSMC1DBF7        EQU  H'0007'


;----- PSMC1BLKR Bits -----------------------------------------------------
PSMC1BLKR0       EQU  H'0000'
PSMC1BLKR1       EQU  H'0001'
PSMC1BLKR2       EQU  H'0002'
PSMC1BLKR3       EQU  H'0003'
PSMC1BLKR4       EQU  H'0004'
PSMC1BLKR5       EQU  H'0005'
PSMC1BLKR6       EQU  H'0006'
PSMC1BLKR7       EQU  H'0007'


;----- PSMC1BLKF Bits -----------------------------------------------------
PSMC1BLKF0       EQU  H'0000'
PSMC1BLKF1       EQU  H'0001'
PSMC1BLKF2       EQU  H'0002'
PSMC1BLKF3       EQU  H'0003'
PSMC1BLKF4       EQU  H'0004'
PSMC1BLKF5       EQU  H'0005'
PSMC1BLKF6       EQU  H'0006'
PSMC1BLKF7       EQU  H'0007'


;----- PSMC1FFA Bits -----------------------------------------------------
PSMC1FFA0        EQU  H'0000'
PSMC1FFA1        EQU  H'0001'
PSMC1FFA2        EQU  H'0002'
PSMC1FFA3        EQU  H'0003'


;----- PSMC1STR0 Bits -----------------------------------------------------
P1STRA           EQU  H'0000'
P1STRB           EQU  H'0001'
P1STRC           EQU  H'0002'
P1STRD           EQU  H'0003'
P1STRE           EQU  H'0004'
P1STRF           EQU  H'0005'


;----- PSMC1STR1 Bits -----------------------------------------------------
P1HSMEN          EQU  H'0000'
P1LSMEN          EQU  H'0001'
P1SSYNC          EQU  H'0007'


;----- PSMC2CON Bits -----------------------------------------------------
P2DBRE           EQU  H'0004'
P2DBFE           EQU  H'0005'
PSMC2LD          EQU  H'0006'
PSMC2EN          EQU  H'0007'

P2MODE0          EQU  H'0000'
P2MODE1          EQU  H'0001'
P2MODE2          EQU  H'0002'
P2MODE3          EQU  H'0003'


;----- PSMC2MDL Bits -----------------------------------------------------
P2MDLBIT         EQU  H'0005'
P2MDLPOL         EQU  H'0006'
P2MDLEN          EQU  H'0007'

P2MSRC0          EQU  H'0000'
P2MSRC1          EQU  H'0001'
P2MSRC2          EQU  H'0002'
P2MSRC3          EQU  H'0003'


;----- PSMC2SYNC Bits -----------------------------------------------------
P2SYNC0          EQU  H'0000'
P2SYNC1          EQU  H'0001'
P2SYNC2          EQU  H'0002'
P2DCPOL          EQU  H'0005'
P2PRPOL          EQU  H'0006'
P2POFST          EQU  H'0007'


;----- PSMC2CLK Bits -----------------------------------------------------
P2CSRC0          EQU  H'0000'
P2CSRC1          EQU  H'0001'
P2CPRE0          EQU  H'0004'
P2CPRE1          EQU  H'0005'



;----- PSMC2OEN Bits -----------------------------------------------------
P2OEA            EQU  H'0000'
P2OEB            EQU  H'0001'


;----- PSMC2POL Bits -----------------------------------------------------
P2POLA           EQU  H'0000'
P2POLB           EQU  H'0001'
P2INPOL          EQU  H'0006'


;----- PSMC2BLNK Bits -----------------------------------------------------
P2REBM0          EQU  H'0000'
P2REBM1          EQU  H'0001'
P2FEBM0          EQU  H'0004'
P2FEBM1          EQU  H'0005'


;----- PSMC2REBS Bits -----------------------------------------------------
P2REBSC1         EQU  H'0001'
P2REBSC2         EQU  H'0002'
P2REBSC3         EQU  H'0003'
P2REBSC4         EQU  H'0004'
P2REBSIN         EQU  H'0007'


;----- PSMC2FEBS Bits -----------------------------------------------------
P2FEBSC1         EQU  H'0001'
P2FEBSC2         EQU  H'0002'
P2FEBSC3         EQU  H'0003'
P2FEBSC4         EQU  H'0004'
P2FEBSIN         EQU  H'0007'


;----- PSMC2PHS Bits -----------------------------------------------------
P2PHST           EQU  H'0000'
P2PHSC1          EQU  H'0001'
P2PHSC2          EQU  H'0002'
P2PHSC3          EQU  H'0003'
P2PHSC4          EQU  H'0004'
P2PHSIN          EQU  H'0007'


;----- PSMC2DCS Bits -----------------------------------------------------
P2DCST           EQU  H'0000'
P2DCSC1          EQU  H'0001'
P2DCSC2          EQU  H'0002'
P2DCSC3          EQU  H'0003'
P2DCSC4          EQU  H'0004'
P2DCSIN          EQU  H'0007'


;----- PSMC2PRS Bits -----------------------------------------------------
P2PRST           EQU  H'0000'
P2PRSC1          EQU  H'0001'
P2PRSC2          EQU  H'0002'
P2PRSC3          EQU  H'0003'
P2PRSC4          EQU  H'0004'
P2PRSIN          EQU  H'0007'


;----- PSMC2ASDC Bits -----------------------------------------------------
P2ASDOV          EQU  H'0000'
P2ARSEN          EQU  H'0005'
P2ASDEN          EQU  H'0006'
P2ASE            EQU  H'0007'


;----- PSMC2ASDL Bits -----------------------------------------------------
P2ASDLA          EQU  H'0000'
P2ASDLB          EQU  H'0001'


;----- PSMC2ASDS Bits -----------------------------------------------------
P2ASDSC1         EQU  H'0001'
P2ASDSC2         EQU  H'0002'
P2ASDSC3         EQU  H'0003'
P2ASDSC4         EQU  H'0004'
P2ASDSIN         EQU  H'0007'


;----- PSMC2INT Bits -----------------------------------------------------
P2TPRIF          EQU  H'0000'
P2TDCIF          EQU  H'0001'
P2TPHIF          EQU  H'0002'
P2TOVIF          EQU  H'0003'
P2TPRIE          EQU  H'0004'
P2TDCIE          EQU  H'0005'
P2TPHIE          EQU  H'0006'
P2TOVIE          EQU  H'0007'


;----- PSMC2PHL Bits -----------------------------------------------------
PSMC2PH0         EQU  H'0000'
PSMC2PH1         EQU  H'0001'
PSMC2PH2         EQU  H'0002'
PSMC2PH3         EQU  H'0003'
PSMC2PH4         EQU  H'0004'
PSMC2PH5         EQU  H'0005'
PSMC2PH6         EQU  H'0006'
PSMC2PH7         EQU  H'0007'


;----- PSMC2PHH Bits -----------------------------------------------------
PSMC2PH8         EQU  H'0000'
PSMC2PH9         EQU  H'0001'
PSMC2PH10        EQU  H'0002'
PSMC2PH11        EQU  H'0003'
PSMC2PH12        EQU  H'0004'
PSMC2PH13        EQU  H'0005'
PSMC2PH14        EQU  H'0006'
PSMC2PH15        EQU  H'0007'


;----- PSMC2DCL Bits -----------------------------------------------------
PSMC2DC0         EQU  H'0000'
PSMC2DC1         EQU  H'0001'
PSMC2DC2         EQU  H'0002'
PSMC2DC3         EQU  H'0003'
PSMC2DC4         EQU  H'0004'
PSMC2DC5         EQU  H'0005'
PSMC2DC6         EQU  H'0006'
PSMC2DC7         EQU  H'0007'


;----- PSMC2DCH Bits -----------------------------------------------------
PSMC2DC8         EQU  H'0000'
PSMC2DC9         EQU  H'0001'
PSMC2DC10        EQU  H'0002'
PSMC2DC11        EQU  H'0003'
PSMC2DC12        EQU  H'0004'
PSMC2DC13        EQU  H'0005'
PSMC2DC14        EQU  H'0006'
PSMC2DC15        EQU  H'0007'


;----- PSMC2PRL Bits -----------------------------------------------------
PSMC2PR0         EQU  H'0000'
PSMC2PR1         EQU  H'0001'
PSMC2PR2         EQU  H'0002'
PSMC2PR3         EQU  H'0003'
PSMC2PR4         EQU  H'0004'
PSMC2PR5         EQU  H'0005'
PSMC2PR6         EQU  H'0006'
PSMC2PR7         EQU  H'0007'


;----- PSMC2PRH Bits -----------------------------------------------------
PSMC2PR8         EQU  H'0000'
PSMC2PR9         EQU  H'0001'
PSMC2PR10        EQU  H'0002'
PSMC2PR11        EQU  H'0003'
PSMC2PR12        EQU  H'0004'
PSMC2PR13        EQU  H'0005'
PSMC2PR14        EQU  H'0006'
PSMC2PR15        EQU  H'0007'


;----- PSMC2TMRL Bits -----------------------------------------------------
PSMC2TMR0        EQU  H'0000'
PSMC2TMR1        EQU  H'0001'
PSMC2TMR2        EQU  H'0002'
PSMC2TMR3        EQU  H'0003'
PSMC2TMR4        EQU  H'0004'
PSMC2TMR5        EQU  H'0005'
PSMC2TMR6        EQU  H'0006'
PSMC2TMR7        EQU  H'0007'


;----- PSMC2TMRH Bits -----------------------------------------------------
PSMC2TMR8        EQU  H'0000'
PSMC2TMR9        EQU  H'0001'
PSMC2TMR10       EQU  H'0002'
PSMC2TMR11       EQU  H'0003'
PSMC2TMR12       EQU  H'0004'
PSMC2TMR13       EQU  H'0005'
PSMC2TMR14       EQU  H'0006'
PSMC2TMR15       EQU  H'0007'


;----- PSMC2DBR Bits -----------------------------------------------------
PSMC2DBR0        EQU  H'0000'
PSMC2DBR1        EQU  H'0001'
PSMC2DBR2        EQU  H'0002'
PSMC2DBR3        EQU  H'0003'
PSMC2DBR4        EQU  H'0004'
PSMC2DBR5        EQU  H'0005'
PSMC2DBR6        EQU  H'0006'
PSMC2DBR7        EQU  H'0007'


;----- PSMC2DBF Bits -----------------------------------------------------
PSMC2DBF0        EQU  H'0000'
PSMC2DBF1        EQU  H'0001'
PSMC2DBF2        EQU  H'0002'
PSMC2DBF3        EQU  H'0003'
PSMC2DBF4        EQU  H'0004'
PSMC2DBF5        EQU  H'0005'
PSMC2DBF6        EQU  H'0006'
PSMC2DBF7        EQU  H'0007'


;----- PSMC2BLKR Bits -----------------------------------------------------
PSMC2BLKR0       EQU  H'0000'
PSMC2BLKR1       EQU  H'0001'
PSMC2BLKR2       EQU  H'0002'
PSMC2BLKR3       EQU  H'0003'
PSMC2BLKR4       EQU  H'0004'
PSMC2BLKR5       EQU  H'0005'
PSMC2BLKR6       EQU  H'0006'
PSMC2BLKR7       EQU  H'0007'


;----- PSMC2BLKF Bits -----------------------------------------------------
PSMC2BLKF0       EQU  H'0000'
PSMC2BLKF1       EQU  H'0001'
PSMC2BLKF2       EQU  H'0002'
PSMC2BLKF3       EQU  H'0003'
PSMC2BLKF4       EQU  H'0004'
PSMC2BLKF5       EQU  H'0005'
PSMC2BLKF6       EQU  H'0006'
PSMC2BLKF7       EQU  H'0007'


;----- PSMC2FFA Bits -----------------------------------------------------
PSMC2FFA0        EQU  H'0000'
PSMC2FFA1        EQU  H'0001'
PSMC2FFA2        EQU  H'0002'
PSMC2FFA3        EQU  H'0003'


;----- PSMC2STR0 Bits -----------------------------------------------------
P2STRA           EQU  H'0000'
P2STRB           EQU  H'0001'


;----- PSMC2STR1 Bits -----------------------------------------------------
P2HSMEN          EQU  H'0000'
P2LSMEN          EQU  H'0001'
P2SSYNC          EQU  H'0007'


;----- PSMC3CON Bits -----------------------------------------------------
P3DBRE           EQU  H'0004'
P3DBFE           EQU  H'0005'
PSMC3LD          EQU  H'0006'
PSMC3EN          EQU  H'0007'

P3MODE0          EQU  H'0000'
P3MODE1          EQU  H'0001'
P3MODE2          EQU  H'0002'
P3MODE3          EQU  H'0003'


;----- PSMC3MDL Bits -----------------------------------------------------
P3MDLBIT         EQU  H'0005'
P3MDLPOL         EQU  H'0006'
P3MDLEN          EQU  H'0007'

P3MSRC0          EQU  H'0000'
P3MSRC1          EQU  H'0001'
P3MSRC2          EQU  H'0002'
P3MSRC3          EQU  H'0003'


;----- PSMC3SYNC Bits -----------------------------------------------------
P3SYNC0          EQU  H'0000'
P3SYNC1          EQU  H'0001'
P3SYNC2          EQU  H'0002'
P3DCPOL          EQU  H'0005'
P3PRPOL          EQU  H'0006'
P3POFST          EQU  H'0007'


;----- PSMC3CLK Bits -----------------------------------------------------
P3CSRC0          EQU  H'0000'
P3CSRC1          EQU  H'0001'
P3CPRE0          EQU  H'0004'
P3CPRE1          EQU  H'0005'



;----- PSMC3OEN Bits -----------------------------------------------------
P3OEA            EQU  H'0000'
P3OEB            EQU  H'0001'


;----- PSMC3POL Bits -----------------------------------------------------
P3POLA           EQU  H'0000'
P3POLB           EQU  H'0001'
P3INPOL          EQU  H'0006'


;----- PSMC3BLNK Bits -----------------------------------------------------
P3REBM0          EQU  H'0000'
P3REBM1          EQU  H'0001'
P3FEBM0          EQU  H'0004'
P3FEBM1          EQU  H'0005'


;----- PSMC3REBS Bits -----------------------------------------------------
P3REBSC1         EQU  H'0001'
P3REBSC2         EQU  H'0002'
P3REBSC3         EQU  H'0003'
P3REBSC4         EQU  H'0004'
P3REBSIN         EQU  H'0007'


;----- PSMC3FEBS Bits -----------------------------------------------------
P3FEBSC1         EQU  H'0001'
P3FEBSC2         EQU  H'0002'
P3FEBSC3         EQU  H'0003'
P3FEBSC4         EQU  H'0004'
P3FEBSIN         EQU  H'0007'


;----- PSMC3PHS Bits -----------------------------------------------------
P3PHST           EQU  H'0000'
P3PHSC1          EQU  H'0001'
P3PHSC2          EQU  H'0002'
P3PHSC3          EQU  H'0003'
P3PHSC4          EQU  H'0004'
P3PHSIN          EQU  H'0007'


;----- PSMC3DCS Bits -----------------------------------------------------
P3DCST           EQU  H'0000'
P3DCSC1          EQU  H'0001'
P3DCSC2          EQU  H'0002'
P3DCSC3          EQU  H'0003'
P3DCSC4          EQU  H'0004'
P3DCSIN          EQU  H'0007'


;----- PSMC3PRS Bits -----------------------------------------------------
P3PRST           EQU  H'0000'
P3PRSC1          EQU  H'0001'
P3PRSC2          EQU  H'0002'
P3PRSC3          EQU  H'0003'
P3PRSC4          EQU  H'0004'
P3PRSIN          EQU  H'0007'


;----- PSMC3ASDC Bits -----------------------------------------------------
P3ASDOV          EQU  H'0000'
P3ARSEN          EQU  H'0005'
P3ASDEN          EQU  H'0006'
P3ASE            EQU  H'0007'


;----- PSMC3ASDL Bits -----------------------------------------------------
P3ASDLA          EQU  H'0000'
P3ASDLB          EQU  H'0001'
P3ASDLC          EQU  H'0002'
P3ASDLD          EQU  H'0003'
P3ASDLE          EQU  H'0004'
P3ASDLF          EQU  H'0005'


;----- PSMC3ASDS Bits -----------------------------------------------------
P3ASDSC1         EQU  H'0001'
P3ASDSC2         EQU  H'0002'
P3ASDSC3         EQU  H'0003'
P3ASDSC4         EQU  H'0004'
P3ASDSIN         EQU  H'0007'


;----- PSMC3INT Bits -----------------------------------------------------
P3TPRIF          EQU  H'0000'
P3TDCIF          EQU  H'0001'
P3TPHIF          EQU  H'0002'
P3TOVIF          EQU  H'0003'
P3TPRIE          EQU  H'0004'
P3TDCIE          EQU  H'0005'
P3TPHIE          EQU  H'0006'
P3TOVIE          EQU  H'0007'


;----- PSMC3PHL Bits -----------------------------------------------------
PSMC3PH0         EQU  H'0000'
PSMC3PH1         EQU  H'0001'
PSMC3PH2         EQU  H'0002'
PSMC3PH3         EQU  H'0003'
PSMC3PH4         EQU  H'0004'
PSMC3PH5         EQU  H'0005'
PSMC3PH6         EQU  H'0006'
PSMC3PH7         EQU  H'0007'


;----- PSMC3PHH Bits -----------------------------------------------------
PSMC3PH8         EQU  H'0000'
PSMC3PH9         EQU  H'0001'
PSMC3PH10        EQU  H'0002'
PSMC3PH11        EQU  H'0003'
PSMC3PH12        EQU  H'0004'
PSMC3PH13        EQU  H'0005'
PSMC3PH14        EQU  H'0006'
PSMC3PH15        EQU  H'0007'


;----- PSMC3DCL Bits -----------------------------------------------------
PSMC3DC0         EQU  H'0000'
PSMC3DC1         EQU  H'0001'
PSMC3DC2         EQU  H'0002'
PSMC3DC3         EQU  H'0003'
PSMC3DC4         EQU  H'0004'
PSMC3DC5         EQU  H'0005'
PSMC3DC6         EQU  H'0006'
PSMC3DC7         EQU  H'0007'


;----- PSMC3DCH Bits -----------------------------------------------------
PSMC3DC8         EQU  H'0000'
PSMC3DC9         EQU  H'0001'
PSMC3DC10        EQU  H'0002'
PSMC3DC11        EQU  H'0003'
PSMC3DC12        EQU  H'0004'
PSMC3DC13        EQU  H'0005'
PSMC3DC14        EQU  H'0006'
PSMC3DC15        EQU  H'0007'


;----- PSMC3PRL Bits -----------------------------------------------------
PSMC3PR0         EQU  H'0000'
PSMC3PR1         EQU  H'0001'
PSMC3PR2         EQU  H'0002'
PSMC3PR3         EQU  H'0003'
PSMC3PR4         EQU  H'0004'
PSMC3PR5         EQU  H'0005'
PSMC3PR6         EQU  H'0006'
PSMC3PR7         EQU  H'0007'


;----- PSMC3PRH Bits -----------------------------------------------------
PSMC3PR8         EQU  H'0000'
PSMC3PR9         EQU  H'0001'
PSMC3PR10        EQU  H'0002'
PSMC3PR11        EQU  H'0003'
PSMC3PR12        EQU  H'0004'
PSMC3PR13        EQU  H'0005'
PSMC3PR14        EQU  H'0006'
PSMC3PR15        EQU  H'0007'


;----- PSMC3TMRL Bits -----------------------------------------------------
PSMC3TMR0        EQU  H'0000'
PSMC3TMR1        EQU  H'0001'
PSMC3TMR2        EQU  H'0002'
PSMC3TMR3        EQU  H'0003'
PSMC3TMR4        EQU  H'0004'
PSMC3TMR5        EQU  H'0005'
PSMC3TMR6        EQU  H'0006'
PSMC3TMR7        EQU  H'0007'


;----- PSMC3TMRH Bits -----------------------------------------------------
PSMC3TMR8        EQU  H'0000'
PSMC3TMR9        EQU  H'0001'
PSMC3TMR10       EQU  H'0002'
PSMC3TMR11       EQU  H'0003'
PSMC3TMR12       EQU  H'0004'
PSMC3TMR13       EQU  H'0005'
PSMC3TMR14       EQU  H'0006'
PSMC3TMR15       EQU  H'0007'


;----- PSMC3DBR Bits -----------------------------------------------------
PSMC3DBR0        EQU  H'0000'
PSMC3DBR1        EQU  H'0001'
PSMC3DBR2        EQU  H'0002'
PSMC3DBR3        EQU  H'0003'
PSMC3DBR4        EQU  H'0004'
PSMC3DBR5        EQU  H'0005'
PSMC3DBR6        EQU  H'0006'
PSMC3DBR7        EQU  H'0007'


;----- PSMC3DBF Bits -----------------------------------------------------
PSMC3DBF0        EQU  H'0000'
PSMC3DBF1        EQU  H'0001'
PSMC3DBF2        EQU  H'0002'
PSMC3DBF3        EQU  H'0003'
PSMC3DBF4        EQU  H'0004'
PSMC3DBF5        EQU  H'0005'
PSMC3DBF6        EQU  H'0006'
PSMC3DBF7        EQU  H'0007'


;----- PSMC3BLKR Bits -----------------------------------------------------
PSMC3BLKR0       EQU  H'0000'
PSMC3BLKR1       EQU  H'0001'
PSMC3BLKR2       EQU  H'0002'
PSMC3BLKR3       EQU  H'0003'
PSMC3BLKR4       EQU  H'0004'
PSMC3BLKR5       EQU  H'0005'
PSMC3BLKR6       EQU  H'0006'
PSMC3BLKR7       EQU  H'0007'


;----- PSMC3BLKF Bits -----------------------------------------------------
PSMC3BLKF0       EQU  H'0000'
PSMC3BLKF1       EQU  H'0001'
PSMC3BLKF2       EQU  H'0002'
PSMC3BLKF3       EQU  H'0003'
PSMC3BLKF4       EQU  H'0004'
PSMC3BLKF5       EQU  H'0005'
PSMC3BLKF6       EQU  H'0006'
PSMC3BLKF7       EQU  H'0007'


;----- PSMC3FFA Bits -----------------------------------------------------
PSMC3FFA0        EQU  H'0000'
PSMC3FFA1        EQU  H'0001'
PSMC3FFA2        EQU  H'0002'
PSMC3FFA3        EQU  H'0003'


;----- PSMC3STR0 Bits -----------------------------------------------------
P3STRA           EQU  H'0000'
P3STRB           EQU  H'0001'


;----- PSMC3STR1 Bits -----------------------------------------------------
P3HSMEN          EQU  H'0000'
P3LSMEN          EQU  H'0001'
P3SSYNC          EQU  H'0007'


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
       __BADRAM  H'001D'-H'001F'
       __BADRAM  H'008F'
       __BADRAM  H'010F'-H'0110'
       __BADRAM  H'018E'-H'0190'
       __BADRAM  H'0198'
       __BADRAM  H'020F'
       __BADRAM  H'0218'-H'021F'
       __BADRAM  H'028F'-H'0290'
       __BADRAM  H'0294'-H'0297'
       __BADRAM  H'029B'-H'029F'
       __BADRAM  H'030F'-H'0310'
       __BADRAM  H'0314'-H'031F'
       __BADRAM  H'038F'
       __BADRAM  H'039A'-H'039C'
       __BADRAM  H'040C'-H'041F'
       __BADRAM  H'048C'-H'049F'
       __BADRAM  H'050C'-H'0510'
       __BADRAM  H'0512'
       __BADRAM  H'0514'-H'0519'
       __BADRAM  H'051B'-H'051F'
       __BADRAM  H'058C'-H'059F'
       __BADRAM  H'060C'-H'061F'
       __BADRAM  H'0650'-H'066F'
       __BADRAM  H'068C'-H'069F'
       __BADRAM  H'06A0'-H'06EF'
       __BADRAM  H'070C'-H'071F'
       __BADRAM  H'0720'-H'076F'
       __BADRAM  H'078C'-H'079F'
       __BADRAM  H'07A0'-H'07EF'
       __BADRAM  H'080C'-H'0810'
       __BADRAM  H'0830'
       __BADRAM  H'0850'
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
_WRT_ALL         EQU  H'FFFC'    ; 000h to 7FFh write protected, no addresses may be modified by EECON control
_WRT_HALF        EQU  H'FFFD'    ; 000h to FFFh write protected, 1000h to 1FFFh may be modified by EECON control
_WRT_BOOT        EQU  H'FFFE'    ; 000h to 1FFh write protected, 200h to 1FFFh may be modified by EECON control
_WRT_OFF         EQU  H'FFFF'    ; Write protection off

_VCAPEN_ON       EQU  H'FFDF'    ; Vcap functionality is enabled on RA6 (Vddcore is connected to the pad)
_VCAPEN_OFF      EQU  H'FFFF'    ; Vcap functionality is disabled on RA6.

_PLLEN_OFF       EQU  H'FEFF'    ; 4x PLL disabled
_PLLEN_ON        EQU  H'FFFF'    ; 4x PLL enabled

_STVREN_OFF      EQU  H'FDFF'    ; Stack Overflow or Underflow will not cause a Reset
_STVREN_ON       EQU  H'FFFF'    ; Stack Overflow or Underflow will cause a Reset

_BORV_HI         EQU  H'FBFF'    ; Brown-out Reset Voltage (Vbor), high trip point selected.
_BORV_LO         EQU  H'FFFF'    ; Brown-out Reset Voltage (Vbor), low trip point selected.

_LPBOR_ON        EQU  H'F7FF'    ; Low power brown-out is enabled
_LPBOR_OFF       EQU  H'FFFF'    ; Low power brown-out is disabled

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
