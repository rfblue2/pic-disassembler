        LIST

;==========================================================================
;  MPASM PIC16F636 processor include
; 
;  (c) Copyright 1999-2013 Microchip Technology, All rights reserved
;==========================================================================

        NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC16F636 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\MPASM MYFILE.ASM /PIC16F636
;       2. LIST directive in the source file
;               LIST   P=PIC16F636
;       3. Processor Type entry in the MPASM full-screen interface
;       4. Setting the processor in the MPLAB Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================
        IFNDEF __16F636
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
PCLATH           EQU  H'000A'
INTCON           EQU  H'000B'
PIR1             EQU  H'000C'
TMR1             EQU  H'000E'
TMR1L            EQU  H'000E'
TMR1H            EQU  H'000F'
T1CON            EQU  H'0010'
WDTCON           EQU  H'0018'
CMCON0           EQU  H'0019'
CMCON1           EQU  H'001A'

;-----Bank1------------------
OPTION_REG       EQU  H'0081'
TRISA            EQU  H'0085'
TRISC            EQU  H'0087'
PIE1             EQU  H'008C'
PCON             EQU  H'008E'
OSCCON           EQU  H'008F'
OSCTUNE          EQU  H'0090'
LVDCON           EQU  H'0094'
WPUDA            EQU  H'0095'
IOCA             EQU  H'0096'
WDA              EQU  H'0097'
VRCON            EQU  H'0099'
EEDAT            EQU  H'009A'
EEDATA           EQU  H'009A'
EEADR            EQU  H'009B'
EECON1           EQU  H'009C'
EECON2           EQU  H'009D'

;-----Bank2------------------
CRCON            EQU  H'0110'
CRDAT0           EQU  H'0111'
CRDAT1           EQU  H'0112'
CRDAT2           EQU  H'0113'
CRDAT3           EQU  H'0114'

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


;----- PORTC Bits -----------------------------------------------------
RC0              EQU  H'0000'
RC1              EQU  H'0001'
RC2              EQU  H'0002'
RC3              EQU  H'0003'
RC4              EQU  H'0004'
RC5              EQU  H'0005'


;----- INTCON Bits -----------------------------------------------------
RAIF             EQU  H'0000'
INTF             EQU  H'0001'
T0IF             EQU  H'0002'
RAIE             EQU  H'0003'
INTE             EQU  H'0004'
T0IE             EQU  H'0005'
PEIE             EQU  H'0006'
GIE              EQU  H'0007'


;----- PIR1 Bits -----------------------------------------------------
TMR1IF           EQU  H'0000'
OSFIF            EQU  H'0002'
C1IF             EQU  H'0003'
C2IF             EQU  H'0004'
CRIF             EQU  H'0005'
LVDIF            EQU  H'0006'
EEIF             EQU  H'0007'


;----- T1CON Bits -----------------------------------------------------
TMR1ON           EQU  H'0000'
TMR1CS           EQU  H'0001'
NOT_T1SYNC       EQU  H'0002'
T1OSCEN          EQU  H'0003'
TMR1GE           EQU  H'0006'
T1GINV           EQU  H'0007'

T1CKPS0          EQU  H'0004'
T1CKPS1          EQU  H'0005'


;----- WDTCON Bits -----------------------------------------------------
SWDTEN           EQU  H'0000'

WDTPS0           EQU  H'0001'
WDTPS1           EQU  H'0002'
WDTPS2           EQU  H'0003'
WDTPS3           EQU  H'0004'


;----- CMCON0 Bits -----------------------------------------------------
CIS              EQU  H'0003'
C1INV            EQU  H'0004'
C2INV            EQU  H'0005'
C1OUT            EQU  H'0006'
C2OUT            EQU  H'0007'

CM0              EQU  H'0000'
CM1              EQU  H'0001'
CM2              EQU  H'0002'


;----- CMCON1 Bits -----------------------------------------------------
C2SYNC           EQU  H'0000'
T1GSS            EQU  H'0001'


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


;----- PIE1 Bits -----------------------------------------------------
TMR1IE           EQU  H'0000'
OSFIE            EQU  H'0002'
C1IE             EQU  H'0003'
C2IE             EQU  H'0004'
CRIE             EQU  H'0005'
LVDIE            EQU  H'0006'
EEIE             EQU  H'0007'


;----- PCON Bits -----------------------------------------------------
NOT_BOR          EQU  H'0000'
NOT_POR          EQU  H'0001'
NOT_WUR          EQU  H'0003'
SBOREN           EQU  H'0004'
ULPWUE           EQU  H'0005'

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


;----- LVDCON Bits -----------------------------------------------------
LVDEN            EQU  H'0004'
IRVST            EQU  H'0005'

