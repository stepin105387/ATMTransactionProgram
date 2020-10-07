/**
* @file atm.h
*
*/
#ifndef __ATM_H__
#define __ATM_H__

/**
* Identifies whether given number is prime or not
* @param[in] number for which prime or not has to be found
* @return True(1)for prime number else return False(0)
* @note Returns 0 for negative values
*/

int name(char NAME[10]);
int pin(char PIN[10]);
int otp(char OTP[10]);
int selectoption(int option);
int accounttype(char TYPE[10]);
int withdraw(unsigned long withdraw);
int deposit(unsigned long deposit);
int anothertransaction(char transaction);


#endif /* #ifndef __PRIME_H__ */
