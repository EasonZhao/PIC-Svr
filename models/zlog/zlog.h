#ifndef ZLOG_H
#define ZLOG_H

#include <boost/serialization/singleton.hpp>
#include <fstream>
#include <string>
using boost::serialization::singleton;
using namespace std;

class zlog
{
public:
	zlog();
	~zlog();
	
	void log(int level, const string& log_msg);
private:
	fstream log_stream_;			///<做写入操作的句柄
	int log_level_;				///<当前日志级别
};

typedef singleton<zlog> zlog_singleton;
#endif
