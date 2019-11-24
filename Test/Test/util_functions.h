/*
 * util_functions.h
 *
 * Created: 23.11.2019 14:20:20
 *  Author: oystmol
 */ 


#ifndef UTIL_FUNCTIONS_H_
#define UTIL_FUNCTIONS_H_

uint8_t* hex_decode(const char *in, size_t len,uint8_t *out){
	unsigned int i, t, hn, ln;
	for (t = 0,i = 0; i < len; i+=2,++t) {
		hn = in[i] > '9' ? in[i] - 'A' + 10 : in[i] - '0';
		ln = in[i+1] > '9' ? in[i+1] - 'A' + 10 : in[i+1] - '0';
		out[t] = (hn << 4 ) | ln;
	}
	return out;
}



#endif /* UTIL_FUNCTIONS_H_ */