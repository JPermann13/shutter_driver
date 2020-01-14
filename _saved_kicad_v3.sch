EESchema Schematic File Version 4
LIBS:_saved_kicad_v3-cache
EELAYER 29 0
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
L power:+24V #PWR?
U 1 1 5E019029
P 900 900
F 0 "#PWR?" H 900 750 50  0001 C CNN
F 1 "+24V" H 915 1073 50  0000 C CNN
F 2 "" H 900 900 50  0001 C CNN
F 3 "" H 900 900 50  0001 C CNN
	1    900  900 
	-1   0    0    1   
$EndComp
$Comp
L power:+5V #PWR?
U 1 1 5E019059
P 1300 900
F 0 "#PWR?" H 1300 750 50  0001 C CNN
F 1 "+5V" H 1315 1073 50  0000 C CNN
F 2 "" H 1300 900 50  0001 C CNN
F 3 "" H 1300 900 50  0001 C CNN
	1    1300 900 
	-1   0    0    1   
$EndComp
$Comp
L Device:C C1
U 1 1 5E019074
P 1600 2150
F 0 "C1" H 1715 2196 50  0000 L CNN
F 1 "4400u" H 1715 2105 50  0000 L CNN
F 2 "" H 1638 2000 50  0001 C CNN
F 3 "~" H 1600 2150 50  0001 C CNN
	1    1600 2150
	1    0    0    -1  
$EndComp
$Comp
L Device:R_US R3
U 1 1 5E019A06
P 3000 1100
F 0 "R3" H 3068 1146 50  0000 L CNN
F 1 "10K" H 3068 1055 50  0000 L CNN
F 2 "" V 3040 1090 50  0001 C CNN
F 3 "~" H 3000 1100 50  0001 C CNN
	1    3000 1100
	1    0    0    -1  
$EndComp
$Comp
L power:+24V #PWR?
U 1 1 5E019B92
P 1050 2000
F 0 "#PWR?" H 1050 1850 50  0001 C CNN
F 1 "+24V" H 1065 2173 50  0000 C CNN
F 2 "" H 1050 2000 50  0001 C CNN
F 3 "" H 1050 2000 50  0001 C CNN
	1    1050 2000
	0    -1   -1   0   
$EndComp
Wire Wire Line
	1050 2000 1200 2000
$Comp
L power:GND #PWR?
U 1 1 5E019BD2
P 1600 2300
F 0 "#PWR?" H 1600 2050 50  0001 C CNN
F 1 "GND" H 1605 2127 50  0000 C CNN
F 2 "" H 1600 2300 50  0001 C CNN
F 3 "" H 1600 2300 50  0001 C CNN
	1    1600 2300
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5E019C13
P 1700 900
F 0 "#PWR?" H 1700 650 50  0001 C CNN
F 1 "GND" H 1705 727 50  0000 C CNN
F 2 "" H 1700 900 50  0001 C CNN
F 3 "" H 1700 900 50  0001 C CNN
	1    1700 900 
	1    0    0    -1  
$EndComp
$Comp
L Device:Fuse F1
U 1 1 5E019CEB
P 2750 2000
F 0 "F1" V 2810 1967 50  0000 L CNN
F 1 "Fuse" H 2810 1955 50  0001 L CNN
F 2 "" V 2680 2000 50  0001 C CNN
F 3 "~" H 2750 2000 50  0001 C CNN
	1    2750 2000
	0    -1   -1   0   
$EndComp
$Comp
L Transistor_BJT:2N2219 Q3
U 1 1 5E019F47
P 2000 2700
F 0 "Q3" H 1800 2650 50  0000 L CNN
F 1 "2N2219" H 1800 2550 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-39-3" H 2200 2625 50  0001 L CIN
F 3 "http://www.onsemi.com/pub_link/Collateral/2N2219-D.PDF" H 2000 2700 50  0001 L CNN
	1    2000 2700
	1    0    0    -1  
$EndComp
$Comp
L Device:Q_PMOS_GDS Q1
U 1 1 5E01A297
P 2300 2100
F 0 "Q1" V 2643 2100 50  0000 C CNN
F 1 "FQP17P06" V 2552 2100 50  0000 C CNN
F 2 "" H 2500 2200 50  0001 C CNN
F 3 "~" H 2300 2100 50  0001 C CNN
	1    2300 2100
	0    1    -1   0   
