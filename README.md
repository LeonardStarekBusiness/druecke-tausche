_This project has been created as part of the 42 curriculum by lstarek_

    DESCRIPTION
You enter a list of numbers which go into STACK A.  
The goal is to SORT this list using only limited instructions stated in the subject.  
  
I used the following logic:  
These actions / functions build upon each other:  
  
  
| PUSH | POP |
| ---- | --- |
(LOW LEVEL INSTRUCTIONS)  
  
| SWAP | TRANSFER | RORATE | REVERSE ROTATE |
| ---- | --- | ---- | --- |
(4 BASIC INSTRUCTIONS)  
  
  

| SA | SB | SS | PA | PB | RA | RB | RR | RRA | RRB | RRR |
| ---- | --- | ---- | --- | ---- | --- | ---- | --- | ---- | --- | ---- |
| Swap A | Swap B | Swap A & B | Transfer B->A | Transfer A->B | Rotate A | Rotate B | Rotate A&B | ReverseRotate A | ReverseRotate B | RR A&B |
(11 BASIC MOVES, these are the moves stated in the subject)  

    INSTRUCTIONS
Makefile is present.  
./push_swap (args)  
  
The program will output only the instructions, not the finished product.  
Enable the VERBOSE switch in the .h file to see the moves in action.  
(The subject does not allow to print the final list, which is why you have to enable it manually.)  
  
    RESOURCES
I know what a stack is. It was revealed to me in school.  
Wikipedia article on "stack" was consulted (found in subject).  
My Libft, including printf, is used.  