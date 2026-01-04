# 时钟源100MHz
set_property -dict {IOSTANDARD LVCMOS33 PACKAGE_PIN E3} [get_ports clk_100M]

# 复位按键rst
set_property -dict {IOSTANDARD LVCMOS33 PACKAGE_PIN N5} [get_ports rst]

# Sel的引脚约束（SW33、SW32）
set_property -dict {IOSTANDARD LVCMOS33 PACKAGE_PIN T11} [get_ports Sel[1]]
set_property -dict {IOSTANDARD LVCMOS33 PACKAGE_PIN R11} [get_ports Sel[0]]

# 32位开关SW的引脚约束（复用你的定义）
set_property IOSTANDARD LVCMOS33 [get_ports SW]
set_property PACKAGE_PIN T8 [get_ports {SW[31]}]
set_property PACKAGE_PIN U1 [get_ports {SW[30]}]
set_property PACKAGE_PIN U2 [get_ports {SW[29]}]
set_property PACKAGE_PIN U3 [get_ports {SW[28]}]
set_property PACKAGE_PIN V5 [get_ports {SW[27]}]
set_property PACKAGE_PIN V6 [get_ports {SW[26]}]
set_property PACKAGE_PIN V7 [get_ports {SW[25]}]
set_property PACKAGE_PIN V9 [get_ports {SW[24]}]
set_property PACKAGE_PIN V11 [get_ports {SW[23]}]
set_property PACKAGE_PIN V12 [get_ports {SW[22]}]
set_property PACKAGE_PIN U14 [get_ports {SW[21]}]
set_property PACKAGE_PIN V15 [get_ports {SW[20]}]
set_property PACKAGE_PIN V16 [get_ports {SW[19]}]
set_property PACKAGE_PIN V17 [get_ports {SW[18]}]
set_property PACKAGE_PIN R18 [get_ports {SW[17]}]
set_property PACKAGE_PIN P18 [get_ports {SW[16]}]
set_property PACKAGE_PIN R8 [get_ports {SW[15]}]
set_property PACKAGE_PIN T9 [get_ports {SW[14]}]
set_property PACKAGE_PIN V1 [get_ports {SW[13]}]
set_property PACKAGE_PIN V2 [get_ports {SW[12]}]
set_property PACKAGE_PIN V4 [get_ports {SW[11]}]
set_property PACKAGE_PIN U6 [get_ports {SW[10]}]
set_property PACKAGE_PIN U7 [get_ports {SW[9]}]
set_property PACKAGE_PIN U9 [get_ports {SW[8]}]
set_property PACKAGE_PIN U11 [get_ports {SW[7]}]
set_property PACKAGE_PIN U12 [get_ports {SW[6]}]
set_property PACKAGE_PIN U13 [get_ports {SW[5]}]
set_property PACKAGE_PIN V14 [get_ports {SW[4]}]
set_property PACKAGE_PIN U16 [get_ports {SW[3]}]
set_property PACKAGE_PIN U17 [get_ports {SW[2]}]
set_property PACKAGE_PIN T18 [get_ports {SW[1]}]
set_property PACKAGE_PIN P17 [get_ports {SW[0]}]

# 8位按键BT的完整引脚约束（核心修正：补充BT[3:0]的具体管脚）
set_property IOSTANDARD LVCMOS33 [get_ports BT]
# BT[0]：scortbt（补货/投币）- 对应你原约束中的P5
set_property PACKAGE_PIN D15 [get_ports {BT[0]}]
# BT[1]：get（购买）- 对应你原约束中的G16
set_property PACKAGE_PIN C10 [get_ports {BT[1]}]
# BT[2]：sel（选择商品）- 对应你原约束中的C15
set_property PACKAGE_PIN C11 [get_ports {BT[2]}]
# BT[3]：finish（退币）- 对应你原约束中的H16
set_property PACKAGE_PIN H16 [get_ports {BT[3]}]
# BT[4:6]：预留（若不用可设为NONE，避免约束警告）
set_property PACKAGE_PIN C15 [get_ports {BT[4]}]
set_property PACKAGE_PIN G16 [get_ports {BT[5]}]
set_property PACKAGE_PIN P5 [get_ports {BT[6]}]
# BT[7]：无对应管脚时设为NONE（关键：避免未约束警告）
set_property PACKAGE_PIN NONE [get_ports {BT[7]}]

# 数码管的段选引脚约束（复用你的定义）
set_property IOSTANDARD LVCMOS33 [get_ports SEG]
set_property PACKAGE_PIN E2 [get_ports {SEG[7]}]
set_property PACKAGE_PIN A3 [get_ports {SEG[6]}]
set_property PACKAGE_PIN B1 [get_ports {SEG[5]}]
set_property PACKAGE_PIN E1 [get_ports {SEG[4]}]
set_property PACKAGE_PIN F1 [get_ports {SEG[3]}]
set_property PACKAGE_PIN D2 [get_ports {SEG[2]}]
set_property PACKAGE_PIN B3 [get_ports {SEG[1]}]
set_property PACKAGE_PIN C1 [get_ports {SEG[0]}]

# 数码管的位选引脚约束（复用你的定义）
set_property IOSTANDARD LVCMOS33 [get_ports AN]
set_property PACKAGE_PIN G1 [get_ports {AN[7]}]
set_property PACKAGE_PIN B2 [get_ports {AN[6]}]
set_property PACKAGE_PIN A1 [get_ports {AN[5]}]
set_property PACKAGE_PIN B4 [get_ports {AN[4]}]
set_property PACKAGE_PIN A4 [get_ports {AN[3]}]
set_property PACKAGE_PIN A5 [get_ports {AN[2]}]
set_property PACKAGE_PIN B6 [get_ports {AN[1]}]
set_property PACKAGE_PIN A6 [get_ports {AN[0]}]

# 解决时钟约束警告（你原注释中提到的BUFG警告）
set_property CLOCK_DEDICATED_ROUTE FALSE [get_ports clk_100M]