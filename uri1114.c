#include<stdio.h>

int main()

{
	int password;

	do{
		scanf("%d", &password);

		if( password == 2002 ){
			printf( "Acesso Permitido\n" );
		}else{
			printf( "Senha Invalida\n" );
		}
	}while(password != 2002);
	
	return 0;
} // fim do main