// NAMA		: Jericho Nathanael Chrisnanta
// NRP		: 5025221001
// Jurusan	: Teknik Informatika

#include <iostream>
#include <cmath>
using namespace std;

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

int mencari_V0(int input, int loss)
{
	input -= loss;
  	return input;
}

int speed_dgn_loss(int input)
{      
    int loss;
	if (input >= 1 && input <= 10)
    {
        loss = 1;
    }

    else if (input >= 11 && input <= 20)
    {
        loss = 3;
    }

    else if (input >= 21 && input <= 30)
    {
        loss = 5;
    }
    return loss;
}

int main() {
    int input;
    float jarak;
    float KecepatanTangensial;
  	cin >> input;
    jarak = (pow(mencari_V0(input,speed_dgn_loss(input)),2)* sin(SUDUT*3.14159*2/180) / GRAVITASI) - START_PENGUKURAN;
    jarak = round(jarak);
    KecepatanTangensial = sqrt(jarak * GRAVITASI / sin(SUDUT*3.14159*2/180)) + speed_dgn_loss(input);
  	cout << jarak << " " << KecepatanTangensial << endl;
    return 0;
}