$EndComp
$Comp
L power:+24V #PWR?
U 1 1 5E01A4B4
P 2300 2600
F 0 "#PWR?" H 2300 2450 50  0001 C CNN
F 1 "+24V" H 2315 2773 50  0000 C CNN
F 2 "" H 2300 2600 50  0001 C CNN
F 3 "" H 2300 2600 50  0001 C CNN
	1    2300 2600
	-1   0    0    1   
$EndComp
$Comp
L Device:Q_PMOS_GDS Q2
U 1 1 5E01A8DD
P 2900 1450
F 0 "Q2" H 3106 1404 50  0000 L CNN
F 1 "FQP17P06" H 3106 1495 50  0000 L CNN
F 2 "" H 3100 1550 50  0001 C CNN
F 3 "~" H 2900 1450 50  0001 C CNN
	1    2900 1450
	1    0    0    1   
$EndComp
Wire Wire Line
	3000 950  3000 900 
$Comp
L power:+5V #PWR?
U 1 1 5E01ADA4
P 3000 900
F 0 "#PWR?" H 3000 750 50  0001 C CNN
F 1 "+5V" H 3015 1073 50  0000 C CNN
F 2 "" H 3000 900 50  0001 C CNN
F 3 "" H 3000 900 50  0001 C CNN
	1    3000 900 
	1    0    0    -1  
$EndComp
$Comp
L Device:D D2
U 1 1 5E01AE6B
P 3000 2400
F 0 "D2" V 2954 2479 50  0000 L CNN
F 1 "N4001" V 3045 2479 50  0000 L CNN
F 2 "" H 3000 2400 50  0001 C CNN
F 3 "~" H 3000 2400 50  0001 C CNN
	1    3000 2400
	0    1    1    0   
$EndComp
Wire Wire Line
	2900 2000 3000 2000
Wire Wire Line
	3000 2000 3000 2250
Wire Wire Line
	2500 2000 2600 2000
Text Label 3250 2250 0    50   ~ 0
Shutter_High
$Comp
L power:GND #PWR?
U 1 1 5E01B156
P 3000 2550
F 0 "#PWR?" H 3000 2300 50  0001 C CNN
F 1 "GND" H 3005 2377 50  0000 C CNN
F 2 "" H 3000 2550 50  0001 C CNN
F 3 "" H 3000 2550 50  0001 C CNN
	1    3000 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	1600 2000 1500 2000
Wire Wire Line
	2100 2300 2300 2300
Connection ~ 2300 2300
Wire Wire Line
	1600 2000 2100 2000
Connection ~ 1600 2000
$Comp
L Device:R_US R1
U 1 1 5E01996E
P 1350 2000
F 0 "R1" V 1418 1967 50  0000 L CNN
F 1 "50" V 1261 1943 50  0000 L CNN
F 2 "" V 1390 1990 50  0001 C CNN
F 3 "~" H 1350 2000 50  0001 C CNN
	1    1350 2000
	0    -1   -1   0   
$EndComp
$Comp
L Device:D D1
U 1 1 5E02F18B
P 3000 1800
F 0 "D1" V 3046 1721 50  0000 R CNN
F 1 "N4001" V 2955 1721 50  0000 R CNN
F 2 "" H 3000 1800 50  0001 C CNN
F 3 "~" H 3000 1800 50  0001 C CNN
	1    3000 1800
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3000 1950 3000 2000
Connection ~ 3000 2000
$Comp
L power:PWR_FLAG #FLG?
U 1 1 5E034339
P 900 900
F 0 "#FLG?" H 900 975 50  0001 C CNN
F 1 "PWR_FLAG" H 900 1073 50  0000 C CNN
F 2 "" H 900 900 50  0001 C CNN
F 3 "~" H 900 900 50  0001 C CNN
	1    900  900 
	1    0    0    -1  
