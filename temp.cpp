#include <filesystem>
#include <iostream>
#include <unistd.h>
#include <ctime>
#include <fstream>
#include <vector>
using namespace std;


int main()
{
    // string info;
    // ifstream read("commitInfo.txt");
    // while( getline(read, info) ) {
    //     if(info[0] == '1')
    //     {
    //         cout << "Commit ID:    " << info.substr(2) << endl;
    //     }
    //     if(info[0] == '2')
    //     {
    //         cout << "Commit Msg:   " << info.substr(2) << endl;
    //     }
    //     if(info[0] == '3')
    //     {
    //         cout << "Date & Time:  " << info.substr(2) << endl;
    //     }
    // }
    // read.close();
    // cout << "============================\n\n";

    // vector<string> v;
    // for (const filesystem::path &file : filesystem::recursive_directory_iterator(filesystem::current_path() / "lol")) 
    // {
    //     v.push_back(file.string().substr( file.string().find_last_of('/') + 1 ));
    // }

    // cout << "file count is " << v.size() << endl;
    // for (auto i = v.begin(); i != v.end(); i++)
    //     cout << *i << endl;

    auto commitHashPath = filesystem::path(filesystem::current_path() / "folder-1");
    const auto copyOptions = filesystem::copy_options::update_existing | filesystem::copy_options::recursive;
    filesystem::copy(commitHashPath, filesystem::current_path() / "folder-2", copyOptions);

}
