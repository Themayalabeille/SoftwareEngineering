#include <HelloProjConfig.h>
#include <basic/message.h>
#include <iostream>


void hello_world() {
	std::cout << "Hello world!\n " << std::endl;
}

void print_version() {
	std::cout << "Project version is " << HelloProj_VERSION_MAJOR << "." << HelloProj_VERSION_MINOR << std::endl;
}