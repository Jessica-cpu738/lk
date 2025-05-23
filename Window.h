#pragma once
#include"Configure.h"
class Window
{

	public:
		Window(int w, int h, int flag);
		void setWindowTitle(const std::string& title);
		int exec();
		static int width();
		static int height();
		static void clear();
		static void beginDraw();
		static void flushDraw();
		static void endDraw();


		//按键操作鼠标操作
		//判断有没有消息
		inline static bool hasMsg() { return::peekmessage(&m_msg, EM_MOUSE | EM_KEY); }
		inline static const ExMessage& getMsg() { return m_msg; }

	private:
		HWND m_handle;//窗口
		inline static ExMessage m_msg;//消息
	};
};
