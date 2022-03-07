module light(
input clk,
input rst_n,

output reg [15:0] ledout);
reg [3:0] cnt;
reg en;

always@ ( posedge clk or negedge rst_n)
begin 
if(rst_n == 0)
  begin
  ledout <= 16'd0;
  cnt <= 0;
  en <= 0;
  end
else if (en == 1)
 
       begin
         if (ledout == 0)
           ledout <= ledout + 1;
         else 
           if (cnt <  4'd14 )
            begin
            ledout <= ledout << 1'b1 ;
            cnt <= cnt +1;
            end
           else
            begin
            ledout <= 16'd1;
            cnt <= 0  ;
            end
       end
else begin
     ledout <= 0;
     cnt <= 0;
     en <= 1;
     end
end

endmodule
