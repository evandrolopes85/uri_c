#include<stdio.h>

int main(){
	int posX;
	int posY;

	while(1){
		scanf("%d %d", &posX, &posY);

		if( ( posX == 0 ) || ( posY == 0 ) ){
			return 0;
		}else {
			if( posX > 0 && posY > 0 )
				printf( "primeiro\n");
			else if ( posX < 0 && posY > 0)
				printf( "segundo\n" );
			else if ( posX < 0 && posY < 0)
				printf( "terceiro\n" );
			else
				printf( "quarto\n" );
		}
	}
		
	return 0;
}