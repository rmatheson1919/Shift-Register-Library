EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:My Librery
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L ArduinoUno U?
U 1 1 5CA4DE61
P 2550 2800
F 0 "U?" H 2550 2800 60  0001 C CNN
F 1 "ArduinoUno" H 2550 2800 60  0001 C CNN
F 2 "" H 2550 2800 60  0001 C CNN
F 3 "" H 2550 2800 60  0001 C CNN
	1    2550 2800
	0    1    1    0   
$EndComp
$Comp
L SN74HC595 U?
U 1 1 5CA4DEDE
P 4600 2200
F 0 "U?" H 4600 2200 39  0001 C CNN
F 1 "SN74HC595" H 4425 2175 28  0000 C CNB
F 2 "" H 4600 2200 394 0001 C CNN
F 3 "" H 4600 2200 394 0001 C CNN
	1    4600 2200
	1    0    0    -1  
$EndComp
$Comp
L LED D?
U 1 1 5CA4E018
P 4800 3325
F 0 "D?" H 4800 3425 50  0001 C CNN
F 1 "LED" H 4800 3225 50  0001 C CNN
F 2 "" H 4800 3325 50  0000 C CNN
F 3 "" H 4800 3325 50  0000 C CNN
	1    4800 3325
	0    -1   -1   0   
$EndComp
$Comp
L LED D?
U 1 1 5CA4E079
P 4625 3225
F 0 "D?" H 4625 3325 50  0001 C CNN
F 1 "LED" H 4625 3125 50  0001 C CNN
F 2 "" H 4625 3225 50  0000 C CNN
F 3 "" H 4625 3225 50  0000 C CNN
	1    4625 3225
	0    -1   -1   0   
$EndComp
$Comp
L LED D?
U 1 1 5CA4E0FD
P 4475 3125
F 0 "D?" H 4475 3225 50  0001 C CNN
F 1 "LED" H 4475 3025 50  0001 C CNN
F 2 "" H 4475 3125 50  0000 C CNN
F 3 "" H 4475 3125 50  0000 C CNN
	1    4475 3125
	0    -1   -1   0   
$EndComp
$Comp
L LED D?
U 1 1 5CA4E176
P 4275 2975
F 0 "D?" H 4275 3075 50  0001 C CNN
F 1 "LED" H 4275 2875 50  0001 C CNN
F 2 "" H 4275 2975 50  0000 C CNN
F 3 "" H 4275 2975 50  0000 C CNN
	1    4275 2975
	0    -1   -1   0   
$EndComp
$Comp
L LED D?
U 1 1 5CA4E1DB
P 4075 2850
F 0 "D?" H 4075 2950 50  0001 C CNN
F 1 "LED" H 4075 2750 50  0001 C CNN
F 2 "" H 4075 2850 50  0000 C CNN
F 3 "" H 4075 2850 50  0000 C CNN
	1    4075 2850
	0    -1   -1   0   
$EndComp
$Comp
L LED D?
U 1 1 5CA4E249
P 3875 2725
F 0 "D?" H 3875 2825 50  0001 C CNN
F 1 "LED" H 3875 2625 50  0001 C CNN
F 2 "" H 3875 2725 50  0000 C CNN
F 3 "" H 3875 2725 50  0000 C CNN
	1    3875 2725
	0    -1   -1   0   
$EndComp
$Comp
L LED D?
U 1 1 5CA4E2B3
P 3725 2625
F 0 "D?" H 3725 2725 50  0001 C CNN
F 1 "LED" H 3725 2525 50  0001 C CNN
F 2 "" H 3725 2625 50  0000 C CNN
F 3 "" H 3725 2625 50  0000 C CNN
	1    3725 2625
	0    -1   -1   0   
$EndComp
$Comp
L LED D?
U 1 1 5CA4E2FD
P 3575 2650
F 0 "D?" H 3575 2750 50  0001 C CNN
F 1 "LED" H 3575 2550 50  0001 C CNN
F 2 "" H 3575 2650 50  0000 C CNN
F 3 "" H 3575 2650 50  0000 C CNN
	1    3575 2650
	0    -1   -1   0   
