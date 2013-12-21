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
	fstream log_stream_;			///<��д������ľ��
	int log_level_;				///<��ǰ��־����
};

typedef singleton<zlog> zlog_singleton;
#endif
