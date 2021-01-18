#include "header.hpp"

void check_source()
{
    std::cout << "Working directory " << std::filesystem::current_path() << std::endl;
    std::filesystem::path program_path =
        std::filesystem::path("./code/program.mlg");
    // program_path += boost::filesystem::path("code");
    if (std::filesystem::exists(program_path))
    {
        program_path = std::filesystem::absolute(program_path);
        std::cout << "Path " << program_path;
        std::cout << " exists";
        if (std::filesystem::is_regular_file(program_path))
        {
            std::cout << " and is a regular file" << std::endl;
        }
        else
        {
            std::cout << " but is not a regular file" << std::endl;
        }
    }
    else
    {
        std::cout << "Path " << program_path;
        std::cout << " doesn't exists" << std::endl;
    }
}