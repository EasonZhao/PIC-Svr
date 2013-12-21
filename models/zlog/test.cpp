#include <iostream>
#include "zlog.h"

int main(int, char**){
	zlog_singleton::get_mutable_instance().log(0, "test");
	return 0;
}
