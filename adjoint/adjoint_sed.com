
 sed 's/call adopen(/call adopen ( mythid,\
     \&           /g
     s/call adclose(/call adclose( mythid,\
     \&           /g
     s/call adread(/call adread ( mythid,\
     \&           /g
     s/call adwrite(/call adwrite( mythid,\
     \&           /g' < tamc_code_ecco_ad.f


