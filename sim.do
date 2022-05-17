set name TB
 
vlib work
 
vlog "*.v"       
 
vsim -voptargs=+acc work.$name

# Set the window types 
view wave
view structure
view signals
#add wave 
add wave -noupdate -divider {all}
add wave -noupdate -radix unsigned sim:/$name/* 
add wave -noupdate -divider {uut}
add wave -noupdate -radix unsigned sim:/$name/uut/* 
add wave -noupdate -divider {gce}
add wave -noupdate -radix unsigned sim:/$name/uut/gce/* 
add wave -noupdate -divider {btnf_c}
add wave -noupdate -radix unsigned sim:/$name/uut/btnf_c/* 
add wave -noupdate -divider {btnf_u}
add wave -noupdate -radix unsigned sim:/$name/uut/btnf_u/* 
add wave -noupdate -divider {fsm}
add wave -noupdate -radix unsigned sim:/$name/uut/fsm/* 
add wave -noupdate -divider {main}
add wave -noupdate -radix unsigned sim:/$name/uut/main/* 
run -all

#00110110011110010111001001101100
#00110110111110010111001001101100