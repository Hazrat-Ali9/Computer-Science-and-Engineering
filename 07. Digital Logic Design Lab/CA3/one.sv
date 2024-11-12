`timescale 1ns/1ns

module TCS (input [1:0]a,[1:0]b,e0,g0 , output reg eq,gt);

    always @ (a,b,e0,g0) begin
        
        #27 eq = (a==b) ? e0 : 0;
        #60 gt = (a==b) ? g0 :(a>b);

    end

endmodule

module TCS_test ();

    reg [1:0]a;
    reg [1:0]b;
    wire eq,gt;
    reg e0,g0;
    integer i,j;
    TCS test (a,b,e0,g0,eq,gt);

	initial begin
    #500
    e0 = 1;
    g0 = 0;
    a = 2'd0;

    for (i = 0; i<4; i = i+1) begin
        j=0;
        b = 2'd0;
        for (j = 0 ; j<4 ; j = j +1 ) begin
            #500 b = b + 2'd1;
        end
        a = a + 2'd1;
    end
    
    #500 $stop;
	end
    
endmodule