$EndComp
$Comp
L power:PWR_FLAG #FLG?
U 1 1 5E03529A
P 1700 900
F 0 "#FLG?" H 1700 975 50  0001 C CNN
F 1 "PWR_FLAG" H 1700 1073 50  0000 C CNN
F 2 "" H 1700 900 50  0001 C CNN
F 3 "~" H 1700 900 50  0001 C CNN
	1    1700 900 
	1    0    0    -1  
$EndComp
$Comp
L power:PWR_FLAG #FLG?
U 1 1 5E0368D4
P 1300 900
F 0 "#FLG?" H 1300 975 50  0001 C CNN
F 1 "PWR_FLAG" H 1300 1073 50  0000 C CNN
F 2 "" H 1300 900 50  0001 C CNN
F 3 "~" H 1300 900 50  0001 C CNN
	1    1300 900 
	1    0    0    -1  
$EndComp
$Comp
L Device:R_US R2
U 1 1 5E01A437
P 2300 2450
F 0 "R2" H 2200 2450 50  0000 C CNN
F 1 "10K" H 2178 2536 50  0000 C CNN
F 2 "" V 2340 2440 50  0001 C CNN
F 3 "~" H 2300 2450 50  0001 C CNN
	1    2300 2450
	-1   0    0    1   
$EndComp
Wire Wire Line
	2100 2300 2100 2500
Wire Wire Line
	3250 2250 3000 2250
Connection ~ 3000 2250
Wire Wire Line
	3000 2550 3250 2550
Connection ~ 3000 2550
Text Label 3250 2550 0    50   ~ 0
Shutter_Low
$Comp
L power:GND #PWR?
U 1 1 5E03A4D5
P 2100 2900
F 0 "#PWR?" H 2100 2650 50  0001 C CNN
F 1 "GND" H 2105 2727 50  0000 C CNN
F 2 "" H 2100 2900 50  0001 C CNN
F 3 "" H 2100 2900 50  0001 C CNN
	1    2100 2900
	1    0    0    -1  
$EndComp
Text Label 1650 2700 2    50   ~ 0
En_24
Wire Wire Line
	1800 2700 1650 2700
Wire Wire Line
	2700 1450 2600 1450
Text Label 2600 1450 2    50   ~ 0
En_5V
$Comp
L power:GND #PWR?
U 1 1 5E05EC76
P 8500 700
F 0 "#PWR?" H 8500 450 50  0001 C CNN
F 1 "GND" H 8505 527 50  0000 C CNN
F 2 "" H 8500 700 50  0001 C CNN
F 3 "" H 8500 700 50  0001 C CNN
	1    8500 700 
	-1   0    0    1   
$EndComp
$Comp
L Device:C C2
U 1 1 5E05EF9E
P 8650 1150
F 0 "C2" V 8902 1150 50  0000 C CNN
F 1 "1u" V 8811 1150 50  0000 C CNN
F 2 "" H 8688 1000 50  0001 C CNN
F 3 "~" H 8650 1150 50  0001 C CNN
	1    8650 1150
	0    -1   -1   0   
$EndComp
Connection ~ 8500 1150
Wire Wire Line
	8500 1150 8500 1550
$Comp
L Device:C C3
U 1 1 5E061FD5
P 8650 1550
F 0 "C3" V 8902 1550 50  0000 C CNN
F 1 "1u" V 8811 1550 50  0000 C CNN
F 2 "" H 8688 1400 50  0001 C CNN
F 3 "~" H 8650 1550 50  0001 C CNN
	1    8650 1550
	0    -1   -1   0   
$EndComp
Connection ~ 8500 1550
Wire Wire Line
	8500 1550 8500 1900
Wire Wire Line
	8500 2000 8800 2000
Wire Wire Line
	8800 2000 8800 1550
Connection ~ 8800 1550
Wire Wire Line
	8800 1550 8800 1150
$Comp
L Device:C C4
U 1 1 5E06367D
P 9250 1550
F 0 "C4" H 9365 1596 50  0000 L CNN
F 1 "1u" H 9365 1505 50  0000 L CNN
F 2 "" H 9288 1400 50  0001 C CNN
F 3 "~" H 9250 1550 50  0001 C CNN
	1    9250 1550
	1    0    0    -1  
$EndComp
Wire Wire Line
	9250 800  9250 1400
Wire Wire Line
	9250 1700 9250 2100
Wire Wire Line
	8500 700  8500 800 
