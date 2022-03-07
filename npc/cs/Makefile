export PRJ_PATH=$(shell pwd)
export DESIGN=top



sim:
	verilator -Wno-fatal top.v sim_main.cpp --top-module $(DESIGN) --cc --trace --exe
	make -C obj_dir -f V$(DESIGN).mk V$(DESIGN)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
rum:
	./obj_dir/V$(DESIGN)

wave:	
	gtkwave wave.vcd&
clean:
	@rm -rf obj_dir wave.vcd
 

