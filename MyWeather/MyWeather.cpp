#include "pch.h"
#include <iostream>
#include "curl/curl.h"

int main()
{
	printf("Hello world!");
	CURL *curl = curl_easy_init();
	if (curl) {
		CURLcode res;
		curl_easy_setopt(curl, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Gliwice&appid=af84822059c4495720af00937a834639");
		res = curl_easy_perform(curl);
		curl_easy_cleanup(curl);
	}
}