$Comp
L power:+5V #PWR?
U 1 1 5E06612B
P 8900 1550
F 0 "#PWR?" H 8900 1400 50  0001 C CNN
F 1 "+5V" V 8915 1723 50  0000 C CNN
F 2 "" H 8900 1550 50  0001 C CNN
F 3 "" H 8900 1550 50  0001 C CNN
	1    8900 1550
	0    1    1    0   
$EndComp
Wire Wire Line
	8500 800  9250 800 
Connection ~ 8500 800 
Wire Wire Line
	8500 800  8500 1150
Wire Wire Line
	8500 2100 9250 2100
$Comp
L Connector:Conn_01x05_Male J?
U 1 1 5E068A81
P 5750 3100
F 0 "J?" H 5858 3481 50  0000 C CNN
F 1 "Conn_01x05_Male" H 5858 3390 50  0000 C CNN
F 2 "" H 5750 3100 50  0001 C CNN
F 3 "~" H 5750 3100 50  0001 C CNN
	1    5750 3100
	1    0    0    -1  
$EndComp
Wire Wire Line
	5950 2900 7000 2900
Wire Wire Line
	7000 2900 7000 3200
Wire Wire Line
	7000 3200 7400 3200
Wire Wire Line
	5950 3000 6900 3000
Wire Wire Line
	6900 3000 6900 3300
Wire Wire Line
	6900 3300 7400 3300
Wire Wire Line
	5950 3100 6800 3100
Wire Wire Line
	6800 3100 6800 3500
Wire Wire Line
	5950 3200 6700 3200
Wire Wire Line
	6700 3200 6700 3500
$Comp
L power:GND #PWR?
U 1 1 5E078036
P 6700 3500
F 0 "#PWR?" H 6700 3250 50  0001 C CNN
F 1 "GND" H 6705 3327 50  0000 C CNN
F 2 "" H 6700 3500 50  0001 C CNN
F 3 "" H 6700 3500 50  0001 C CNN
	1    6700 3500
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR?
U 1 1 5E07836B
P 6400 3300
F 0 "#PWR?" H 6400 3150 50  0001 C CNN
F 1 "+5V" V 6415 3428 50  0000 L CNN
F 2 "" H 6400 3300 50  0001 C CNN
F 3 "" H 6400 3300 50  0001 C CNN
	1    6400 3300
	0    1    1    0   
$EndComp
Wire Wire Line
	6400 3300 5950 3300
Wire Wire Line
	8900 1550 8800 1550
Text Label 7150 1900 2    50   ~ 0
En_5V
Wire Wire Line
	7400 1900 7150 1900
Wire Wire Line
	7400 2000 7150 2000
Text Label 7150 2000 2    50   ~ 0
Open_Ind
Wire Wire Line
	7400 2100 7150 2100
Text Label 7150 2100 2    50   ~ 0
En_24V
Wire Wire Line
	8500 2450 8650 2450
Text Label 8650 2450 0    50   ~ 0
Green_LED
$Comp
L MCU_Cypress:CY8C4244PVI-442 U?
U 1 1 5E05679C
P 7950 2600
F 0 "U?" H 7950 3565 50  0000 C CNN
F 1 "CY8C4244PVI-442" H 7950 3474 50  0000 C CNN
F 2 "" H 7950 2900 50  0001 C CNN
F 3 "" H 7950 2900 50  0001 C CNN
	1    7950 2600
	1    0    0    -1  
$EndComp
$Comp
L Device:R_US R4
U 1 1 5E1DB34E
P 8650 2550
F 0 "R4" V 8700 2550 50  0000 C CNN
F 1 "470" V 8600 2550 50  0000 C CNN
F 2 "" V 8690 2540 50  0001 C CNN
F 3 "~" H 8650 2550 50  0001 C CNN
	1    8650 2550
	0    -1   -1   0   
$EndComp
Wire Wire Line
	8800 2550 8900 2550
Text Label 8900 2550 0    50   ~ 0
Red_LED
Text Label 8750 2650 0    50   ~ 0
Digital_Control
Wire Wire Line
	9500 2200 9500 3500
Wire Wire Line
	8500 2200 9500 2200
