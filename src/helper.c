#include "./helper.h"



size_t getIndexOf(const char search[], const char toFind){
	char *e;
	size_t index;
	size_t err;

	e = strchr(search, toFind);
	if(e != NULL){
		err = (size_t)(e-search);
	}else{
		err = sizeof(search);
	}
	return err;
}

int hexToBase64(char hex[], int hexSize, char b64[], int b64Size){
	int leftJustify = hexSize%3;
	if(leftJustify){
		leftJustify = 3-leftJustify;
	}
	char upperHex[hexSize + leftJustify];
	int i = 0;
	if(leftJustify){
		while(i<leftJustify){
			upperHex[i] = "0";
			i++;
		}
	}
	while(hex[i]){
		upperHex[i] = toupper(hex[i]);
		i++;
	}

	for(i=0; i<sizeof(upperHex); i++){
		
	}



}