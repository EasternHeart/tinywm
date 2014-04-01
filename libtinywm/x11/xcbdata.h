#include <xcb/xcb.h>
typedef struct X11Data *X11Data;

///Allocate memory for a X11Data structure
///It's just a wrapper for malloc().
///@return A pointer from malloc(). (Definition of OK or error is the same as malloc().)
X11Data wmx11_AllocX11Data();

///Connect a X11Data structure to the X11 Server
///@param x11data A allocated X11Data
///@param display (Optional, to use the environment variable, please use NULL) The Display wanted to be connected
///@return A Boolean Value will be Returned.
int wmx11_ConnectServer(X11Data x11data, const char* display);

///Disconnect a X11Data structure
///@param x11data A allocated and connected X11Data
///@return Nothing.
void wmx11_DisconnectServer(X11Data x11data);

typedef enum{Disconnected, Connected} wmx11_ConnectionState;

///Get the connection state of a X11Data
///It will check whether the server is available.
///@param x11data A allocated X11Data
///@return the ConnectionState.
wmx11_ConnectionState wmx11_GetConnectionState(X11Data x11data);


