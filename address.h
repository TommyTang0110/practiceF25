#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

class Address {
private:
    std::string street;
    std::string city;
    std::string state;
    std::string zip;

public:
    Address();
    Address(const std::string& street,
            const std::string& city,
            const std::string& state,
            const std::string& zip);

    void init(const std::string& street,
              const std::string& city,
              const std::string& state,
              const std::string& zip);

    void printAddress() const;

    const std::string& getStreet() const { return street; }
    const std::string& getCity()   const { return city; }
    const std::string& getState()  const { return state; }
    const std::string& getZip()    const { return zip; }
};

#endif
