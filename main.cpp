#include <string>
#include <iostream>

#include <boost/optional.hpp>

int main(int argc, char **argv)
{
    auto optionalString = boost::optional<std::string>{};
    std::cout << "1. The optional string is currently: '" << (optionalString ? *optionalString : std::string{"boost::none"}) << "'." << std::endl;
    optionalString = std::string{"some value"};
    std::cout << "2. The optional string is currently: '" << (optionalString ? *optionalString : std::string{"boost::none"}) << "'." << std::endl;

    return 0;
}
