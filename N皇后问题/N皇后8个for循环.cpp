#include<iostream> 
#include<string.h>
using namespace std;

bool row[8] = {false};
bool pos_skew[15] = {false};
bool neg_skew[15] = {false};

int main()
{
	int count = 0;
	for (int a = 0; a<8; a++){
		row[a] = true;
		pos_skew[7 + a] = true;
		neg_skew[a] = true;

		for (int b = 0; b<8; b++){
			if (row[b]) continue;
			if (pos_skew[6 + b]) continue;
			if (neg_skew[1 + b]) continue;
			row[b] = true;
			pos_skew[6 + b] = true;
			neg_skew[1 + b] = true;

			for (int c = 0; c<8; c++){
				if (row[c]) continue;
				if (pos_skew[5 + c]) continue;
				if (neg_skew[2 + c]) continue;
				row[c] = true;
				pos_skew[5 + c] = true;
				neg_skew[2 + c] = true;

				for (int d = 0; d<8; d++){
					if (row[d]) continue;
					if (pos_skew[4 + d]) continue;
					if (neg_skew[3 + d]) continue;
					row[d] = true;
					pos_skew[4 + d] = true;
					neg_skew[3 + d] = true;

					for (int e = 0; e<8; e++){
						if (row[e]) continue;
						if (pos_skew[3 + e]) continue;
						if (neg_skew[4 + e]) continue;
						row[e] = true;
						pos_skew[3 + e] = true;
						neg_skew[4 + e] = true;

						for (int f = 0; f<8; f++){
							if (row[f]) continue;
							if (pos_skew[2 + f]) continue;
							if (neg_skew[5 + f]) continue;
							row[f] = true;
							pos_skew[2 + f] = true;
							neg_skew[5 + f] = true;

							for (int g = 0; g<8; g++){
								if (row[g]) continue;
								if (pos_skew[1 + g]) continue;
								if (neg_skew[6 + g]) continue;
								row[g] = true;
								pos_skew[1 + g] = true;
								neg_skew[6 + g] = true;


								for (int h = 0; h<8; h++){
									if (row[h]) continue;
									if (pos_skew[h]) continue;
									if (neg_skew[7 + h]) continue;
									count++;
								}
								row[g] = false;
								pos_skew[1 + g] = false;
								neg_skew[6 + g] = false;
							}
							row[f] = false;
							pos_skew[2 + f] = false;
							neg_skew[5 + f] = false;
						}
						row[e] = false;
						pos_skew[3 + e] = false;
						neg_skew[4 + e] = false;
					}
					row[d] = false;
					pos_skew[4 + d] = false;
					neg_skew[3 + d] = false;
				}
				row[c] = false;
				pos_skew[5 + c] = false;
				neg_skew[2 + c] = false;

			}
			row[b] = false;
			pos_skew[6 + b] = false;
			neg_skew[1 + b] = false;
		}
		row[a] = false;
		pos_skew[7 + a] = false;
		neg_skew[a] = false;
	}
	cout << count;
}