$EndComp
Wire Wire Line
	1500 2550 1375 2550
Wire Wire Line
	1375 2550 1375 1150
Wire Wire Line
	1375 1150 4350 1150
Wire Wire Line
	4350 1150 4350 1925
Wire Wire Line
	1500 2650 1375 2650
Wire Wire Line
	1375 2650 1375 3850
Wire Wire Line
	1375 3850 4875 3850
Wire Wire Line
	4875 3850 4875 3575
Wire Wire Line
	4875 3575 4875 2475
Wire Wire Line
	4500 1925 4500 1800
Wire Wire Line
	4500 1800 3225 1800
Wire Wire Line
	3225 1800 3225 2300
Wire Wire Line
	3225 2300 3100 2300
Wire Wire Line
	4575 1925 4575 1725
Wire Wire Line
	4575 1725 3275 1725
Wire Wire Line
	3275 1725 3275 2400
Wire Wire Line
	3275 2400 3100 2400
Wire Wire Line
	4650 1925 4650 1675
Wire Wire Line
	4650 1675 3325 1675
Wire Wire Line
	3325 1675 3325 2500
Wire Wire Line
	3325 2500 3100 2500
Wire Wire Line
	4725 1925 4725 1650
Wire Wire Line
	4725 1650 3375 1650
Wire Wire Line
	3375 1650 3375 2600
Wire Wire Line
	3375 2600 3100 2600
Wire Wire Line
	4800 1925 4800 1600
Wire Wire Line
	4800 1600 3475 1600
Wire Wire Line
	3475 1600 3475 2700
Wire Wire Line
	3475 2700 3100 2700
Wire Wire Line
	3575 1875 4425 1875
Wire Wire Line
	3575 1875 3575 2500
Wire Wire Line
	4350 2475 3725 2475
Wire Wire Line
	4425 2475 4425 2575
Wire Wire Line
	4425 2575 3875 2575
Wire Wire Line
	4500 2475 4500 2700
Wire Wire Line
	4500 2700 4075 2700
Wire Wire Line
	4575 2475 4575 2825
Wire Wire Line
	4575 2825 4275 2825
Wire Wire Line
	4650 2475 4650 2975
Wire Wire Line
	4650 2975 4475 2975
Wire Wire Line
	4725 2475 4725 3075
Wire Wire Line
	4725 3075 4625 3075
Wire Wire Line
	4800 2475 4800 3175
Wire Wire Line
	4800 3475 4800 3575
Wire Wire Line
	4625 3575 4800 3575
Wire Wire Line
	4800 3575 4875 3575
Connection ~ 4875 3575
Wire Wire Line
	4625 3375 4625 3450
Wire Wire Line
	4625 3450 4625 3575
Connection ~ 4800 3575
Wire Wire Line
	4475 3275 4475 3350
Wire Wire Line
	4475 3350 4475 3450
Wire Wire Line
	4475 3450 4625 3450
Connection ~ 4625 3450
Wire Wire Line
	4275 3125 4275 3225
Wire Wire Line
	4275 3225 4275 3350
Wire Wire Line
	4275 3350 4475 3350
Connection ~ 4475 3350
Wire Wire Line
	4075 3000 4075 3125
Wire Wire Line
	4075 3125 4075 3225
Wire Wire Line
	4075 3225 4275 3225
Connection ~ 4275 3225
Wire Wire Line
	3875 2875 3875 2975
Wire Wire Line
	3875 2975 3875 3125
Wire Wire Line
	3875 3125 4075 3125
Connection ~ 4075 3125
Wire Wire Line
	3725 2775 3725 2950
Wire Wire Line
	3725 2950 3725 2975
Wire Wire Line
	3725 2975 3875 2975
Connection ~ 3875 2975
Wire Wire Line
	3575 2800 3575 2950
Wire Wire Line
	3575 2950 3725 2950
Connection ~ 3725 2950
Wire Wire Line
	4425 1875 4425 1925
Text Label 1350 975  0    394  ~ 0
5_Pin_Mode
Text Label 750  4200 0    118  ~ 0
For_3_pin_mode,_Remove_"OE"_and_"SRCLK"_lines
$EndSCHEMATC
