char	*strcat(char *dst, const char *src){

	int i = 0;
	while(dst[i])
		i++;
	

	int j = 0;

	while(src[j]){
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	
	return (dst);
}
