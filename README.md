# Homework2
ECE330 Homework2
I'm going to use this for some comments, The transpose code has some commented out code that I tried to do.. I'm sure you can see that I tried some stuff to convert the matrix into a int without changing the template T... I realized that what I was doing was instead casting it as an int which really isn't converting it and then I read the instructions and realized you wanted the entire dataset to be converted... that's when I looked at the template to see that it was defined as a double float. and the change then was to just define it as an int. 
This was actually my first time using computed inputs for a C file so it was rather interesting! 
I first tested the transpose function on its own in both matrix_dynamic and static and found that it worked. 
then I moved it to it's own function to which I had to learn the hard way about computed inputs. 
lastly the headerfile does have some legacy functions that are unused such as matrix mint_print and converter both of these ... didn't work but their calls are no longer used.. I figured I'd keep them in just so you can see my thought proccess, in a workplace or other setting I would tottaly comment them out or remove them entirely. 
I had fun with this assignment! 
