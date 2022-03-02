module sk(
  input clk,
  input rst,
  input [7:0] sw,
  output [15:0] ledr
);
 reg [14:0] led;
 reg sk_flage;
  always @(posedge clk) 
    begin
    if (rst) 
      begin 
        led <= 0; 
      end
    else 
     begin
        sk_flage <= sw[0]+sw[1];
     end
  end

  assign ledr = {led,sk_flage};
endmodule
