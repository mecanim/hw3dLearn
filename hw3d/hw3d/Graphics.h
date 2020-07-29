#pragma once
#include <d3d11.h>

class Graphics
{
public:
	Graphics() {}
	Graphics( HWND hWnd);
	Graphics(const Graphics&) = delete;
	Graphics& operator=(const Graphics&) = delete;
	void EndFrame();
	void ClearBuffer(float red, float green, float blue) noexcept
	{
		const float color[] = { red, green, blue, 1.0f };
		pContext->ClearRenderTargetView(pTarget, color);
	}
	~Graphics();
private:
	ID3D11Device* pDevice = nullptr;
	IDXGISwapChain* pSwap = nullptr;
	ID3D11DeviceContext* pContext = nullptr;
	ID3D11RenderTargetView* pTarget = nullptr;
};
