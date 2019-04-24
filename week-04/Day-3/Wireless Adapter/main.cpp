#include <iostream>
#include "WirelessAdapter.h"


int main() {
    WirelessAdapter adapter("da4c32fb21", USB_TYPE_2, 100);
    adapter.info();
    return 0;
}