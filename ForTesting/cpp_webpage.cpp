#include <iostream>
#include <fcgi_stdio>

int main() {
    while (FCGI_Accept() >= 0) {
        // Print HTTP headers
        std::cout << "Content-type: text/html\r\n\r\n";

        // Generate HTML content
        std::cout << "<html><head><title>C++ Web Example</title></head><body>";
        std::cout << "<h1>Hello, this is a C++ web page!</h1>";
        std::cout << "</body></html>";
    }

    return 0;
}
