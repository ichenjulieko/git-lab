#include <iostream>
 
int main(int argc, char *argv[]) {

	for(unsigned int i = 0; i < 100; i++) {
		if( i % 3 == 0)
			std::cout << i << ": " << "Fizz" << std::endl;
	}
	
	return(0);
}

  for(unsigned int i = 0; i < 100; i++) {
    if(i%5 != 0)
      std::cout << "Buzz" << std::endl;
  }
  return(0);
}

