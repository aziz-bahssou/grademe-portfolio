int prefix_span(const char *text, const char *allowed){

	int i = 0;
	int j;
	int sum = 0;

	while(text[i]){
		j = 0;
		while(allowed[j]){
			if(text[i] == allowed[j]){
				sum++;
			}
			j++;
		}
		i++;
	}

	return (sum);
}
