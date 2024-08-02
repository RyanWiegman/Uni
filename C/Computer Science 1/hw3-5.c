#include <stdio.h>

int main() {

int letter = 65, counter = 0;

	for(letter; letter <= 71; letter++) {
		char midchar = (char)letter;

		for(int x = 2; x <= 4; x++){
			for(int y = 0; y <= 9; y++){
				if( (x != y) ){
					if(midchar == 'A'&& (x == 4 || y == 4))
						continue;
					printf("%d:\t%d %c %d\n", counter, x, midchar, y);
					counter++;
				}
			}
		}



	}


return 0;
}
