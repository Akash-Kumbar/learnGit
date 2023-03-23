#include<iostream>

int main()
{
    std::cout << "Making changes to create conflicts" << std::endl;
   
    std::cout << "Learning git" << std::endl;
    
    std::cout << "Making changes in the remote repo to cause push conflict" << std::endl;

    std::cout << "Another rubbish line" << std::endl;
<<<<<<< HEAD
    std::cout << "Created a new branch, lets see how things work" << std::endl;
    std::cout << "In a new branch, pushing it to the remote repo" << std::endl;
=======

    std::cout << "Making changes in the local repo" << std::endl;
>>>>>>> master

    return 0;
}
