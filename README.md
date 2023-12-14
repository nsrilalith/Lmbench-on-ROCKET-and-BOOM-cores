# lmbench suite on rocket and boom core
# nsrilalith
# Final Project ECE5504 Submission
# Group 8

## Name
custom lmbench suite for calculating bandwidth and latency on RiscV Rocket and Boom Cores

## Description
/lmbenchCode/CustomCode/ :- This path has a makefile, modify the path to your chipyard lib and make it. You should generate a bwidth_read2.riscv file (unless its already there)
The bwidth_read2.c allocates arrays of sizes 4MB, 8MB, 16MB, 32MB and 64MB and then reads it. The hpm.h file monitors how long it takes cpu to read 4MB, 8MB, 16MB, 32MB and 64MB and gives cycles, instruction, cache misses etc.

## Results
If you're looking for result runs;
Look at /Results/output/ . Then choose the config for which you want to see the results I have obtained for. The bwidth_read4.log file have the ouput of bwidth_read4.riscv. And the bwidth_read4.out file will have a dump of all the assembly instructions compiled and executed. It also contains the CPU clock frequency of the simulation so please check that when verifying results.
I have also included an excell sheet with calculated resutls if interested.

## To Run in own environment
If you want to run in your own environment:
You will need chipyard completely setup. You can use my simulator files if possible, but you're better off excecuting the same configurations I have used which are available in configs available in https://code.vt.edu/ece5504_f23/chipyard-clean. Just change the binary to the bwidth_read4.risv you generate.


