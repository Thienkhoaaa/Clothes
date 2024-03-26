#include <iostream>
#include <string>

using namespace std;

class Clothes {
	private:
		string clName;
		string clCode;
		string clType;
		double clPrice;
		int clQuantity;
		string clOrigin;
	public:
		Clothes(string code, string name, string type, double price, int quantity, string origin)
			: clName(name), clCode(code), clType(type), clPrice(price), clQuantity(quantity), clOrigin(origin) {}

		void display() {
			cout << "Code: " << clCode << endl;
			cout << "Name: " << clName << endl;
			cout << "Type: " << clType << endl;
			cout << "Price: " << clPrice << "VND" << endl;
			cout << "Quantity: " << clQuantity << endl;
			cout << "Origin: " << clOrigin << endl;
		}
};


int main() {
	Clothes hoodie("H001", "Red Hoodie", "Hoodie", 200000, 24, "China");
	hoodie.display();
}