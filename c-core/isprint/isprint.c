int	isprint(int c){

	if(! ((c >= 32 && c < 127) || c == '~')){
		return(0);
	}



	return (1);
}
