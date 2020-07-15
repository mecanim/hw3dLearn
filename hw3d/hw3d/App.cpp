#include "App.h"

App::App()
	:
	wnd(800, 600, "D3D Box")
{}

int App::Go()
{
	while (true)
	{
		if (const auto ecode = Window::ProcessMessages())
		{
			return *ecode;
		}

		DoFrame();
	}
}

void App::DoFrame()
{

}