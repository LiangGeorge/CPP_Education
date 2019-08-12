#include <iostream>
//For string you could have just included <string>

int do_stuff(std::string name, int age){
	std::cout << "Hello my name is: " << name  << std::endl;
	std::cout << "I am " << age << " years old." << std::endl;
	std::cout << "Thanks for coming to my tutorial! \n";
	return 0;
}

void dont_return(){
	std::cout << "I do not return. \n";
}
int main(){
	
	std::cout << "Demonstrating 5 * 12: " << 5 * 12 << "\n";
	std::cout << "Demonstrating 5 - 12: " << 5 - 12 << "\n";
	std::cout << "Demonstrating 5 + 12: " << 5 + 12 << "\n";
	std::cout << "Demonstrating 5 / 12: " << 5 / 12 << "\n";
	return 0; 
	//NOTE: If user input is separated by space, you can stream to two variables std::cin >> V1 >> v2
	
	//dont_return();
	//return do_stuff(your_name, your_age);
}