Wire Wire Line
	6800 3500 9500 3500
Wire Wire Line
	8750 2650 8500 2650
Wire Wire Line
	8500 2750 8750 2750
Text Label 8750 2750 0    50   ~ 0
Manual_Close
Wire Wire Line
	8500 2850 8750 2850
Text Label 8750 2850 0    50   ~ 0
Manual_Open
$Comp
L Device:LED_Dual_2pin D?
U 1 1 5E1E60D6
P 4800 1500
F 0 "D?" H 4800 1896 50  0000 C CNN
F 1 "LED_Dual_2pin" H 4800 1805 50  0000 C CNN
F 2 "" H 4800 1500 50  0001 C CNN
F 3 "~" H 4800 1500 50  0001 C CNN
	1    4800 1500
	1    0    0    -1  
$EndComp
Wire Wire Line
	5100 1500 5250 1500
Wire Wire Line
	4500 1500 4350 1500
Text Label 5250 1500 0    50   ~ 0
Green_LED
Text Label 4350 1500 2    50   ~ 0
Red_LED
NoConn ~ 7400 2200
NoConn ~ 7400 2350
NoConn ~ 7400 2450
NoConn ~ 7400 2550
NoConn ~ 7400 2650
NoConn ~ 7400 2750
NoConn ~ 7400 2850
NoConn ~ 7400 3000
NoConn ~ 7400 3100
NoConn ~ 8500 3300
NoConn ~ 8500 3200
NoConn ~ 8500 3100
NoConn ~ 8500 3000
NoConn ~ 8500 2350
$Comp
L Connector:Screw_Terminal_01x03 J1
U 1 1 5E1F8F3F
P 1150 4500
F 0 "J1" V 1200 4250 50  0000 R CNN
F 1 "Power" V 1100 4300 50  0000 R CNN
F 2 "" H 1150 4500 50  0001 C CNN
F 3 "~" H 1150 4500 50  0001 C CNN
	1    1150 4500
	0    -1   -1   0   
$EndComp
$Comp
L power:+24V #PWR?
U 1 1 5E1FB2CB
P 1050 4700
F 0 "#PWR?" H 1050 4550 50  0001 C CNN
F 1 "+24V" H 1065 4873 50  0000 C CNN
F 2 "" H 1050 4700 50  0001 C CNN
F 3 "" H 1050 4700 50  0001 C CNN
	1    1050 4700
	-1   0    0    1   
$EndComp
$Comp
L power:+5V #PWR?
U 1 1 5E1FBC29
P 1250 4700
F 0 "#PWR?" H 1250 4550 50  0001 C CNN
F 1 "+5V" H 1265 4873 50  0000 C CNN
F 2 "" H 1250 4700 50  0001 C CNN
F 3 "" H 1250 4700 50  0001 C CNN
	1    1250 4700
	-1   0    0    1   
$EndComp
Wire Wire Line
	1150 4700 1150 4900
$Comp
L power:GND #PWR?
U 1 1 5E1FD9DF
P 1150 4900
F 0 "#PWR?" H 1150 4650 50  0001 C CNN
F 1 "GND" H 1155 4727 50  0000 C CNN
F 2 "" H 1150 4900 50  0001 C CNN
F 3 "" H 1150 4900 50  0001 C CNN
	1    1150 4900
	1    0    0    -1  
$EndComp
$Comp
L Connector:Screw_Terminal_01x06 J2
U 1 1 5E2036A8
P 1850 4500
F 0 "J2" V 1900 4100 50  0000 R CNN
F 1 "Shutter" V 1800 4100 50  0000 R CNN
F 2 "" H 1850 4500 50  0001 C CNN
F 3 "~" H 1850 4500 50  0001 C CNN
	1    1850 4500
	0    -1   -1   0   
$EndComp
Text Notes 1650 4450 1    50   ~ 0
Shutter_Red
Text Notes 1750 4450 1    50   ~ 0
Shutter_Black
Text Notes 1850 4450 1    50   ~ 0
Shutter_Violet
Text Notes 1950 4450 1    50   ~ 0
Shutter_Blue
Text Notes 2050 4450 1    50   ~ 0
Shutter_Yellow
Text Notes 2150 4450 1    50   ~ 0
Shutter_Orange\n
NoConn ~ 2150 4700
Wire Wire Line
	1650 4700 1650 5000