LVDL0            EQU  H'0000'
LVDL1            EQU  H'0001'
LVDL2            EQU  H'0002'


;----- WPUDA Bits -----------------------------------------------------
WPUDA0           EQU  H'0000'
WPUDA1           EQU  H'0001'
WPUDA2           EQU  H'0002'
WPUDA4           EQU  H'0004'
WPUDA5           EQU  H'0005'


;----- IOCA Bits -----------------------------------------------------
IOCA0            EQU  H'0000'
IOCA1            EQU  H'0001'
IOCA2            EQU  H'0002'
IOCA3            EQU  H'0003'
IOCA4            EQU  H'0004'
IOCA5            EQU  H'0005'


;----- WDA Bits -----------------------------------------------------
WDA0             EQU  H'0000'
WDA1             EQU  H'0001'
WDA2             EQU  H'0002'
WDA4             EQU  H'0004'
WDA5             EQU  H'0005'


;----- VRCON Bits -----------------------------------------------------
VRR              EQU  H'0005'
VREN             EQU  H'0007'

VR0              EQU  H'0000'
VR1              EQU  H'0001'
VR2              EQU  H'0002'
VR3              EQU  H'0003'


;----- EECON1 Bits -----------------------------------------------------
RD               EQU  H'0000'
WR               EQU  H'0001'
WREN             EQU  H'0002'
WRERR            EQU  H'0003'


;----- CRCON Bits -----------------------------------------------------
ENC_NOT_DEC      EQU  H'0006'
GO_NOT_DONE      EQU  H'0007'

CRREG0           EQU  H'0000'
CRREG1           EQU  H'0001'
ENC_DEC          EQU  H'0006'
GO               EQU  H'0007'




;==========================================================================
;
;       RAM Definitions
;
;==========================================================================
       __MAXRAM  H'01FF'
       __BADRAM  H'0006'
       __BADRAM  H'0008'-H'0009'
       __BADRAM  H'000D'
       __BADRAM  H'0011'-H'0017'
       __BADRAM  H'001B'-H'001F'
       __BADRAM  H'0086'
       __BADRAM  H'0088'-H'0089'
       __BADRAM  H'008D'
       __BADRAM  H'0091'-H'0093'
       __BADRAM  H'0098'
       __BADRAM  H'009E'-H'009F'
       __BADRAM  H'00C0'-H'00EF'
       __BADRAM  H'0106'
       __BADRAM  H'0108'-H'0109'
       __BADRAM  H'010C'-H'010F'
       __BADRAM  H'0115'-H'011F'
       __BADRAM  H'0120'-H'016F'
       __BADRAM  H'0186'
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
_FOSC_LP             EQU  H'3FF8'    ; LP oscillator: Low-power crystal on RA5/T1CKI/OSC1/CLKIN and RA4/T1G/OSC2/CLKOUT
_LP_OSC              EQU  H'3FF8'    ; LP oscillator: Low-power crystal on RA5/T1CKI/OSC1/CLKIN and RA4/T1G/OSC2/CLKOUT
_FOSC_XT             EQU  H'3FF9'    ; XT oscillator: Crystal/resonator on RA5/T1CKI/OSC1/CLKIN and RA4/T1G/OSC2/CLKOUT
_XT_OSC              EQU  H'3FF9'    ; XT oscillator: Crystal/resonator on RA5/T1CKI/OSC1/CLKIN and RA4/T1G/OSC2/CLKOUT
_FOSC_HS             EQU  H'3FFA'    ; HS oscillator: High-speed crystal/resonator on RA5/T1CKI/OSC1/CLKIN and RA4/T1G/OSC2/CLKOUT
_HS_OSC              EQU  H'3FFA'    ; HS oscillator: High-speed crystal/resonator on RA5/T1CKI/OSC1/CLKIN and RA4/T1G/OSC2/CLKOUT
_FOSC_EC             EQU  H'3FFB'    ; EC: I/O function on RA4/T1G/OSC2/CLKOUT, CLKIN on RA5/T1CKI/OSC1/CLKIN
_EC_OSC              EQU  H'3FFB'    ; EC: I/O function on RA4/T1G/OSC2/CLKOUT, CLKIN on RA5/T1CKI/OSC1/CLKIN
_FOSC_INTOSCIO       EQU  H'3FFC'    ; INTOSCIO oscillator: I/O function on RA4/T1G/OSC2/CLKOUT pin, I/O function on RA5/T1CKI/OSC1/CLKIN
_INTRC_OSC_NOCLKOUT  EQU  H'3FFC'    ; INTOSCIO oscillator: I/O function on RA4/T1G/OSC2/CLKOUT pin, I/O function on RA5/T1CKI/OSC1/CLKIN
_FOSC_INTOSCCLK      EQU  H'3FFD'    ; INTOSC oscillator: CLKOUT function on RA4/T1G/OSC2/CLKOUT pin, I/O function on RA5/T1CKI/OSC1/CLKIN
_INTRC_OSC_CLKOUT    EQU  H'3FFD'    ; INTOSC oscillator: CLKOUT function on RA4/T1G/OSC2/CLKOUT pin, I/O function on RA5/T1CKI/OSC1/CLKIN
_FOSC_EXTRCIO        EQU  H'3FFE'    ; RCIO oscillator: I/O function on RA4/T1G/OSC2/CLKOUT pin, RC on RA5/T1CKI/OSC1/CLKIN
_EXTRC_OSC_NOCLKOUT  EQU  H'3FFE'    ; RCIO oscillator: I/O function on RA4/T1G/OSC2/CLKOUT pin, RC on RA5/T1CKI/OSC1/CLKIN
_FOSC_EXTRCCLK       EQU  H'3FFF'    ; RC oscillator: CLKOUT function on RA4/T1G/OSC2/CLKOUT pin, RC on RA5/T1CKI/OSC1/CLKIN
_EXTRC_OSC_CLKOUT    EQU  H'3FFF'    ; RC oscillator: CLKOUT function on RA4/T1G/OSC2/CLKOUT pin, RC on RA5/T1CKI/OSC1/CLKIN

