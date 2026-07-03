

int atoi(const char *str){
	int i = 0;
	int sing = 1;
	int res = 0;

	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13)){
        i++;
    }

	if(str[i] == '-' || str[i] == '+'){

		if(str[i] == '-')
			sing = -1;

		i++;
	}

	while(str[i] >= '0' && str[i] <= '9'){		
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sing);
}
