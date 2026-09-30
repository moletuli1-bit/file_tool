#include <filesystem>
using namespace std;
using namespace std::filesystem;

int main(){
    path directorypath = "C:\\Users\\molet\\Testing\\";

    if(exists(directorypath) && is_directory(directorypath)){
        printf("found folders\n");
    }else{
        printf("folders not found\n");
    }

    return 0;
}