#include <iostream>
using namespace std;

int main()
{
    cout << "Estimate for carpet cleaning service" << endl;

	int number_of_small_rooms{ 0 };
	int number_of_large_rooms{ 0 };
	const float small_room_price{ 25 };
	const float large_room_price{ 35 };
	const float sales_tax{ 0.06 };
	const int days_valid{ 30 };

	cout << "How many small rooms do you need cleaned? ";
	cin >> number_of_small_rooms;
	cout << "How many large rooms do you need cleaned? ";
	cin >> number_of_large_rooms;
	cout << endl;
	cout << "Number of small rooms: "<< number_of_small_rooms << endl;
	cout << "Number of large rooms: " << number_of_large_rooms << endl;
	cout << "Price per small room: " << small_room_price << endl;
	cout << "Price per large room: " << large_room_price << endl;
	cout << "Cost: $ " << (small_room_price * number_of_small_rooms) + (large_room_price * number_of_large_rooms) << endl;
	cout << "Tax: $ " << ((small_room_price * number_of_small_rooms) + (large_room_price * number_of_large_rooms)) * sales_tax << endl;
	cout << "=============================================" << endl;
	cout << "Total: " << ((small_room_price * number_of_small_rooms) + (large_room_price * number_of_large_rooms)) + (((small_room_price * number_of_small_rooms) + (large_room_price * number_of_large_rooms)) * sales_tax) << endl;
	cout << "This esitmate is valid for " << days_valid << " days." << endl;

	return 0;
}

