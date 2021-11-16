// this file is automatically generated with SourceGear Bridge

#include <stdint.h>

#ifndef INCLUDE_System_Console
#define INCLUDE_System_Console

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

void System_Console_void__Beep_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__Beep_0__2__i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t frequency, int32_t duration);

void System_Console_void__Clear_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Console_System_ValueTuple_i32_i32___GetCursorPosition_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__MoveBufferArea_0__6__i32_i32_i32_i32_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t sourceLeft, int32_t sourceTop, int32_t sourceWidth, int32_t sourceHeight, int32_t targetLeft, int32_t targetTop);

void System_Console_void__MoveBufferArea_0__9__i32_i32_i32_i32_i32_i32_Char_ConsoleColor_ConsoleColor(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t sourceLeft, int32_t sourceTop, int32_t sourceWidth, int32_t sourceHeight, int32_t targetLeft, int32_t targetTop, int16_t sourceChar, int32_t sourceForeColor, int32_t sourceBackColor);

SG_HNDL_NONNULL System_Console_Stream__OpenStandardError_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Console_Stream__OpenStandardError_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t bufferSize);

SG_HNDL_NONNULL System_Console_Stream__OpenStandardInput_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Console_Stream__OpenStandardInput_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t bufferSize);

SG_HNDL_NONNULL System_Console_Stream__OpenStandardOutput_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Console_Stream__OpenStandardOutput_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t bufferSize);

int32_t System_Console_i32__Read_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Console_ConsoleKeyInfo__ReadKey_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Console_ConsoleKeyInfo__ReadKey_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t intercept);

SG_HNDL_NULLABLE System_Console_String__ReadLine_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__ResetColor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__SetBufferSize_0__2__i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t width, int32_t height);

void System_Console_void__SetCursorPosition_0__2__i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t left, int32_t top);

void System_Console_void__SetError_0__1__TextWriter(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL newError);

void System_Console_void__SetIn_0__1__TextReader(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL newIn);

void System_Console_void__SetOut_0__1__TextWriter(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL newOut);

void System_Console_void__SetWindowPosition_0__2__i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t left, int32_t top);

void System_Console_void__SetWindowSize_0__2__i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t width, int32_t height);

void System_Console_void__Write_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

void System_Console_void__Write_0__1__Char(SG_HNDL_NULLABLE * _Nonnull __thrown, int16_t value);

void System_Console_void__Write_0__1__CharArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE buffer);

void System_Console_void__Write_0__3__CharArray_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL buffer, int32_t index, int32_t count);

void System_Console_void__Write_0__1__Decimal(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL value);

void System_Console_void__Write_0__1__f64(SG_HNDL_NULLABLE * _Nonnull __thrown, double value);

void System_Console_void__Write_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

void System_Console_void__Write_0__1__i64(SG_HNDL_NULLABLE * _Nonnull __thrown, int64_t value);

void System_Console_void__Write_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE value);

void System_Console_void__Write_0__1__f32(SG_HNDL_NULLABLE * _Nonnull __thrown, float value);

void System_Console_void__Write_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE value);

void System_Console_void__Write_0__2__String_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL format, SG_HNDL_NULLABLE arg0);

void System_Console_void__Write_0__3__String_Object_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL format, SG_HNDL_NULLABLE arg0, SG_HNDL_NULLABLE arg1);

void System_Console_void__Write_0__4__String_Object_Object_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL format, SG_HNDL_NULLABLE arg0, SG_HNDL_NULLABLE arg1, SG_HNDL_NULLABLE arg2);

void System_Console_void__Write_0__2__String_ObjectArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL format, SG_HNDL_NULLABLE arg);

void System_Console_void__Write_0__1__u32(SG_HNDL_NULLABLE * _Nonnull __thrown, uint32_t value);

void System_Console_void__Write_0__1__u64(SG_HNDL_NULLABLE * _Nonnull __thrown, uint64_t value);

void System_Console_void__WriteLine_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__WriteLine_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

void System_Console_void__WriteLine_0__1__Char(SG_HNDL_NULLABLE * _Nonnull __thrown, int16_t value);

