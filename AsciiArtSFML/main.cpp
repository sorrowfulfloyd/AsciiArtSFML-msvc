#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
using namespace std;

const double RED = 0.2126;
const double GREEN = 0.7152;
const double BLUE = 0.0722;

int main() {
	string outputPath = "";
	int scaleX;
	string ascii = "@#$=+|:. ";


	cout << "Scale: ";
	cin >> scaleX;

	sf::Image img;
	sf::Image grayimg(img);
	img.loadFromFile("C:/Users/sorrow/Desktop/champ.png");
	int c;

	for (int i = 0; i < img.getSize().x; ++i) {
		for (int j = 0; j < img.getSize().y; ++j) {
			c = img.getPixel(i, j).r * RED + img.getPixel(i, j).g * GREEN + img.getPixel(i, j).b * BLUE;
			grayimg.setPixel(i, j, sf::Color(c, c, c));

		}
	}
	grayimg.saveToFile("C:/Users/sorrow/Desktop/grayimg.jpg");

	return 0;
}