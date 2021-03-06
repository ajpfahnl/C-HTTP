#ifndef commonio_h
#define commonio_h

#include <stdlib.h>
#include <openssl/ssl.h>

extern char * pounds;
struct SSL_objects_struct {
	SSL_CTX * new_context;
	SSL * ssl_client;
	int sockfd;
	X509 * cert;
	X509_NAME * certname;
}; typedef struct SSL_objects_struct SSL_objects;

int openTCP(char * address, int portnum);
SSL_objects * openTLS(char * address, int portnum, int verbose);
int read_wrap(int fildes, void *buf, size_t nbyte, char * msg);
int write_wrap(int fildes, void *buf, size_t nbyte, char * msg);
int SSL_write_wrap(SSL *ssl, const void *buf, int num);
int SSL_read_wrap(SSL *ssl, void *buf, int num);
#endif /* commonio_h */