void System_Console_void__WriteLine_0__1__CharArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE buffer);

void System_Console_void__WriteLine_0__3__CharArray_i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL buffer, int32_t index, int32_t count);

void System_Console_void__WriteLine_0__1__Decimal(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL value);

void System_Console_void__WriteLine_0__1__f64(SG_HNDL_NULLABLE * _Nonnull __thrown, double value);

void System_Console_void__WriteLine_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

void System_Console_void__WriteLine_0__1__i64(SG_HNDL_NULLABLE * _Nonnull __thrown, int64_t value);

void System_Console_void__WriteLine_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE value);

void System_Console_void__WriteLine_0__1__f32(SG_HNDL_NULLABLE * _Nonnull __thrown, float value);

void System_Console_void__WriteLine_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE value);

void System_Console_void__WriteLine_0__2__String_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL format, SG_HNDL_NULLABLE arg0);

void System_Console_void__WriteLine_0__3__String_Object_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL format, SG_HNDL_NULLABLE arg0, SG_HNDL_NULLABLE arg1);

void System_Console_void__WriteLine_0__4__String_Object_Object_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL format, SG_HNDL_NULLABLE arg0, SG_HNDL_NULLABLE arg1, SG_HNDL_NULLABLE arg2);

void System_Console_void__WriteLine_0__2__String_ObjectArray(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL format, SG_HNDL_NULLABLE arg);

void System_Console_void__WriteLine_0__1__u32(SG_HNDL_NULLABLE * _Nonnull __thrown, uint32_t value);

void System_Console_void__WriteLine_0__1__u64(SG_HNDL_NULLABLE * _Nonnull __thrown, uint64_t value);

int32_t System_Console_ConsoleColor__get_BackgroundColor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__set_BackgroundColor_0__1__ConsoleColor(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

int32_t System_Console_i32__get_BufferHeight_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__set_BufferHeight_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

int32_t System_Console_i32__get_BufferWidth_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__set_BufferWidth_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

int32_t System_Console_bool__get_CapsLock_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_Console_i32__get_CursorLeft_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__set_CursorLeft_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

int32_t System_Console_i32__get_CursorSize_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__set_CursorSize_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

int32_t System_Console_i32__get_CursorTop_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__set_CursorTop_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

int32_t System_Console_bool__get_CursorVisible_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__set_CursorVisible_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

SG_HNDL_NONNULL System_Console_TextWriter__get_Error_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_Console_ConsoleColor__get_ForegroundColor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__set_ForegroundColor_0__1__ConsoleColor(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

SG_HNDL_NONNULL System_Console_TextReader__get_In_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Console_Encoding__get_InputEncoding_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__set_InputEncoding_0__1__Encoding(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL value);

int32_t System_Console_bool__get_IsErrorRedirected_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_Console_bool__get_IsInputRedirected_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_Console_bool__get_IsOutputRedirected_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_Console_bool__get_KeyAvailable_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_Console_i32__get_LargestWindowHeight_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_Console_i32__get_LargestWindowWidth_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_Console_bool__get_NumberLock_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Console_TextWriter__get_Out_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Console_Encoding__get_OutputEncoding_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__set_OutputEncoding_0__1__Encoding(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL value);

SG_HNDL_NONNULL System_Console_String__get_Title_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__set_Title_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL value);

int32_t System_Console_bool__get_TreatControlCAsInput_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__set_TreatControlCAsInput_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

int32_t System_Console_i32__get_WindowHeight_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__set_WindowHeight_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

int32_t System_Console_i32__get_WindowLeft_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__set_WindowLeft_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

int32_t System_Console_i32__get_WindowTop_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__set_WindowTop_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

int32_t System_Console_i32__get_WindowWidth_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

void System_Console_void__set_WindowWidth_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t value);

void System_Console_void__add_CancelKeyPress_0__1__ConsoleCancelEventHandler(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE value);

void System_Console_void__remove_CancelKeyPress_0__1__ConsoleCancelEventHandler(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE value);

TYP System_ConsoleCancelEventArgs_get_type_handle(void);

