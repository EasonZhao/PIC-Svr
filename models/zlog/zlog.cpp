#include "zlog.h"
using namespace boost::filesystem;
const string log_path = "1.log";

zlog::zlog():
	log_level_(0){
	if(!exists(log_path)){
		create_directory(log_path);
	}
	//以追加方式打开
	log_stream_.open(log_path.c_str(), ios::app);
	cout << "construct zlog" << endl;
}

zlog::~zlog(){
	log_stream_.close();
}

void zlog::log(int level, const string& log_msg){
	BOOST_ASSERT(log_stream_.is_open());
	log_stream_ << log_msg << endl;
	log_stream_.flush();
}
