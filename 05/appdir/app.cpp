#include <iostream>
#include <curl/curl.h>

int main() {
    CURL* curl;
    CURLcode res;
    
    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();
    
    if(curl) {
        // Тестовый URL (httpbin.org - отличный сервис для тестирования HTTP)
        curl_easy_setopt(curl, CURLOPT_URL, "http://httpbin.org/status/200");
        
        // Не получаем тело ответа
        curl_easy_setopt(curl, CURLOPT_NOBODY, 1L);
        
        res = curl_easy_perform(curl);
        
        if(res == CURLE_OK) {
            long http_code = 0;
            curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &http_code);
            std::cout << "GET запрос успешен!" << std::endl;
            std::cout << "Статус ответа: " << http_code << std::endl;
            std::cout << "URL: http://httpbin.org/status/200" << std::endl;
        } else {
            std::cout << "Ошибка запроса: " << curl_easy_strerror(res) << std::endl;
        }
        
        curl_easy_cleanup(curl);
    }
    
    curl_global_cleanup();
    return 0;
}
