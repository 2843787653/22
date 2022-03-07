#include <verilated.h>
#include <Vtop.h>
#include <verilated_vcd_c.h>

vluint64_t main_time = 0;
double sc_time_stamp(){
return main_time;}

int main (int argc,char **argv)
{
 Verilated::commandArgs(argc,argv);
 Verilated::traceEverOn(true);
 VerilatedVcdC* tfp = new VerilatedVcdC;
 Vtop *top=new Vtop("top");

top->rst = 0;
top->clk = 0;
top->trace(tfp,0);
tfp->open("wave.vcd");

while ((main_time < 50)&&(!Verilated::gotFinish()) ) {
if (main_time == 3)
 { top->rst =1;}
  

  
  top->eval();

  tfp->dump(main_time);

  top->clk = !top->clk;
  main_time++;}

  top->final();

 tfp->close();
 delete top;
 return 0;}
