#include <unistd.h>


int	main (int argc, char** argv){	

	if(argc != 2 ){
		write(1, "e\n",2);
		return(0);
	}

	else{

	

		
		int i;

		i = 0;
		
		while(argv[1][i] != '\0')
			i++;
			

		while(i >= 0){

			if((argv[1][i] >= 'a' && argv[1][i] <= 'z')){

				if(argv[1][i] == 'e'){

					write(1, "e\n",2);
					return (0);
				}
			}		
			i--;
		}

	}
	write(1, "\n",1);

	return(0);

	
}


