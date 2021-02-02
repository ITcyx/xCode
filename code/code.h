#pragma once
namespace x
{
	class code
	{
	public:
		//运行状态标识码
		static const int SUCCESS = 1;  // 运行正常
		static const int FAIL = -1;  // 运行错误


		//行末结尾字符标识码
		static const int LF = 10;  // Linefeed ，换行字符 \n
		static const int CR = 13;  // Carriage Return ，回车字符 \r
		static const int CRLF = 1310;  // Carriage Return & Linefeed ，回车并换行字符 \r\n
		
		
		//状态标识码
		static const int INIT = 0;  // 初始化状态
		static const int NORMAL = 2;  // 正常状态
		static const int ERROR = 3;  // 错误状态


		//数据单位标识码
		static const int B = 8;  // Byte ，字节
		static const int KIB = 1024;  // 1KiB=1024B
		static const int MIB = 1025;  // 1MiB=1024KiB
		static const int GIB = 1026;  // 1GiB=1024MiB
		static const int TIB = 1027;  // 1TiB=1024GiB
		static const int PIB = 1028;  // 1PiB=1024TiB
		static const int KB = 1000;  // 1KB=1000B
		static const int MB = 1001;  // 1MB=1000KB
		static const int GB = 1002;  // 1GB=1000MB
		static const int TB = 1003;  // 1TB=1000GB
		static const int PB = 1004;  // 1PB=1000TB
	};
}