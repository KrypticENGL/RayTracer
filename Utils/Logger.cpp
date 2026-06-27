#include <iostream>

class Logger
{
private:
	int m_imageHeight;
	int m_imageWidth;

public:
	Logger()
	{
		m_imageHeight = 0;
		m_imageWidth = 0;
	}

	Logger(int imageHeight, int imageWidth) : m_imageHeight(imageHeight), m_imageWidth(imageWidth);

	void log(const char* message)
	{
		std::clog << message;
	}
	void log(int message)
	{
		std::clog << message;
	}
};