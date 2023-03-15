
#include <iostream>
#include <fstream>
#include <map>


std::map<std::string, int> getDataBase()
{
    std::map<std::string, int> database;
    std::ifstream data;
    if (data.open("database.csv", std::ios::in))
    {
        std::cout << "Error: file not found" << std::endl;
        return database;
    }
    std::string line;
    int i = 0;
    while (std::getline(data, line))
    {
        std::string first = line.substr(0, line.find(','));
        std::string second = line.substr(line.find(',') + 1, line.size());
        database.insert(std::pair<std::string, int>(first, second));
    }
    data.close();
    return database;
}

void readfile(std::string filename, std::map<std::string, int> database)
{
    std::ifstream file;
    file.open(filename, std::ios::in);
    std::string line;
    while (std::getline(file, line))
    {
        std::string first = line.substr(0, line.find(','));
        std::string second = line.substr(line.find(',') + 1, line.size());
        if (database.find(first) != database.end())
            std::cout << first << " " << second << " " << database.find(first)->second << std::endl;
        else
            std::cout << first << " " << second << " " << database.lower_bound(first)->first << std::endl;
    }
}


int main(int argc, char *argv[])
{
    std::ifstream verif;
    if (argc != 2)
    {
        std::cout << "Usage: ./btc [files]" << std::endl;
        return 1;
    }
    verif.close();
    std::map<std::string, int> database = getDataBase();
    if (database.empty())
        return 1;
    readfile(argv[1], database);
    return 0;
}
