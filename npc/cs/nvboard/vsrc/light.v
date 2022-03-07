module light(
input clk,
input rst_n,

output reg [15:0] ledout);
reg [29:0] cnt;

reg en;


always@ ( posedge clk or negedge rst_n)
begin 
if(rst_n == 1)
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
           if (cnt ==  30'd4999999 )
            begin
            ledout <= ledout << 1'b1 ;
            cnt<= 0;
            
            end
           else
            begin
            
            cnt <= cnt+ 1  ;
            end
       end
else begin
     ledout <= 0;
     cnt <= 0;
     en <= 1;
     end
end

endmodule