int32_t System_ConsoleCancelEventArgs_bool__get_Cancel_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_ConsoleCancelEventArgs_void__set_Cancel_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_ConsoleCancelEventArgs_ConsoleSpecialKey__get_SpecialKey_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_ConsoleCancelEventArgs_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_ConsoleCancelEventHandler_get_type_handle(void);

void System_ConsoleCancelEventHandler_void__Invoke_0__2__Object_ConsoleCancelEventArgs(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e);

SG_HNDL_NULLABLE System_ConsoleCancelEventHandler_IAsyncResult__BeginInvoke_0__4__Object_ConsoleCancelEventArgs_AsyncCallback_Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e, SG_HNDL_NULLABLE callback, SG_HNDL_NULLABLE object_);

void System_ConsoleCancelEventHandler_void__EndInvoke_0__1__IAsyncResult(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE result);

SG_HNDL_NONNULL System_ConsoleCancelEventHandler_create(SG_HNDL_NULLABLE * _Nonnull __thrown, void (* _Nonnull  __cb)(const void* _Nonnull __pdata, SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE sender, SG_HNDL_NONNULL e), const void* _Nonnull __pdata, void (* _Nullable __deinit)(const void* _Nonnull __pdata));

TYP System_ConsoleColor_get_type_handle(void);

int32_t System_ConsoleColor_get_Black(void);

int32_t System_ConsoleColor_get_DarkBlue(void);

int32_t System_ConsoleColor_get_DarkGreen(void);

int32_t System_ConsoleColor_get_DarkCyan(void);

int32_t System_ConsoleColor_get_DarkRed(void);

int32_t System_ConsoleColor_get_DarkMagenta(void);

int32_t System_ConsoleColor_get_DarkYellow(void);

int32_t System_ConsoleColor_get_Gray(void);

int32_t System_ConsoleColor_get_DarkGray(void);

int32_t System_ConsoleColor_get_Blue(void);

int32_t System_ConsoleColor_get_Green(void);

int32_t System_ConsoleColor_get_Cyan(void);

int32_t System_ConsoleColor_get_Red(void);

int32_t System_ConsoleColor_get_Magenta(void);

int32_t System_ConsoleColor_get_Yellow(void);

int32_t System_ConsoleColor_get_White(void);

TYP System_ConsoleKey_get_type_handle(void);

int32_t System_ConsoleKey_get_Backspace(void);

int32_t System_ConsoleKey_get_Tab(void);

int32_t System_ConsoleKey_get_Clear(void);

int32_t System_ConsoleKey_get_Enter(void);

int32_t System_ConsoleKey_get_Pause(void);

int32_t System_ConsoleKey_get_Escape(void);

int32_t System_ConsoleKey_get_Spacebar(void);

int32_t System_ConsoleKey_get_PageUp(void);

int32_t System_ConsoleKey_get_PageDown(void);

int32_t System_ConsoleKey_get_End(void);

int32_t System_ConsoleKey_get_Home(void);

int32_t System_ConsoleKey_get_LeftArrow(void);

int32_t System_ConsoleKey_get_UpArrow(void);

int32_t System_ConsoleKey_get_RightArrow(void);

int32_t System_ConsoleKey_get_DownArrow(void);

int32_t System_ConsoleKey_get_Select(void);

int32_t System_ConsoleKey_get_Print(void);

int32_t System_ConsoleKey_get_Execute(void);

int32_t System_ConsoleKey_get_PrintScreen(void);

int32_t System_ConsoleKey_get_Insert(void);

int32_t System_ConsoleKey_get_Delete(void);

int32_t System_ConsoleKey_get_Help(void);

int32_t System_ConsoleKey_get_D0(void);

int32_t System_ConsoleKey_get_D1(void);

int32_t System_ConsoleKey_get_D2(void);

int32_t System_ConsoleKey_get_D3(void);

int32_t System_ConsoleKey_get_D4(void);

int32_t System_ConsoleKey_get_D5(void);

int32_t System_ConsoleKey_get_D6(void);

int32_t System_ConsoleKey_get_D7(void);

int32_t System_ConsoleKey_get_D8(void);

int32_t System_ConsoleKey_get_D9(void);

int32_t System_ConsoleKey_get_A(void);

