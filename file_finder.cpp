#include <filesystem>
#include <iostream>
using namespace std;
using namespace std::filesystem;

int main(int argc, char* argv[]){
    path directorypath = argv[1];
    error_code ec;

    if(exists(directorypath) && is_directory(directorypath)){
        printf("found \'%s\'\n", argv[1]);
        for(const auto& entry: recursive_directory_iterator(directorypath, 
            directory_options::skip_permission_denied, 
            ec))
        {
            cout << entry.path() << endl;
        }
    }else{
        printf("could not find \'%s\'\n", argv[1]);
        return 1;
    }



    return 0;
}