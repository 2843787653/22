module top(
input clk,
input rst,

output [15:0] ledr);
light light_inst(
.clk(clk),
.rst_n(rst),

.ledout(ledr)
);


endmodule
