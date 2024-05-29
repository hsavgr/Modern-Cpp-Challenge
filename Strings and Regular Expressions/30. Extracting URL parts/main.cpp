#include <iostream>
#include <string>
#include <regex>

void urlExtractor(std::string url)
{
    std::string protocol, domain, port, path, query, fragment;

    std::regex urlRegex("^((http[s]?|ftp):\\/)?\\/?([^:\\/\\s]+)(:([^\\/]*))?((\\/\\w+)*\\/)([\\w\\-\\.]+[^#?\\s]+)(\\?([^#]*))?(#(.*))?$");
    std::smatch sm;
    std::regex_match(url, sm, urlRegex);

    //    for (int i = 0; i < cm.size(); ++i)
    //    { // recognize regex index
    //        std::cout << std::endl;
    //        std::cout << i << "_" << cm[i];
    //    }

    protocol = sm[2].str();
    domain = sm[3].str();
    port = sm[5].str();
    path = sm[6].str() + sm[8].str();
    query = sm[10].str();
    fragment = sm[12].str();

    std::cout << "url protocol is " << protocol;
    std::cout << "\ndomain protocol is " << domain;
    std::cout << "\nport protocol is " << port;
    std::cout << "\npath protocol is " << path;
    std::cout << "\nquery protocol is " << query;
    std::cout << "\nfragment protocol is " << fragment;

}

int main()
{
    std::string url{"https://bbc.com:80/en/index.html?lite=true#ui"};

    urlExtractor(url);

    return 0;
}
