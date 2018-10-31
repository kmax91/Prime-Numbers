# Prime-Numbers  
This repository uses an optimized technique to detemine prime numbers from 1 to n  
I have compared this technique with 3 other techniques and found my technique to be a lot faster than the other 3 techniques  
Technique#1: Determine if a number r is prime by dividing it by all numbers from 2->r  
Technique#2: Determine if a number r is prime by dividing it by all numbers from 2->sqrt(r)  
Technique#3: Determine if a number r is prime by dividing it by all **prime** numbers from 2->r  
Technique#4(My method): Determine if a number r is prime by dividing it by all **prime** numbers from 2->sqrt(r)  

RESULTS for primes from 2-500,000  
  
Tech1: 36.215 sec  
Tech2: 0.148 sec  
Tech3: 11.689 sec  
Tech4: 0.027 sec  
  
RESULTS for primes from 2-50,000,000  
  
Tech2: 111.064 sec  
Tech4: 2.754 sec  
  
RESULTS for primes from 2-500,000,000  
  
Tech4: 28.497 sec  
  
**All tests have been conducted on Dell Inspiron 7000 series (4GB RAM), Intel I5**  
**OS is Ubuntu Xenial (16.04).**  
**Compiled and Run using QT Creator**  

