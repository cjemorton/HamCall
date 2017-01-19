#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

int file_exist(const char *filename)
{
  FILE *fp = fopen (filename, "r");
  if (fp!=NULL) fclose (fp);
  return (fp!=NULL);
}

void file_get(const char* url, const char* file_name)
{
  CURL* easyhandle = curl_easy_init();

  curl_easy_setopt( easyhandle, CURLOPT_URL, url ) ;

  FILE* file = fopen( file_name, "w");

  curl_easy_setopt( easyhandle, CURLOPT_WRITEDATA, file) ;

  curl_easy_perform( easyhandle );

  curl_easy_cleanup( easyhandle );

  fclose(file);

}