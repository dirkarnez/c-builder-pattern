c-builder-pattern
=================
The best example is from libcurl:
```c
int main(void)
{
  CURL *curl = curl_easy_init();
  if(curl) {
    CURLcode res;
    curl_easy_setopt(curl, CURLOPT_URL, "https://example.com");
    /* Do not do the transfer - only connect to host */
    curl_easy_setopt(curl, CURLOPT_CONNECT_ONLY, 1L);
    res = curl_easy_perform(curl);

    if(res == CURLE_OK) {
      long sockfd;
      size_t sent;
      /* Extract the socket from the curl handle - we need it for waiting. */
      res = curl_easy_getinfo(curl, CURLINFO_ACTIVESOCKET, &sockfd);

      /* send data */
      res = curl_easy_send(curl, "hello", 5, &sent);
    }
  }
}
```
