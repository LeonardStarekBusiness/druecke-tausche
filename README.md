_This project has been created as part of the 42 curriculum by lstarek_

    DESCRIPTION
You enter a list of numbers which go into STACK A.  
The goal is to SORT this list using only limited instructions stated in the subject.  
  
I used the following logic:  
These actions / functions build upon each other:  
  
  
PUSH & POP  
(LOW LEVEL INSTRUCTIONS)  
  
SWAP & TRANSFER & RORATE & REVERSE ROTATE  
(4 BASIC INSTRUCTIONS)  
  
SA & SB & SS & PA & PB & RA & RB & RR & RRA & RRB & RRR  
(11 BASIC MOVES, these are the moves stated in the subject)  
  
for 3 or less instructions: "tiny sort" algorithm (best option hardcoded)  
4 - 50: "selection sort" algorithm (ra / rra smallest element up, pb, repeat until a is 3, tinysort, pa everything back at the end)  
50+: "radix sort" algorithm (malloc an index stack, pb if last digit of binary representation is 1, else ra, evaluate next digit, repeat until sorted.)  
bogos binted  
  
    INSTRUCTIONS
Makefile is present.  
./push_swap (args)  
  
The program will output only the instructions, not the finished product.  
  
exists checker on project page:  
run: $ARG="1 2 3 4"; ./push_swap $ARG | ./checker_linux $ARG to see if its the correct output  
alias for short: $ARG="1 2 3 4"; ps  
or "pss" for full instruction list  
or "vpss" for valgrind  
please first verify that the alias is indeed not malicious and indeed working.  
  
    RESOURCES
I know what a stack is. It was revealed to me in school.  
Wikipedia article on "stack" was consulted (found in subject).  
My Libft, including printf, is used.  
People on campus (members of the homo sapiens sapiens species) presented me with algorithms, which I wrote down, and subsequently implemented myself.  