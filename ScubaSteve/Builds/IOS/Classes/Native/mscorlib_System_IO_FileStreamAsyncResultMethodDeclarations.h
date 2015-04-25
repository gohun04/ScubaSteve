#pragma once

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t2036;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1777;
// System.AsyncCallback
struct AsyncCallback_t32;
// System.IAsyncResult
struct IAsyncResult_t31;

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
 void FileStreamAsyncResult__ctor_m10644 (FileStreamAsyncResult_t2036 * __this, AsyncCallback_t32 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
 void FileStreamAsyncResult_CBWrapper_m10645 (Object_t * __this/* static, unused */, Object_t * ___ares, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
 Object_t * FileStreamAsyncResult_get_AsyncState_m10646 (FileStreamAsyncResult_t2036 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t1777 * FileStreamAsyncResult_get_AsyncWaitHandle_m10647 (FileStreamAsyncResult_t2036 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
 bool FileStreamAsyncResult_get_IsCompleted_m10648 (FileStreamAsyncResult_t2036 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
