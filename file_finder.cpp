#include <filesystem>
using namespace std;
using namespace std::filesystem;

int main(int argc, char* argv[]){
    path directorypath = argv[0];

    if(exists(directorypath) && is_directory(directorypath)){
        printf("found folders\n");
    }else{
        printf("folders not found\n");
    }

    return 0;
}