Text Label 1650 5000 3    50   ~ 0
Shutter_High
Wire Wire Line
	1750 4700 1750 5000
Text Label 1750 5000 3    50   ~ 0
Shutter_Low
Wire Wire Line
	1850 4700 1850 5000
Wire Wire Line
	2050 4700 2050 5000
Text Label 2050 5000 3    50   ~ 0
Open_Ind
$Comp
L power:GND #PWR?
U 1 1 5E20E723
P 1950 5300
F 0 "#PWR?" H 1950 5050 50  0001 C CNN
F 1 "GND" H 1955 5127 50  0000 C CNN
F 2 "" H 1950 5300 50  0001 C CNN
F 3 "" H 1950 5300 50  0001 C CNN
	1    1950 5300
	1    0    0    -1  
$EndComp
Wire Wire Line
	1950 4700 1950 5300
$Comp
L power:+5V #PWR?
U 1 1 5E2156B1
P 1850 5000
F 0 "#PWR?" H 1850 4850 50  0001 C CNN
F 1 "+5V" H 1865 5173 50  0000 C CNN
F 2 "" H 1850 5000 50  0001 C CNN
F 3 "" H 1850 5000 50  0001 C CNN
	1    1850 5000
	-1   0    0    1   
$EndComp
$Comp
L Connector:Screw_Terminal_01x02 J3
U 1 1 5E2187B2
P 2600 4500
F 0 "J3" V 2650 4300 50  0000 R CNN
F 1 "Control" V 2550 4300 50  0000 R CNN
F 2 "" H 2600 4500 50  0001 C CNN
F 3 "~" H 2600 4500 50  0001 C CNN
	1    2600 4500
	0    -1   -1   0   
$EndComp
Wire Wire Line
	2600 4700 2600 5000
Wire Wire Line
	2700 5000 2700 4700
Text Label 2600 5000 3    50   ~ 0
Digital_Control
$Comp
L power:GND #PWR?
U 1 1 5E21AE43
P 2700 5000
F 0 "#PWR?" H 2700 4750 50  0001 C CNN
F 1 "GND" H 2705 4827 50  0000 C CNN
F 2 "" H 2700 5000 50  0001 C CNN
F 3 "" H 2700 5000 50  0001 C CNN
	1    2700 5000
	1    0    0    -1  
$EndComp
$Comp
L Connector:Screw_Terminal_01x02 J4
U 1 1 5E21B0D4
P 3150 4500
F 0 "J4" V 3200 4300 50  0000 R CNN
F 1 "LED" V 3100 4300 50  0000 R CNN
F 2 "" H 3150 4500 50  0001 C CNN
F 3 "~" H 3150 4500 50  0001 C CNN
	1    3150 4500
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3150 4700 3150 5000
Wire Wire Line
	3250 5000 3250 4700
Text Label 3150 5000 3    50   ~ 0
Red_LED
Text Label 3250 5000 3    50   ~ 0
Green_LED
$Comp
L Connector:Screw_Terminal_01x03 J5
U 1 1 5E2218A7
P 3650 4500
F 0 "J5" V 3700 4250 50  0000 R CNN
F 1 "Manual_Control" V 3600 4300 50  0000 R CNN
F 2 "" H 3650 4500 50  0001 C CNN
F 3 "~" H 3650 4500 50  0001 C CNN
	1    3650 4500
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3750 5000 3750 4700
Wire Wire Line
	3550 4700 3550 5000
Text Label 3550 5000 3    50   ~ 0
Manual_Open
$Comp
L power:+5V #PWR?
U 1 1 5E2286AB
P 3650 4800
F 0 "#PWR?" H 3650 4650 50  0001 C CNN
F 1 "+5V" H 3665 4973 50  0000 C CNN
F 2 "" H 3650 4800 50  0001 C CNN
F 3 "" H 3650 4800 50  0001 C CNN
	1    3650 4800
	-1   0    0    1   
$EndComp
Text Label 3750 5000 3    50   ~ 0
Manual_Close
Wire Wire Line
	3650 4800 3650 4700
$EndSCHEMATC
