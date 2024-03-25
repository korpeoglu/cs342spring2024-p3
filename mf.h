#ifndef _MF_H_
#define _MF_H_

// min and max msg length
#define MINDATALEN 1 // byte
#define MAXDATALEN 4096 // bytes - 4KB

// min and max queue size
#define MINMQSIZE  16 // KB
#define MAXMQSIZE  128 // KB
// MQSIZE should be a multiple of 4KB

// min and max shared memory region size
#define MINSMEMSIZE  20 // 2^20 - 1 MB
#define MAXSMEMSIZE  28 // 2^23 - 8 MB

#define MAXFILENAME 128 // max file or shared memory name

int mf_init();
int mf_destroy();
int mf_connect();
int mf_disconnect();
int mf_create(char *mqname, int mqsize);
int mf_remove(char *mqname);
int mf_open(char *mqname);
int mf_close(int qid);
int mf_send (int qid, void *bufptr, int datalen);
int mf_recv (int qid, void *bufptr, int bufsize);
int mf_print();

#endif



