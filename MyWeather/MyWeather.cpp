#include "pch.h"
#include <iostream>
#include "curl/curl.h"

int main()
{
	printf("Hello world!");
	CURL *curl = curl_easy_init();
	if (curl) {
		CURLcode res;
		curl_easy_setopt(curl, CURLOPT_URL, "http://example.com");
		res = curl_easy_perform(curl);
		curl_easy_cleanup(curl);
	}
}

