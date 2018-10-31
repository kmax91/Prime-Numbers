#include <iostream>
#include <vector>
#include <chrono>
#include <math.h>

#define END 100000000
//#define TECH1
//#define TECH2
//#define TECH3
#define TECH4

using namespace std;
using namespace chrono;

int main()
{

    int not_prime1;
    int not_prime2;
    int not_prime3;
    int not_prime4;

#ifdef TECH1
    ///Technique 1: Divide by all # from 1->n
    {

        milliseconds start = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
        vector<int> primes;

        //2 is prime
        primes.push_back(2);

        for(int i=2;i<END;i++)
        {
            for(int j=2;j<i;j++){
                if(i%j==0)
                    goto not_prime1;
            }
            primes.push_back(i);
not_prime1:;
        }
        milliseconds end = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
        cout<<(double)(end.count()-start.count())/1000<<std::endl;
    }
#endif

#ifdef TECH2
    ///Technique 2: Divide by all # from 1->sqrt(n)
    {

        milliseconds start = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
        std::vector<int> primes;

        //2 is prime
        primes.push_back(2);

        for(int i=2;i<END;i++)
        {
            for(int j=2;j<sqrt(i);j++){
                if(i%j==0)
                    goto not_prime2;
            }
            primes.push_back(i);
not_prime2:;
        }
        milliseconds end = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
        std::cout<<(double)(end.count()-start.count())/1000<<std::endl;
    }
#endif

#ifdef TECH3
    ///Technique 3: Divide by all primes # from 1->n
    {

        milliseconds start = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
        std::vector<int> primes;

        //2 is prime
        primes.push_back(2);

        for(int i=2;i<END;i++)
        {
            for(auto j:primes){
                if(i%j==0)
                    goto not_prime3;
            }
            primes.push_back(i);
not_prime3:;
        }
        milliseconds end = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
        std::cout<<(double)(end.count()-start.count())/1000<<std::endl;
    }

#endif

#ifdef TECH4
    ///Technique 4: Divide by all prime # from 1->sqrt(n)
    {

        milliseconds start = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
        std::vector<int> primes;

        //2 is prime
        primes.push_back(2);

        for(int i=2;i<END;i++)
        {
            for(auto j:primes){
                if(i%j==0||j>sqrt(i))
                    goto not_prime4;
            }
            primes.push_back(i);
not_prime4:;
        }
        milliseconds end = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
        std::cout<<(double)(end.count()-start.count())/1000<<std::endl;
    }

#endif

}
