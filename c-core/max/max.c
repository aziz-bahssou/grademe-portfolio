int max(int *tab, unsigned int len){
	
	if(len < 1)
		return(0);
	
	int i = (len - 1);
	int max = tab[i];


	while(i >= 0){
		
		if(max < tab[i])
			max = tab[i];
		i--;
	}
	return (max);
}
