
int valid_base(int base){
	if(base < 2 || base > 16){
		return(0);
	}
	return(1);
}

int get_deget(char c){
	int i;
	if(c >= 'A' && c <= 'Z'){
		i = 0;
		char *base = "0123456789ABCDEF";
		while(base[i]){
			if(c == base[i]){
				return(i);
			}
			i++;
		}
	}
	else{
		i = 0;
		char* base = "0123456789abcdef"; 
		while(base[i]){
			if(c == base[i]){
				return(i);
			}
			i++;
		}
	}
	return(-1);
}
int parse_int_base(const char *str, int base){

	int res = 0;
	int i = 0;
	int sing = 1;

	if(!(valid_base(base))){
		return(0);
	}
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)){
		i++;
	}
	
	if(str[i] == '-' || str[i] == '+'){
		if(str[i] == '-'){
			sing = -1;
		}
		i++;
	}
	
	int digit;

	while((digit = get_deget(str[i])) != -1 && digit < base){
		res = res * base + digit;
		i++;
	}

	return (res * sing);
}
