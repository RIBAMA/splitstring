#include <iostream>
#include <algorithm>
#include <vector>
#include <thread>

using namespace std::literals;

int main( void ) {
        auto const chaine { "Une chaine a decouper en different element"s };
        auto const begin { std::begin( chaine ) };
        auto const end { std::end( chaine ) };
        std::vector< std::string > v {};


        {
                auto debMot { begin };
                for ( auto it { begin }; it++ != end; )
                        if( ::isspace( *it ) || it == end ) {
                                std::string const mot { debMot, it};
                                v.push_back( mot );
                                debMot = it + 1;
                        }
        }

        std::cout << "|";
        for (auto const &m : v) {
                std::cout << " " << m << " |";
        }
        std::cout << std::endl;

        return 0;
}