int32_t System_ConsoleKey_get_B(void);

int32_t System_ConsoleKey_get_C(void);

int32_t System_ConsoleKey_get_D(void);

int32_t System_ConsoleKey_get_E(void);

int32_t System_ConsoleKey_get_F(void);

int32_t System_ConsoleKey_get_G(void);

int32_t System_ConsoleKey_get_H(void);

int32_t System_ConsoleKey_get_I(void);

int32_t System_ConsoleKey_get_J(void);

int32_t System_ConsoleKey_get_K(void);

int32_t System_ConsoleKey_get_L(void);

int32_t System_ConsoleKey_get_M(void);

int32_t System_ConsoleKey_get_N(void);

int32_t System_ConsoleKey_get_O(void);

int32_t System_ConsoleKey_get_P(void);

int32_t System_ConsoleKey_get_Q(void);

int32_t System_ConsoleKey_get_R(void);

int32_t System_ConsoleKey_get_S(void);

int32_t System_ConsoleKey_get_T(void);

int32_t System_ConsoleKey_get_U(void);

int32_t System_ConsoleKey_get_V(void);

int32_t System_ConsoleKey_get_W(void);

int32_t System_ConsoleKey_get_X(void);

int32_t System_ConsoleKey_get_Y(void);

int32_t System_ConsoleKey_get_Z(void);

int32_t System_ConsoleKey_get_LeftWindows(void);

int32_t System_ConsoleKey_get_RightWindows(void);

int32_t System_ConsoleKey_get_Applications(void);

int32_t System_ConsoleKey_get_Sleep(void);

int32_t System_ConsoleKey_get_NumPad0(void);

int32_t System_ConsoleKey_get_NumPad1(void);

int32_t System_ConsoleKey_get_NumPad2(void);

int32_t System_ConsoleKey_get_NumPad3(void);

int32_t System_ConsoleKey_get_NumPad4(void);

int32_t System_ConsoleKey_get_NumPad5(void);

int32_t System_ConsoleKey_get_NumPad6(void);

int32_t System_ConsoleKey_get_NumPad7(void);

int32_t System_ConsoleKey_get_NumPad8(void);

int32_t System_ConsoleKey_get_NumPad9(void);

int32_t System_ConsoleKey_get_Multiply(void);

int32_t System_ConsoleKey_get_Add(void);

int32_t System_ConsoleKey_get_Separator(void);

int32_t System_ConsoleKey_get_Subtract(void);

int32_t System_ConsoleKey_get_Decimal(void);

int32_t System_ConsoleKey_get_Divide(void);

int32_t System_ConsoleKey_get_F1(void);

int32_t System_ConsoleKey_get_F2(void);

int32_t System_ConsoleKey_get_F3(void);

int32_t System_ConsoleKey_get_F4(void);

int32_t System_ConsoleKey_get_F5(void);

int32_t System_ConsoleKey_get_F6(void);

int32_t System_ConsoleKey_get_F7(void);

int32_t System_ConsoleKey_get_F8(void);

int32_t System_ConsoleKey_get_F9(void);

int32_t System_ConsoleKey_get_F10(void);

int32_t System_ConsoleKey_get_F11(void);

int32_t System_ConsoleKey_get_F12(void);

int32_t System_ConsoleKey_get_F13(void);

int32_t System_ConsoleKey_get_F14(void);

int32_t System_ConsoleKey_get_F15(void);

int32_t System_ConsoleKey_get_F16(void);

int32_t System_ConsoleKey_get_F17(void);

int32_t System_ConsoleKey_get_F18(void);

int32_t System_ConsoleKey_get_F19(void);

int32_t System_ConsoleKey_get_F20(void);

int32_t System_ConsoleKey_get_F21(void);

int32_t System_ConsoleKey_get_F22(void);

int32_t System_ConsoleKey_get_F23(void);

int32_t System_ConsoleKey_get_F24(void);

int32_t System_ConsoleKey_get_BrowserBack(void);

int32_t System_ConsoleKey_get_BrowserForward(void);

int32_t System_ConsoleKey_get_BrowserRefresh(void);

int32_t System_ConsoleKey_get_BrowserStop(void);

