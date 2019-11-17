#include "main.h"
#include <iostream>
#include <memory>
#include <vector>

class Test {
private:
	int data;
public:
	Test() : data{ 0 } { std::cout << "\tTest constructor (" << data << ")" << std::endl; }
	Test(int data) : data{ data } { std::cout << "\tTest constructor (" << data << ")" << std::endl; }
	int get_data() const { return data; }
	~Test() { std::cout << "\tTest destructor (" << data << ")" << std::endl; }
};

// Function prototypes
std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();
void fill(std::vector<std::shared_ptr<Test>>& vec, int num);
void display(const std::vector<std::shared_ptr<Test>>& vec);

int main() {
	std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
	vec_ptr = make();
	std::cout << "How many data points do you want to enter: ";
	int num;
	std::cin >> num;
	fill(*vec_ptr, num);
	display(*vec_ptr);
	return 0;
}

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make()
{
	return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

void fill(std::vector<std::shared_ptr<Test>>& vec, int num)
{
	int userNum{};
	for (size_t i = 0; i < num; i++)
	{		
		std::cout << "Please enter a whole number: ";
		std::cin >> userNum;	
		vec.push_back(std::make_shared<Test>(userNum));
	}
}

void display(const std::vector<std::shared_ptr<Test>>& vec)
{
	for (auto &ptr : vec)
	{		
		std::cout << ptr->get_data() << "\n";
	}
}



