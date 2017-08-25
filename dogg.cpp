#include <iostream>
using namespace std;

int main() {
/*
	char dogg = 46;
	for (int i = 0; i < 78; i++) {
		cout << dogg << " " << 46+i << endl;
		dogg = dogg + 1;
	}
*/

/*	char snoop[80];
			for (int j = 0; j < 80; j++) {
				snoop[j] = 46 + j;
				cout << snoop[j] << " " << 46 + j << " || ";
				if (j % 10 == 0) {
					cout << "\n";
				}
			}
			cout << " and 32 = space\n\n";
*/
	char message[60];

	for (int i = 0; i < 60; i++)
		message[i] = 32;


		message[0] = 87;
		message[1] = 104;
		message[2] = 97;
		message[3] = 116;
		message[4] = 32;
		message[5] = 97;
		message[6] = 114;
		message[7] = 101;
		message[8] = 32;
		message[9] = 121;
		message[10] = 111;
		message[11] = 117;
		message[12] = 32;
		message[13] = 100;
		message[14] = 111;
		message[15] = 105;
		message[16] = 110;
		message[17] = 103;
		message[18] = 32;
		message[19] = 83;
		message[20] = 78;
		message[21] = 79;
		message[22] = 79;
		message[23] = 80;
		message[24] = 73;
		message[25] = 78;
		message[26] = 71;
		message[27] = 32;
		message[28] = 97;
		message[29] = 114;
		message[30] = 111;
		message[31] = 117;
		message[32] = 110;
		message[33] = 100;
		message[34] = 32;
		message[35] = 105;
		message[36] = 110;
		message[37] = 32;
		message[38] = 109;
		message[39] = 121;
		message[40] = 32;
		message[41] = 104;
		message[42] = 111;
		message[43] = 109;
		message[44] = 101;
		message[45] = 32;
		message[46] = 100;
		message[47] = 105;
		message[48] = 114;
		message[49] = 101;
		message[50] = 99;
		message[51] = 116;
		message[52] = 111;
		message[53] = 114;
		message[54] = 121;
		message[55] = 32;
		message[56] = 68;
		message[57] = 79;
		message[58] = 71;
		message[59] = 71;
		message[60] = 63;

		for (int i = 0; i < 60; i++)
			cout << message[i];
	cout << "\n";
return 0;
}
