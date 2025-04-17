#include <iostream>
using namespace std;

int main() {
    int cans_per_pack = 6;
    const double CAN_VOLUME = 0.355;
    double total_volume = cans_per_pack * CAN_VOLUME;

   cout << "A six-pack of 12 cans contains " << total_volume << " liters." << endl;

   const double BOTTLE_VOLUME = 2; // Two-liter bottle

   total_volume += BOTTLE_VOLUME;

   cout << "A six-pack and a two-liter bottle contain " << total_volume << " liters." << endl;
    return 0;
}