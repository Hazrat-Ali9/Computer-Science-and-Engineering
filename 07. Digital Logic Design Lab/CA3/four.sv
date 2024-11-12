`timescale 1ns/1ns

/*module mux4to1 (input [3:0]a,[1:0]s, output w);

    assign #59 w = (s == 2'b00) ? a[3] :
                   (s == 2'b01) ? a[2] :
                   (s == 2'b10) ? a[1] :
                   (s == 2'b11) ? a[0] : 1'bx;

endmodule

module mux16to1 (input [15:0]a,[3:0]s, output w);

    wire [3:0]o;

    mux4to1 m1(a[15:12],s[1:0],o[3]),
            m2(a[11:8],s[1:0],o[2]),
            m3(a[7:4],s[1:0],o[1]),
            m4(a[3:0],s[1:0],o[0]),
            m5(o,s[3:2],w);

endmodule*/

module TMA (input [1:0]a,[1:0]b,ci, output [1:0]s,co);

    wire [3:0]select;
    assign select = {a[1],a[0],b[1],b[0]};
    
    assign #118 s[1] = (select == 4'b0000) ? 0 :
                       (select == 4'b0001) ? ci :
                       (select == 4'b0010) ? 1 :
                       (select == 4'b0011) ? ~ci :
                       (select == 4'b0100) ? ci :
                       (select == 4'b0101) ? 1 :
                       (select == 4'b0110) ? ~ci :
                       (select == 4'b0111) ? 0 :
                       (select == 4'b1000) ? 1 :
                       (select == 4'b1001) ? ~ci :
                       (select == 4'b1010) ? 0 :
                       (select == 4'b1011) ? ci :
                       (select == 4'b1100) ? ~ci :
                       (select == 4'b1101) ? 0 :
                       (select == 4'b1110) ? ci :
                       (select == 4'b1111) ? 1 : 1'bx;

    assign #118 s[0] = (select == 4'b0000) ? ci :
                       (select == 4'b0001) ? ~ci :
                       (select == 4'b0010) ? ci :
                       (select == 4'b0011) ? ~ci :
                       (select == 4'b0100) ? ~ci :
                       (select == 4'b0101) ? ci :
                       (select == 4'b0110) ? ~ci :
                       (select == 4'b0111) ? ci :
                       (select == 4'b1000) ? ci :
                       (select == 4'b1001) ? ~ci :
                       (select == 4'b1010) ? ci :
                       (select == 4'b1011) ? ~ci :
                       (select == 4'b1100) ? ~ci :
                       (select == 4'b1101) ? ci :
                       (select == 4'b1110) ? ~ci :
                       (select == 4'b1111) ? ci : 1'bx;

    assign #118 co  =  (select == 4'b0000) ? 0 :
                       (select == 4'b0001) ? 0 :
                       (select == 4'b0010) ? 0 :
                       (select == 4'b0011) ? ci :
                       (select == 4'b0100) ? 0 :
                       (select == 4'b0101) ? 0 :
                       (select == 4'b0110) ? ci :
                       (select == 4'b0111) ? 1 :
                       (select == 4'b1000) ? 0 :
                       (select == 4'b1001) ? ci :
                       (select == 4'b1010) ? 1 :
                       (select == 4'b1011) ? 1 :
                       (select == 4'b1100) ? ci :
                       (select == 4'b1101) ? 1 :
                       (select == 4'b1110) ? 1 :
                       (select == 4'b1111) ? 1 : 1'bx;

endmodule

module NMA #(parameter n = 2) (input [n-1:0]a,[n-1:0]b,ci , output [n-1:0]s,co);

    wire carry[n/2:0];
    assign carry[0] = ci;
    assign co = carry[n/2];
    genvar i;

    generate
        for (i = 0 ; i < n/2 ; i = i + 1) begin : TMAgates
            TMA XX (a[(2*i)+1:2*i],b[(2*i)+1:2*i],carry[i],s[(2*i)+1:2*i],carry[i+1]);
        end
    endgenerate
    
endmodule

module NMA_test ();

    wire co;
    reg [7:0]a;
    reg [7:0]b;
    wire [7:0]s;
    reg ci;
    NMA #8 test (a,b,ci,s,co);

	initial begin
    
    #500
    a = 8'b00000000;
    b = 8'b00000000;
    ci = 1'b0;

    #500
    a = 8'b10000000;
    b = 8'b00000001;
    ci = 1'b1;

    #500
    a = 8'b00000000;
    b = 8'b00000000;
    ci = 1'b0;

    #500
    a = 8'b10000000;
    b = 8'b10000000;
    ci = 1'b0;

    #500
    a = 8'b00000000;
    b = 8'b00000000;
    ci = 1'b1;

    #500 $stop;

	end
    
endmodule