int32_t System_ConsoleKey_get_BrowserSearch(void);

int32_t System_ConsoleKey_get_BrowserFavorites(void);

int32_t System_ConsoleKey_get_BrowserHome(void);

int32_t System_ConsoleKey_get_VolumeMute(void);

int32_t System_ConsoleKey_get_VolumeDown(void);

int32_t System_ConsoleKey_get_VolumeUp(void);

int32_t System_ConsoleKey_get_MediaNext(void);

int32_t System_ConsoleKey_get_MediaPrevious(void);

int32_t System_ConsoleKey_get_MediaStop(void);

int32_t System_ConsoleKey_get_MediaPlay(void);

int32_t System_ConsoleKey_get_LaunchMail(void);

int32_t System_ConsoleKey_get_LaunchMediaSelect(void);

int32_t System_ConsoleKey_get_LaunchApp1(void);

int32_t System_ConsoleKey_get_LaunchApp2(void);

int32_t System_ConsoleKey_get_Oem1(void);

int32_t System_ConsoleKey_get_OemPlus(void);

int32_t System_ConsoleKey_get_OemComma(void);

int32_t System_ConsoleKey_get_OemMinus(void);

int32_t System_ConsoleKey_get_OemPeriod(void);

int32_t System_ConsoleKey_get_Oem2(void);

int32_t System_ConsoleKey_get_Oem3(void);

int32_t System_ConsoleKey_get_Oem4(void);

int32_t System_ConsoleKey_get_Oem5(void);

int32_t System_ConsoleKey_get_Oem6(void);

int32_t System_ConsoleKey_get_Oem7(void);

int32_t System_ConsoleKey_get_Oem8(void);

int32_t System_ConsoleKey_get_Oem102(void);

int32_t System_ConsoleKey_get_Process(void);

int32_t System_ConsoleKey_get_Packet(void);

int32_t System_ConsoleKey_get_Attention(void);

int32_t System_ConsoleKey_get_CrSel(void);

int32_t System_ConsoleKey_get_ExSel(void);

int32_t System_ConsoleKey_get_EraseEndOfFile(void);

int32_t System_ConsoleKey_get_Play(void);

int32_t System_ConsoleKey_get_Zoom(void);

int32_t System_ConsoleKey_get_NoName(void);

int32_t System_ConsoleKey_get_Pa1(void);

int32_t System_ConsoleKey_get_OemClear(void);

TYP System_ConsoleKeyInfo_get_type_handle(void);

SG_HNDL_NONNULL System_ConsoleKeyInfo_ctor_0__5__Char_ConsoleKey_bool_bool_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int16_t keyChar, int32_t key, int32_t shift, int32_t alt, int32_t control);

int32_t System_ConsoleKeyInfo_bool__Equals_0__1__ConsoleKeyInfo(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL obj);

int32_t System_ConsoleKeyInfo_bool__Equals_0__1__Object(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

int32_t System_ConsoleKeyInfo_i32__GetHashCode_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_ConsoleKeyInfo_bool__op_Equality_0__2__ConsoleKeyInfo_ConsoleKeyInfo(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL a, SG_HNDL_NONNULL b);

int32_t System_ConsoleKeyInfo_bool__op_Inequality_0__2__ConsoleKeyInfo_ConsoleKeyInfo(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL a, SG_HNDL_NONNULL b);

int32_t System_ConsoleKeyInfo_ConsoleKey__get_Key_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int16_t System_ConsoleKeyInfo_Char__get_KeyChar_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_ConsoleKeyInfo_ConsoleModifiers__get_Modifiers_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_ConsoleKeyInfo_implicit_ctor(void);

TYP System_ConsoleModifiers_get_type_handle(void);

int32_t System_ConsoleModifiers_get_Alt(void);

int32_t System_ConsoleModifiers_get_Shift(void);

int32_t System_ConsoleModifiers_get_Control(void);

TYP System_ConsoleSpecialKey_get_type_handle(void);

int32_t System_ConsoleSpecialKey_get_ControlC(void);

int32_t System_ConsoleSpecialKey_get_ControlBreak(void);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_Console