_WDTE_OFF            EQU  H'3FF7'    ; WDT disabled and can be enabled by SWDTEN bit of the WDTCON register
_WDT_OFF             EQU  H'3FF7'    ; WDT disabled and can be enabled by SWDTEN bit of the WDTCON register
_WDTE_ON             EQU  H'3FFF'    ; WDT enabled
_WDT_ON              EQU  H'3FFF'    ; WDT enabled

_PWRTE_ON            EQU  H'3FEF'    ; PWRT enabled
_PWRTE_OFF           EQU  H'3FFF'    ; PWRT disabled

_MCLRE_OFF           EQU  H'3FDF'    ; MCLR pin function is alternate function, MCLR function is internally disabled
_MCLRE_ON            EQU  H'3FFF'    ; MCLR pin is MCLR function and weak internal pull-up is enabled

_CP_ON               EQU  H'3FBF'    ; Program memory is external read and write-protected
_CP_OFF              EQU  H'3FFF'    ; Program memory is not code protected

_CPD_ON              EQU  H'3F7F'    ; Data memory is external read protected
_CPD_OFF             EQU  H'3FFF'    ; Data memory is not code protected

_BOREN_OFF           EQU  H'3CFF'    ; BOD and SBODEN disabled
_BOD_OFF             EQU  H'3CFF'    ; BOD and SBODEN disabled
_BOREN_SBODEN        EQU  H'3DFF'    ; SBODEN controls BOD function
_BOD_SBODEN          EQU  H'3DFF'    ; SBODEN controls BOD function
_BOREN_NSLEEP        EQU  H'3EFF'    ; BOD enabled while running and disabled in Sleep. SBODEN bit disabled.
_BOD_NSLEEP          EQU  H'3EFF'    ; BOD enabled while running and disabled in Sleep. SBODEN bit disabled.
_BOREN_ON            EQU  H'3FFF'    ; BOD enabled and SBOdEN bit disabled
_BOD_ON              EQU  H'3FFF'    ; BOD enabled and SBOdEN bit disabled

_IESO_OFF            EQU  H'3BFF'    ; Internal External Switchover mode disabled
_IESO_ON             EQU  H'3FFF'    ; Internal External Switchover mode enabled

_FCMEN_OFF           EQU  H'37FF'    ; Fail-Safe Clock Monitor disabled
_FCMEN_ON            EQU  H'3FFF'    ; Fail-Safe Clock Monitor enabled

_WURE_ON             EQU  H'2FFF'    ; Wake-up and Reset enabled
_WUREN_ON            EQU  H'2FFF'    ; Wake-up and Reset enabled
_WURE_OFF            EQU  H'3FFF'    ; Standard wake-up and continue enabled
_WUREN_OFF           EQU  H'3FFF'    ; Standard wake-up and continue enabled

;----- DEVID Equates --------------------------------------------------
_DEVID1          EQU  H'2006'

;----- IDLOC Equates --------------------------------------------------
_IDLOC0          EQU  H'2000'
_IDLOC1          EQU  H'2001'
_IDLOC2          EQU  H'2002'
_IDLOC3          EQU  H'2003'

        LIST
