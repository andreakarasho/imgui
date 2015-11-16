// ImGui SDL2 binding with OpenGL3
// You can copy and use unmodified imgui_impl_* files in your project. 
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// See main.cpp for an example of using this.
// https://github.com/ocornut/imgui

struct SDL_Window;
typedef union SDL_Event SDL_Event;

IMGUI_API bool        ImGui_ImplSdlGL3_Init(SDL_Window *window);
IMGUI_API void        ImGui_ImplSdlGL3_Shutdown();
IMGUI_API void        ImGui_ImplSdlGL3_NewFrame();
IMGUI_API bool        ImGui_ImplSdlGL3_ProcessEvent(SDL_Event* event);

// Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplSdlGL3_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplSdlGL3_CreateDeviceObjects();
