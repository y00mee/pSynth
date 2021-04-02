// Instantiate
PR::PIANOROLL prx;

// Pass messages WM_KEYDOWN, WM_LBUTTONDBLCLK, WM_LBUTTONDOWN, 
// WM_RBUTTONDOWN, WM_MOUSEMOVE,WM_LBUTTONUP, WM_SYSKEYDOWN 
switch(uMessage) 
{
    case WM_KEYDOWN:
       prx.Message(uMessage,wParam,lParam);    
}