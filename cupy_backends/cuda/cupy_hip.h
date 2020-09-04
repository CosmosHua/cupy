// This file is a stub header file of hip for Read the Docs.

#ifndef INCLUDE_GUARD_CUPY_HIP_H
#define INCLUDE_GUARD_CUPY_HIP_H

#include <hiprand/hiprand.h>
#include "cupy_hip_common.h"
#include "cupy_cuComplex.h"
#ifndef CUPY_NO_NVTX
#include <roctx.h>
#endif // #ifndef CUPY_NO_NVTX

extern "C" {

bool hip_environment = true;

///////////////////////////////////////////////////////////////////////////////
// cuda.h
///////////////////////////////////////////////////////////////////////////////

// Error handling
CUresult cuGetErrorName(CUresult hipError, const char** pStr) {
    *pStr = hipGetErrorName(hipError);
    return CUDA_SUCCESS;
}

CUresult cuGetErrorString(CUresult hipError, const char** pStr) {
    *pStr = hipGetErrorString(hipError);
    return CUDA_SUCCESS;
}

// Primary context management
CUresult cuDevicePrimaryCtxRelease(CUdevice dev) {
    return hipDevicePrimaryCtxRelease(dev);
}

// Context management
CUresult cuCtxGetCurrent(CUcontext *ctx) {
    // deprecated api
    //return hipCtxGetCurrent(ctx);
    return hipErrorUnknown;
}

CUresult cuCtxSetCurrent(CUcontext ctx) {
    // deprecated api
    //return hipCtxSetCurrent(ctx);
    return hipErrorUnknown;
}

CUresult cuCtxCreate(CUcontext* pctx, unsigned int flags, CUdevice dev) {
    // deprecated api
    //return hipCtxCreate(pctx, flags, dev);
    return hipErrorUnknown;
}

CUresult cuCtxDestroy(CUcontext ctx) {
    // deprecated api
    // return hipCtxDestroy(ctx);
    return hipErrorUnknown;
}


// Module load and kernel execution
CUresult cuLinkCreate(...) {
    return hipErrorUnknown;
}

CUresult cuLinkAddData(...) {
    return hipErrorUnknown;
}

CUresult cuLinkAddFile(...) {
    return hipErrorUnknown;
}

CUresult cuLinkComplete(...) {
    return hipErrorUnknown;
}

CUresult cuLinkDestroy(...) {
    return hipErrorUnknown;
}

CUresult cuModuleLoad(CUmodule *module, const char *fname) {
    return hipModuleLoad(module, fname);
}

CUresult cuModuleLoadData(CUmodule *module, const void *image) {
    return hipModuleLoadData(module, image);
}

CUresult cuModuleUnload(CUmodule module) {
    return hipModuleUnload(module);
}

CUresult cuModuleGetFunction(CUfunction *function, CUmodule module,
                             const char *kname) {
    return hipModuleGetFunction(function, module, kname);
}

CUresult cuModuleGetGlobal(CUdeviceptr *dptr, size_t *bytes, CUmodule hmod,
                           const char *name) {
    return hipModuleGetGlobal(dptr, bytes, hmod, name);
}

CUresult cuModuleGetTexRef(...) {
    return hipErrorUnknown;
}

CUresult cuLaunchKernel(CUfunction f, uint32_t gridDimX, uint32_t gridDimY,
                        uint32_t gridDimZ, uint32_t blockDimX,
                        uint32_t blockDimY, uint32_t blockDimZ,
                        uint32_t sharedMemBytes, cudaStream_t hStream,
                        void **kernelParams, void **extra) {
    return hipModuleLaunchKernel(f, gridDimX, gridDimY, gridDimZ,
                                 blockDimX, blockDimY, blockDimZ,
                                 sharedMemBytes, hStream, kernelParams, extra);
}

CUresult cuLaunchCooperativeKernel(...) {
    return hipErrorUnknown;
}


// Function attribute
CUresult cuFuncGetAttribute(int* pi, CUfunction_attribute attrib, CUfunction hfunc) {
    return hipFuncGetAttribute(pi, attrib, hfunc);
}

CUresult cuFuncSetAttribute(...) {
    return hipErrorUnknown;
}


// Texture reference
CUresult cuTexRefSetAddress (...) {
    return hipErrorUnknown;
}

CUresult cuTexRefSetAddress2D (...) {
    return hipErrorUnknown;
}

CUresult cuTexRefSetAddressMode (...) {
    return hipErrorUnknown;
}

CUresult cuTexRefSetArray (...) {
    return hipErrorUnknown;
}

CUresult cuTexRefSetBorderColor (...) {
    return hipErrorUnknown;
}

CUresult cuTexRefSetFilterMode (...) {
    return hipErrorUnknown;
}

CUresult cuTexRefSetFlags (...) {
    return hipErrorUnknown;
}

CUresult cuTexRefSetFormat (...) {
    return hipErrorUnknown;
}

CUresult cuTexRefSetMaxAnisotropy (...) {
    return hipErrorUnknown;
}

// Occupancy
typedef size_t (*CUoccupancyB2DSize)(int);

CUresult cuOccupancyMaxActiveBlocksPerMultiprocessor(...) {
    return hipErrorUnknown;
}

CUresult cuOccupancyMaxPotentialBlockSize(...) {
    return hipErrorUnknown;
}


///////////////////////////////////////////////////////////////////////////////
// cuda_runtime.h
///////////////////////////////////////////////////////////////////////////////

// Error handling
const char* cudaGetErrorName(cudaError_t hipError) {
    return hipGetErrorName(hipError);
}

const char* cudaGetErrorString(cudaError_t hipError) {
    return hipGetErrorString(hipError);
}

cudaError_t cudaGetLastError() {
    return hipGetLastError();
}


// Initialization
cudaError_t cudaDriverGetVersion(int *driverVersion) {
    return hipDriverGetVersion(driverVersion);
}

cudaError_t cudaRuntimeGetVersion(int *runtimeVersion) {
    return hipRuntimeGetVersion(runtimeVersion);
}


// CUdevice operations
cudaError_t cudaGetDevice(int *deviceId) {
    return hipGetDevice(deviceId);
}

cudaError_t cudaDeviceGetAttribute(int* pi, cudaDeviceAttr attr,
                                   int deviceId) {
    return hipDeviceGetAttribute(pi, attr, deviceId);
}

cudaError_t cudaDeviceGetByPCIBusId(int *device, const char *pciBusId) {
    return hipDeviceGetByPCIBusId(device, pciBusId);
}

cudaError_t cudaDeviceGetPCIBusId(char *pciBusId, int len, int device) {
    return hipDeviceGetPCIBusId(pciBusId, len, device);
}

cudaError_t cudaGetDeviceCount(int *count) {
    return hipGetDeviceCount(count);
}

cudaError_t cudaSetDevice(int deviceId) {
    return hipSetDevice(deviceId);
}

cudaError_t cudaDeviceSynchronize() {
    return hipDeviceSynchronize();
}

cudaError_t cudaDeviceCanAccessPeer(int* canAccessPeer, int deviceId,
                                    int peerDeviceId) {
    return hipDeviceCanAccessPeer(canAccessPeer, deviceId, peerDeviceId);
}

cudaError_t cudaDeviceEnablePeerAccess(int peerDeviceId, unsigned int flags) {
    return hipDeviceEnablePeerAccess(peerDeviceId, flags);
}

cudaError_t cudaDeviceGetLimit(size_t* pValue, cudaLimit limit) {
    return hipDeviceGetLimit(pValue, limit);
}

cudaError_t cudaDeviceSetLimit(cudaLimit limit, size_t value) {
    // see https://github.com/ROCm-Developer-Tools/HIP/issues/1632
    return hipErrorUnknown;
}

// IPC operations
cudaError_t cudaIpcCloseMemHandle(void* devPtr) {
    return hipIpcCloseMemHandle(devPtr);
}

cudaError_t cudaIpcGetEventHandle(cudaIpcEventHandle_t* handle, cudaEvent_t event) {
    return hipErrorUnknown;

    // TODO(leofang): this is supported after ROCm-Developer-Tools/HIP#1996 is released;
    // as of ROCm 3.5.0 it is still not supported
    //return hipIpcGetEventHandle(handle, event);
}

cudaError_t cudaIpcGetMemHandle(cudaIpcMemHandle_t* handle, void* devPtr) {
    return hipIpcGetMemHandle(handle, devPtr);
}

cudaError_t cudaIpcOpenEventHandle(cudaEvent_t* event, cudaIpcEventHandle_t handle) {
    return hipErrorUnknown;

    // TODO(leofang): this is supported after ROCm-Developer-Tools/HIP#1996 is released;
    // as of ROCm 3.5.0 it is still not supported
    //return hipIpcOpenEventHandle(event, handle);
}

cudaError_t cudaIpcOpenMemHandle(void** devPtr, cudaIpcMemHandle_t handle, unsigned int flags) {
    return hipIpcOpenMemHandle(devPtr, handle, flags);
}

// Memory management
cudaError_t cudaMalloc(void** ptr, size_t size) {
    return hipMalloc(ptr, size);
}

cudaError_t cudaMalloc3DArray(...) {
    return hipErrorUnknown;
}

cudaError_t cudaMallocArray(...) {
    return hipErrorUnknown;
}

cudaError_t cudaHostAlloc(void** ptr, size_t size, unsigned int flags) {
    return hipHostMalloc(ptr, size, flags);
}

cudaError_t cudaHostRegister(...) {
    return hipErrorUnknown;
}

cudaError_t cudaHostUnregister(...) {
    return hipErrorUnknown;
}

cudaError_t cudaMallocManaged(...) {
    return hipErrorUnknown;
}

int cudaFree(void* ptr) {
    return hipFree(ptr);
}

cudaError_t cudaFreeArray(...) {
    return hipErrorUnknown;
}

cudaError_t cudaFreeHost(void* ptr) {
    return hipHostFree(ptr);
}

int cudaMemGetInfo(size_t* free, size_t* total) {
    return hipMemGetInfo(free, total);
}

cudaError_t cudaMemcpy(void* dst, const void* src, size_t sizeBytes,
                       hipMemcpyKind kind) {
    return hipMemcpy(dst, src, sizeBytes, kind);
}

cudaError_t cudaMemcpyAsync(void* dst, const void* src, size_t sizeBytes,
                            cudaMemcpyKind kind, cudaStream_t stream) {
    return hipMemcpyAsync(dst, src, sizeBytes, kind, stream);
}

cudaError_t cudaMemcpyPeer(void* dst, int dstDeviceId, const void* src,
                           int srcDeviceId, size_t sizeBytes) {
    return hipMemcpyPeer(dst, dstDeviceId, src, srcDeviceId, sizeBytes);
}

cudaError_t cudaMemcpyPeerAsync(void* dst, int dstDevice, const void* src,
                                int srcDevice, size_t sizeBytes,
                                cudaStream_t stream) {
    return hipMemcpyPeerAsync(dst, dstDevice, src, srcDevice, sizeBytes,
                              stream);
}

cudaError_t cudaMemcpy2D(...) {
    return hipErrorUnknown;
}

cudaError_t cudaMemcpy2DAsync(...) {
    return hipErrorUnknown;
}

cudaError_t cudaMemcpy2DFromArray(...) {
    return hipErrorUnknown;
}

cudaError_t cudaMemcpy2DFromArrayAsync(...) {
    return hipErrorUnknown;
}

cudaError_t cudaMemcpy2DToArray(...) {
    return hipErrorUnknown;
}

cudaError_t cudaMemcpy2DToArrayAsync(...) {
    return hipErrorUnknown;
}

cudaError_t cudaMemcpy3D(...) {
    return hipErrorUnknown;
}

cudaError_t cudaMemcpy3DAsync(...) {
    return hipErrorUnknown;
}

cudaError_t cudaMemset(void* dst, int value, size_t sizeBytes) {
    return hipMemset(dst, value, sizeBytes);
}

cudaError_t cudaMemsetAsync(void* dst, int value, size_t sizeBytes,
                            cudaStream_t stream) {
    return hipMemsetAsync(dst, value, sizeBytes, stream);
}

cudaError_t cudaMemAdvise(...) {
    return hipErrorUnknown;
}

cudaError_t cudaMemPrefetchAsync(...) {
    return hipErrorUnknown;
}

cudaError_t cudaPointerGetAttributes(cudaPointerAttributes *attributes,
                                     const void* ptr) {
    return hipPointerGetAttributes(attributes, ptr);
}


// Stream and Event
cudaError_t cudaStreamCreate(cudaStream_t *stream) {
    return hipStreamCreate(stream);
}

cudaError_t cudaStreamCreateWithFlags(cudaStream_t *stream,
                                      unsigned int flags) {
    return hipStreamCreateWithFlags(stream, flags);
}

cudaError_t cudaStreamDestroy(cudaStream_t stream) {
    return hipStreamDestroy(stream);
}

cudaError_t cudaStreamSynchronize(cudaStream_t stream) {
    return hipStreamSynchronize(stream);
}

cudaError_t cudaStreamAddCallback(cudaStream_t stream,
                                  cudaStreamCallback_t callback,
                                  void *userData, unsigned int flags) {
    return hipStreamAddCallback(stream, callback, userData, flags);
}

cudaError_t cudaStreamQuery(cudaStream_t stream) {
    return hipStreamQuery(stream);
}

cudaError_t cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event,
                                unsigned int flags) {
    return hipStreamWaitEvent(stream, event, flags);
}

cudaError_t cudaEventCreate(cudaEvent_t* event) {
    return hipEventCreate(event);
}

cudaError_t cudaEventCreateWithFlags(cudaEvent_t* event, unsigned flags) {
    return hipEventCreateWithFlags(event, flags);
}

cudaError_t cudaEventDestroy(cudaEvent_t event) {
    return hipEventDestroy(event);
}

cudaError_t cudaEventElapsedTime(float *ms, cudaEvent_t start,
                                 cudaEvent_t stop){
    return hipEventElapsedTime(ms, start, stop);
}

cudaError_t cudaEventQuery(cudaEvent_t event) {
    return hipEventQuery(event);
}

cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream) {
    return hipEventRecord(event, stream);
}

cudaError_t cudaEventSynchronize(cudaEvent_t event) {
    return hipEventSynchronize(event);
}


// Texture
cudaError_t cudaCreateTextureObject(...) {
    return cudaSuccess;
}

cudaError_t cudaDestroyTextureObject(...) {
    return cudaSuccess;
}

cudaError_t cudaGetChannelDesc(...) {
    return cudaSuccess;
}

cudaError_t cudaGetTextureObjectResourceDesc(...) {
    return cudaSuccess;
}

cudaError_t cudaGetTextureObjectTextureDesc(...) {
    return cudaSuccess;
}

cudaExtent make_cudaExtent(...) {
    cudaExtent ex = {};
    return ex;
}

cudaPitchedPtr make_cudaPitchedPtr(...) {
    cudaPitchedPtr ptr = {};
    return ptr;
}

cudaPos make_cudaPos(...) {
    cudaPos pos = {};
    return pos;
}

// Surface
cudaError_t cudaCreateSurfaceObject(cudaSurfaceObject_t* pSurfObject,
                                    const cudaResourceDesc* pResDesc) {
    return hipCreateSurfaceObject(pSurfObject, pResDesc);
}

cudaError_t cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject) {
    return hipDestroySurfaceObject(surfObject);
}

///////////////////////////////////////////////////////////////////////////////
// blas
///////////////////////////////////////////////////////////////////////////////

static hipblasOperation_t convert_hipblasOperation_t(cublasOperation_t op) {
    return static_cast<hipblasOperation_t>(static_cast<int>(op) + 111);
}

static hipblasFillMode_t convert_hipblasFillMode_t(cublasFillMode_t mode) {
    switch(static_cast<int>(mode)) {
        case 0:  // CUBLAS_FILL_MODE_LOWER
            return static_cast<hipblasFillMode_t>(122);  // HIPBLAS_FILL_MODE_LOWER
        case 1:  // CUBLAS_FILL_MODE_UPPER
            return static_cast<hipblasFillMode_t>(121);  // HIPBLAS_FILL_MODE_UPPER
        default:
            throw std::runtime_error("unrecognized mode");
    }
}

static hipblasDiagType_t convert_hipblasDiagType_t(cublasDiagType_t type) {
    return static_cast<hipblasDiagType_t>(static_cast<int>(type) + 131);
}

static hipblasSideMode_t convert_hipblasSideMode_t(cublasSideMode_t mode) {
    return static_cast<hipblasSideMode_t>(static_cast<int>(mode) + 141);
}

static hipblasDatatype_t convert_hipblasDatatype_t(cudaDataType_t type) {
    switch(static_cast<int>(type)) {
        case 0:  // CUDA_R_32F
            return static_cast<hipblasDatatype_t>(151);  // HIPBLAS_R_32F
        case 1:  // CUDA_R_64F
            return static_cast<hipblasDatatype_t>(152);  // HIPBLAS_R_64F
        case 2:  // CUDA_R_16F
            return static_cast<hipblasDatatype_t>(150);  // HIPBLAS_R_16F
        case 3:  // CUDA_R_8I
            return static_cast<hipblasDatatype_t>(160);  // HIPBLAS_R_8I
        case 4:  // CUDA_C_32F
            return static_cast<hipblasDatatype_t>(154);  // HIPBLAS_C_32F
        case 5:  // CUDA_C_64F
            return static_cast<hipblasDatatype_t>(155);  // HIPBLAS_C_64F
        case 6:  // CUDA_C_16F
            return static_cast<hipblasDatatype_t>(153);  // HIPBLAS_C_16F
        case 7:  // CUDA_C_8I
            return static_cast<hipblasDatatype_t>(164);  // HIPBLAS_C_8I
        case 8:  // CUDA_R_8U
            return static_cast<hipblasDatatype_t>(161);  // HIPBLAS_R_8U
        case 9:  // CUDA_C_8U
            return static_cast<hipblasDatatype_t>(165);  // HIPBLAS_C_8U
        default:
            throw std::runtime_error("unrecognized type");
    }
}


// Context
cublasStatus_t cublasCreate(cublasHandle_t* handle) {
    return hipblasCreate(handle);
}

cublasStatus_t cublasDestroy(cublasHandle_t handle) {
    return hipblasDestroy(handle);
}

cublasStatus_t cublasGetVersion(...) {
    // TODO(leofang): perhaps call rocblas_get_version_string?
    // or use ROCBLAS_VERSION_MAJOR/HIPBLAS_VERSION_MAJOR etc?
    return HIPBLAS_STATUS_NOT_SUPPORTED;
}

cublasStatus_t cublasSetPointerMode(cublasHandle_t handle, cublasPointerMode_t mode) {
    return hipblasSetPointerMode(handle, mode);
}

cublasStatus_t cublasGetPointerMode(cublasHandle_t handle, cublasPointerMode_t *mode) {
    return hipblasGetPointerMode(handle, mode);
}

// Stream
cublasStatus_t cublasSetStream(cublasHandle_t handle, cudaStream_t streamId) {
    return hipblasSetStream(handle, streamId);
}

cublasStatus_t cublasGetStream(cublasHandle_t handle, cudaStream_t *streamId) {
    return hipblasGetStream(handle, streamId);
}

// Math Mode
cublasStatus_t cublasSetMathMode(...) {
    return HIPBLAS_STATUS_NOT_SUPPORTED;
}

cublasStatus_t cublasGetMathMode(...) {
    return HIPBLAS_STATUS_NOT_SUPPORTED;
}

// BLAS Level 1
cublasStatus_t cublasIsamax(cublasHandle_t handle, int n, const float *x, int incx, int *result) {
    return hipblasIsamax(handle, n, x, incx, result);
}

cublasStatus_t cublasIsamin(cublasHandle_t handle, int n, float* x, int incx, int* result) {
    return hipblasIsamin(handle, n, x, incx, result);
}

cublasStatus_t cublasSasum(cublasHandle_t handle, int n, float* x, int incx, float* result) {
    return hipblasSasum(handle, n, x, incx, result);
}

cublasStatus_t cublasSaxpy(cublasHandle_t handle, int n, float* alpha, float* x, int incx, float* y, int incy) {
    return hipblasSaxpy(handle, n, alpha, x, incx, y, incy);
}

cublasStatus_t cublasDaxpy(cublasHandle_t handle, int n, double* alpha, double* x, int incx, double* y, int incy) {
    return hipblasDaxpy(handle, n, alpha, x, incx, y, incy);
}

cublasStatus_t cublasSdot(cublasHandle_t handle, int n, float* x, int incx, float* y, int incy, float* result) {
    return hipblasSdot(handle, n, x, incx, y, incy, result);
}

cublasStatus_t cublasDdot(cublasHandle_t handle, int n, double* x, int incx, double* y, int incy, double* result) {
    return hipblasDdot(handle, n, x, incx, y, incy, result);
}

cublasStatus_t cublasCdotu(cublasHandle_t handle, int n, cuComplex* x, int incx, cuComplex* y,
                           int incy, cuComplex* result) {
    return hipblasCdotu(handle, n,
                        reinterpret_cast<const hipblasComplex*>(x), incx,
                        reinterpret_cast<const hipblasComplex*>(y), incy,
                        reinterpret_cast<hipblasComplex*>(result));
}

cublasStatus_t cublasCdotc(cublasHandle_t handle, int n, cuComplex* x, int incx, cuComplex* y,
                           int incy, cuComplex* result) {
    return hipblasCdotc(handle, n,
                        reinterpret_cast<const hipblasComplex*>(x), incx,
                        reinterpret_cast<const hipblasComplex*>(y), incy,
                        reinterpret_cast<hipblasComplex*>(result));
}

cublasStatus_t cublasZdotu(cublasHandle_t handle, int n, cuDoubleComplex* x, int incx, cuDoubleComplex* y,
                           int incy, cuDoubleComplex* result) {
    return hipblasZdotu(handle, n,
                        reinterpret_cast<const hipblasDoubleComplex*>(x), incx,
                        reinterpret_cast<const hipblasDoubleComplex*>(y), incy,
                        reinterpret_cast<hipblasDoubleComplex*>(result));
}

cublasStatus_t cublasZdotc(cublasHandle_t handle, int n, cuDoubleComplex* x, int incx, cuDoubleComplex* y,
                           int incy, cuDoubleComplex* result) {
    return hipblasZdotc(handle, n,
                        reinterpret_cast<const hipblasDoubleComplex*>(x), incx,
                        reinterpret_cast<const hipblasDoubleComplex*>(y), incy,
                        reinterpret_cast<hipblasDoubleComplex*>(result));
}

cublasStatus_t cublasSnrm2(cublasHandle_t handle, int n, float* x, int incx, float* result) {
    return hipblasSnrm2(handle, n, x, incx, result);
}

cublasStatus_t cublasSscal(cublasHandle_t handle, int n, float* alpha, float* x, int incx) {
    return hipblasSscal(handle, n, alpha, x, incx);
}


// BLAS Level 2
cublasStatus_t cublasSgemv(cublasHandle_t handle, cublasOperation_t trans, int m, int n, float* alpha,
                           float* A, int lda, float* x, int incx, float* beta,
                           float* y, int incy) {
    return hipblasSgemv(handle, convert_hipblasOperation_t(trans), m, n,
                        alpha, A, lda, x, incx, beta, y, incy);
}

cublasStatus_t cublasDgemv(cublasHandle_t handle, cublasOperation_t trans, int m, int n, double* alpha,
                           double* A, int lda, double* x, int incx, double* beta,
                           double* y, int incy) {
    return hipblasDgemv(handle, convert_hipblasOperation_t(trans), m, n,
                        alpha, A, lda, x, incx, beta, y, incy);
}

cublasStatus_t cublasCgemv(cublasHandle_t handle, cublasOperation_t trans, int m, int n, cuComplex* alpha,
                           cuComplex* A, int lda, cuComplex* x, int incx, cuComplex* beta,
                           cuComplex* y, int incy) {
    return hipblasCgemv(handle, convert_hipblasOperation_t(trans), m, n,
                        reinterpret_cast<const hipblasComplex*>(alpha),
                        reinterpret_cast<const hipblasComplex*>(A), lda,
                        reinterpret_cast<const hipblasComplex*>(x), incx,
                        reinterpret_cast<const hipblasComplex*>(beta),
                        reinterpret_cast<hipblasComplex*>(y), incy);
}

cublasStatus_t cublasZgemv(cublasHandle_t handle, cublasOperation_t trans, int m, int n, cuDoubleComplex* alpha,
                           cuDoubleComplex* A, int lda, cuDoubleComplex* x, int incx,
                           cuDoubleComplex* beta, cuDoubleComplex* y, int incy) {
    return hipblasZgemv(handle, convert_hipblasOperation_t(trans), m, n,
                        reinterpret_cast<const hipblasDoubleComplex*>(alpha),
                        reinterpret_cast<const hipblasDoubleComplex*>(A), lda,
                        reinterpret_cast<const hipblasDoubleComplex*>(x), incx,
                        reinterpret_cast<const hipblasDoubleComplex*>(beta),
                        reinterpret_cast<hipblasDoubleComplex*>(y), incy);
}

cublasStatus_t cublasSger(cublasHandle_t handle, int m, int n, float* alpha, float* x, int incx,
                          float* y, int incy, float* A, int lda) {
    return hipblasSger(handle, m, n, alpha, x, incx, y, incy, A, lda);
}

cublasStatus_t cublasDger(cublasHandle_t handle, int m, int n, double* alpha, double* x,
                          int incx, double* y, int incy, double* A, int lda) {
    return hipblasDger(handle, m, n, alpha, x, incx, y, incy, A, lda);
}

cublasStatus_t cublasCgeru(cublasHandle_t handle, int m, int n, cuComplex* alpha, cuComplex* x,
                          int incx, cuComplex* y, int incy, cuComplex* A, int lda) {
    return hipblasCgeru(handle, m, n,
                        reinterpret_cast<const hipblasComplex*>(alpha),
                        reinterpret_cast<const hipblasComplex*>(x), incx,
                        reinterpret_cast<const hipblasComplex*>(y), incy,
                        reinterpret_cast<hipblasComplex*>(A), lda);
}

cublasStatus_t cublasCgerc(cublasHandle_t handle, int m, int n, cuComplex* alpha, cuComplex* x,
                          int incx, cuComplex* y, int incy, cuComplex* A, int lda) {
    return hipblasCgerc(handle, m, n,
                        reinterpret_cast<const hipblasComplex*>(alpha),
                        reinterpret_cast<const hipblasComplex*>(x), incx,
                        reinterpret_cast<const hipblasComplex*>(y), incy,
                        reinterpret_cast<hipblasComplex*>(A), lda);
}

cublasStatus_t cublasZgeru(cublasHandle_t handle, int m, int n, cuDoubleComplex* alpha,
                           cuDoubleComplex* x, int incx, cuDoubleComplex* y, int incy,
                           cuDoubleComplex* A, int lda) {
    return hipblasZgeru(handle, m, n,
                        reinterpret_cast<const hipblasDoubleComplex*>(alpha),
                        reinterpret_cast<const hipblasDoubleComplex*>(x), incx,
                        reinterpret_cast<const hipblasDoubleComplex*>(y), incy,
                        reinterpret_cast<hipblasDoubleComplex*>(A), lda);
}

cublasStatus_t cublasZgerc(cublasHandle_t handle, int m, int n, cuDoubleComplex* alpha,
                           cuDoubleComplex* x, int incx, cuDoubleComplex* y, int incy,
                           cuDoubleComplex* A, int lda) {
    return hipblasZgerc(handle, m, n,
                        reinterpret_cast<const hipblasDoubleComplex*>(alpha),
                        reinterpret_cast<const hipblasDoubleComplex*>(x), incx,
                        reinterpret_cast<const hipblasDoubleComplex*>(y), incy,
                        reinterpret_cast<hipblasDoubleComplex*>(A), lda);
}


// BLAS Level 3
cublasStatus_t cublasSgemm(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb,
                            int m, int n, int k, const float *alpha,
                            const float *A, int lda,
                            const float *B, int ldb,
                            const float *beta,
                            float *C, int ldc) {
    return hipblasSgemm(handle, convert_hipblasOperation_t(transa), convert_hipblasOperation_t(transb), m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}

cublasStatus_t cublasDgemm(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb,
                           int m, int n, int k, const double *alpha,
                           const double *A, int lda,
                           const double *B, int ldb,
                           const double *beta, double *C, int ldc) {
    return hipblasDgemm(handle, convert_hipblasOperation_t(transa), convert_hipblasOperation_t(transb), m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
}


cublasStatus_t cublasCgemm(
        cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb,
        int m, int n, int k, const cuComplex *alpha,
        const cuComplex *A, int lda,
        const cuComplex *B, int ldb,
        const cuComplex *beta, cuComplex *C, int ldc)
{
    return hipblasCgemm(
        handle, convert_hipblasOperation_t(transa), convert_hipblasOperation_t(transb),
        m, n, k,
        reinterpret_cast<const hipblasComplex *>(alpha),
        reinterpret_cast<const hipblasComplex *>(A), lda,
        reinterpret_cast<const hipblasComplex *>(B), ldb,
        reinterpret_cast<const hipblasComplex *>(beta),
        reinterpret_cast<hipblasComplex *>(C), ldc);
}

cublasStatus_t cublasZgemm(
        cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb,
        int m, int n, int k, const cuDoubleComplex *alpha,
        const cuDoubleComplex *A, int lda,
        const cuDoubleComplex *B, int ldb,
        const cuDoubleComplex *beta, cuDoubleComplex *C, int ldc)
{
    return hipblasZgemm(
        handle, convert_hipblasOperation_t(transa), convert_hipblasOperation_t(transb),
        m, n, k,
        reinterpret_cast<const hipblasDoubleComplex *>(alpha),
        reinterpret_cast<const hipblasDoubleComplex *>(A), lda,
        reinterpret_cast<const hipblasDoubleComplex *>(B), ldb,
        reinterpret_cast<const hipblasDoubleComplex *>(beta),
        reinterpret_cast<hipblasDoubleComplex *>(C), ldc);
}

cublasStatus_t cublasSgemmBatched(
        cublasHandle_t handle,
        cublasOperation_t transa, cublasOperation_t transb,
        int m, int n, int k,  const float *alpha,
        const float *A[], int lda,
        const float *B[], int ldb,
        const float *beta,
        float *C[], int ldc, int batchCount) {
    return hipblasSgemmBatched(handle, convert_hipblasOperation_t(transa), convert_hipblasOperation_t(transb), m, n, k, alpha, A, lda, B, ldb, beta, C, ldc, batchCount);
}

cublasStatus_t cublasDgemmBatched(
        cublasHandle_t handle,
        cublasOperation_t transa, cublasOperation_t transb,
        int m, int n, int k,  const double *alpha,
        const double *A[], int lda,
        const double *B[], int ldb,
        const double *beta,
        double *C[], int ldc, int batchCount) {
    return hipblasDgemmBatched(handle, convert_hipblasOperation_t(transa), convert_hipblasOperation_t(transb), m, n, k, alpha, A, lda, B, ldb, beta, C, ldc, batchCount);
}

cublasStatus_t cublasCgemmBatched(
        cublasHandle_t handle,
        cublasOperation_t transa, cublasOperation_t transb,
        int m, int n, int k,  const cuComplex *alpha,
        const cuComplex *A[], int lda,
        const cuComplex *B[], int ldb,
        const cuComplex *beta,
        cuComplex *C[], int ldc, int batchCount) {
    return hipblasCgemmBatched(
        handle, convert_hipblasOperation_t(transa), convert_hipblasOperation_t(transb),
        m, n, k,
        reinterpret_cast<const hipblasComplex*>(alpha),
        reinterpret_cast<const hipblasComplex**>(A), lda,
        reinterpret_cast<const hipblasComplex**>(B), ldb,
        reinterpret_cast<const hipblasComplex*>(beta),
        reinterpret_cast<hipblasComplex**>(C), ldc, batchCount);
}

cublasStatus_t cublasZgemmBatched(
        cublasHandle_t handle,
        cublasOperation_t transa, cublasOperation_t transb,
        int m, int n, int k,  const cuDoubleComplex *alpha,
        const cuDoubleComplex *A[], int lda,
        const cuDoubleComplex *B[], int ldb,
        const cuDoubleComplex *beta,
        cuDoubleComplex *C[], int ldc, int batchCount) {
    return hipblasZgemmBatched(
        handle, convert_hipblasOperation_t(transa), convert_hipblasOperation_t(transb),
        m, n, k,
        reinterpret_cast<const hipblasDoubleComplex*>(alpha),
        reinterpret_cast<const hipblasDoubleComplex**>(A), lda,
        reinterpret_cast<const hipblasDoubleComplex**>(B), ldb,
        reinterpret_cast<const hipblasDoubleComplex*>(beta),
        reinterpret_cast<hipblasDoubleComplex**>(C), ldc, batchCount);
}

cublasStatus_t cublasSgemmEx(
        cublasHandle_t handle,
        cublasOperation_t transa, cublasOperation_t transb,
        int m, int n, int k,
        const float *alpha, const void *A, cudaDataType_t Atype, int lda,
        const void *B, cudaDataType_t Btype, int ldb, const float *beta,
        void *C, cudaDataType_t Ctype, int ldc) {
    if (Atype != 0 || Btype != 0 || Ctype != 0) {
        return HIPBLAS_STATUS_NOT_SUPPORTED;
    }
    return hipblasSgemm(
        handle,
        convert_hipblasOperation_t(transa), convert_hipblasOperation_t(transb),
        m, n, k,
        alpha, static_cast<const float*>(A), lda,
        static_cast<const float*>(B), ldb, beta,
        static_cast<float*>(C), ldc);
}

cublasStatus_t cublasGemmEx(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb,
                            int m, int n, int k, const void *alpha,
                            const void *A, cudaDataType_t Atype, int lda,
                            const void *B, cudaDataType_t Btype, int ldb,
                            const void *beta,
                            void *C, cudaDataType_t Ctype, int ldc,
                            cudaDataType_t computetype, cublasGemmAlgo_t algo) {
    if (algo != -1) { // must be CUBLAS_GEMM_DEFAULT
        return HIPBLAS_STATUS_NOT_SUPPORTED;
    }
    return hipblasGemmEx(handle, convert_hipblasOperation_t(transa), convert_hipblasOperation_t(transb),
                         m, n, k, alpha,
                         A, convert_hipblasDatatype_t(Atype), lda,
                         B, convert_hipblasDatatype_t(Btype), ldb,
                         beta,
                         C, convert_hipblasDatatype_t(Ctype), ldc,
                         convert_hipblasDatatype_t(computetype),
                         static_cast<hipblasGemmAlgo_t>(160));  // HIPBLAS_GEMM_DEFAULT
}

cublasStatus_t cublasGemmEx_v11(...) {
    return HIPBLAS_STATUS_NOT_SUPPORTED;
}

cublasStatus_t cublasStrsm(cublasHandle_t handle, cublasSideMode_t size, cublasFillMode_t uplo, cublasOperation_t trans,
                           cublasDiagType_t diag, int m, int n, const float* alpha,
                           const float* A, int lda, float* B, int ldb) {
    return hipblasStrsm(handle,
                        convert_hipblasSideMode_t(size),
                        convert_hipblasFillMode_t(uplo),
                        convert_hipblasOperation_t(trans),
                        convert_hipblasDiagType_t(diag),
                        m, n, alpha, const_cast<float*>(A), lda, B, ldb);
}

cublasStatus_t cublasDtrsm(cublasHandle_t handle, cublasSideMode_t size, cublasFillMode_t uplo, cublasOperation_t trans,
                           cublasDiagType_t diag, int m, int n, const double* alpha,
                           const double* A, int lda, double* B, int ldb) {
    return hipblasDtrsm(handle,
                        convert_hipblasSideMode_t(size),
                        convert_hipblasFillMode_t(uplo),
                        convert_hipblasOperation_t(trans),
                        convert_hipblasDiagType_t(diag),
                        m, n, alpha, const_cast<double*>(A), lda, B, ldb);
}

cublasStatus_t cublasCtrsm(cublasHandle_t handle, cublasSideMode_t size, cublasFillMode_t uplo, cublasOperation_t trans,
                           cublasDiagType_t diag, int m, int n, const cuComplex* alpha,
                           const cuComplex* A, int lda, cuComplex* B, int ldb) {
    return hipblasCtrsm(handle,
                        convert_hipblasSideMode_t(size),
                        convert_hipblasFillMode_t(uplo),
                        convert_hipblasOperation_t(trans),
                        convert_hipblasDiagType_t(diag),
                        m, n,
                        reinterpret_cast<const hipblasComplex*>(alpha),
                        reinterpret_cast<hipblasComplex*>(const_cast<cuComplex*>(A)), lda,
                        reinterpret_cast<hipblasComplex*>(B), ldb);
}

cublasStatus_t cublasZtrsm(cublasHandle_t handle, cublasSideMode_t size, cublasFillMode_t uplo, cublasOperation_t trans,
                           cublasDiagType_t diag, int m, int n, const cuDoubleComplex* alpha,
                           const cuDoubleComplex* A, int lda, cuDoubleComplex* B, int ldb) {
    return hipblasZtrsm(handle,
                        convert_hipblasSideMode_t(size),
                        convert_hipblasFillMode_t(uplo),
                        convert_hipblasOperation_t(trans),
                        convert_hipblasDiagType_t(diag),
                        m, n,
                        reinterpret_cast<const hipblasDoubleComplex*>(alpha),
                        reinterpret_cast<hipblasDoubleComplex*>(const_cast<cuDoubleComplex*>(A)), lda,
                        reinterpret_cast<hipblasDoubleComplex*>(B), ldb);
}


// BLAS extension
cublasStatus_t cublasSgeam(
        cublasHandle_t handle,
        cublasOperation_t transa, cublasOperation_t transb,
        int m, int n, const float *alpha,
        const float *A, int lda, const float *beta, const float *B, int ldb,
        float *C, int ldc) {
    return hipblasSgeam(handle, convert_hipblasOperation_t(transa), convert_hipblasOperation_t(transb), m, n, alpha, A, lda, beta, B, ldb, C, ldc);
}

cublasStatus_t cublasDgeam(
        cublasHandle_t handle,
        cublasOperation_t transa, cublasOperation_t transb,
        int m, int n, const double *alpha,
        const double *A, int lda, const double *beta, const double *B, int ldb,
        double *C, int ldc) {
    return hipblasDgeam(handle, convert_hipblasOperation_t(transa), convert_hipblasOperation_t(transb), m, n, alpha, A, lda, beta, B, ldb, C, ldc);
}

cublasStatus_t cublasSdgmm(...) {
    return HIPBLAS_STATUS_NOT_SUPPORTED;
}

cublasStatus_t cublasSgetrfBatched(...) {
    return HIPBLAS_STATUS_NOT_SUPPORTED;
}

cublasStatus_t cublasDgetrfBatched(...) {
    return HIPBLAS_STATUS_NOT_SUPPORTED;
}

cublasStatus_t cublasCgetrfBatched(...) {
    return HIPBLAS_STATUS_NOT_SUPPORTED;
}

cublasStatus_t cublasZgetrfBatched(...) {
    return HIPBLAS_STATUS_NOT_SUPPORTED;
}

cublasStatus_t cublasSgetriBatched(...) {
    return HIPBLAS_STATUS_NOT_SUPPORTED;
}

cublasStatus_t cublasDgetriBatched(...) {
    return HIPBLAS_STATUS_NOT_SUPPORTED;
}

cublasStatus_t cublasCgetriBatched(...) {
    return HIPBLAS_STATUS_NOT_SUPPORTED;
}

cublasStatus_t cublasZgetriBatched(...) {
    return HIPBLAS_STATUS_NOT_SUPPORTED;
}

cublasStatus_t cublasSgemmStridedBatched(
        cublasHandle_t handle,
        cublasOperation_t transa, cublasOperation_t transb,
        int m, int n, int k, const float *alpha,
        const float *A, int lda, long long bsa,
        const float *B, int ldb, long long bsb, const float *beta,
        float *C, int ldc, long long bsc, int batchCount) {
    return hipblasSgemmStridedBatched(
        handle,
        convert_hipblasOperation_t(transa), convert_hipblasOperation_t(transb),
        m, n, k, alpha,  A, lda, bsa, B, ldb, bsb, beta, C, ldc, bsc,
        batchCount);
}

cublasStatus_t cublasDgemmStridedBatched(
        cublasHandle_t handle,
        cublasOperation_t transa, cublasOperation_t transb,
        int m, int n, int k, const double *alpha,
        const double *A, int lda, long long bsa,
        const double *B, int ldb, long long bsb, const double *beta,
        double *C, int ldc, long long bsc, int batchCount) {
    return hipblasDgemmStridedBatched(
        handle,
        convert_hipblasOperation_t(transa), convert_hipblasOperation_t(transb),
        m, n, k, alpha,  A, lda, bsa, B, ldb, bsb, beta, C, ldc, bsc,
        batchCount);
}

cublasStatus_t cublasCgemmStridedBatched(
        cublasHandle_t handle,
        cublasOperation_t transa, cublasOperation_t transb,
        int m, int n, int k, const cuComplex *alpha,
        const cuComplex *A, int lda, long long bsa,
        const cuComplex *B, int ldb, long long bsb,
        const cuComplex *beta,
        cuComplex *C, int ldc, long long bsc, int batchCount) {
    return hipblasCgemmStridedBatched(
        handle,
        convert_hipblasOperation_t(transa), convert_hipblasOperation_t(transb),
        m, n, k,
        reinterpret_cast<const hipblasComplex *>(alpha),
        reinterpret_cast<const hipblasComplex *>(A), lda, bsa,
        reinterpret_cast<const hipblasComplex *>(B), ldb, bsb,
        reinterpret_cast<const hipblasComplex *>(beta),
        reinterpret_cast<hipblasComplex *>(C), ldc, bsc,
        batchCount);
}

cublasStatus_t cublasZgemmStridedBatched(
        cublasHandle_t handle,
        cublasOperation_t transa, cublasOperation_t transb,
        int m, int n, int k, const cuDoubleComplex *alpha,
        const cuDoubleComplex *A, int lda, long long bsa,
        const cuDoubleComplex *B, int ldb, long long bsb,
        const cuDoubleComplex *beta,
        cuDoubleComplex *C, int ldc, long long bsc, int batchCount) {
    return hipblasZgemmStridedBatched(
        handle,
        convert_hipblasOperation_t(transa), convert_hipblasOperation_t(transb),
        m, n, k,
        reinterpret_cast<const hipblasDoubleComplex *>(alpha),
        reinterpret_cast<const hipblasDoubleComplex *>(A), lda, bsa,
        reinterpret_cast<const hipblasDoubleComplex *>(B), ldb, bsb,
        reinterpret_cast<const hipblasDoubleComplex *>(beta),
        reinterpret_cast<hipblasDoubleComplex *>(C), ldc, bsc,
        batchCount);
}

cublasStatus_t cublasStrttp(...) {
    return HIPBLAS_STATUS_NOT_SUPPORTED;
}

cublasStatus_t cublasDtrttp(...) {
    return HIPBLAS_STATUS_NOT_SUPPORTED;
}

cublasStatus_t cublasStpttr(...) {
    return HIPBLAS_STATUS_NOT_SUPPORTED;
}

cublasStatus_t cublasDtpttr(...) {
    return HIPBLAS_STATUS_NOT_SUPPORTED;
}

///////////////////////////////////////////////////////////////////////////////
// rand
///////////////////////////////////////////////////////////////////////////////

typedef enum {} curandOrdering_t;
typedef hiprandRngType curandRngType_t;
typedef hiprandStatus_t curandStatus_t;

typedef hiprandGenerator_t curandGenerator_t;

curandRngType_t convert_hiprandRngType(curandRngType_t t) {
    switch(static_cast<int>(t)) {
    case 100: return HIPRAND_RNG_PSEUDO_DEFAULT;
    case 101: return HIPRAND_RNG_PSEUDO_XORWOW;
    case 121: return HIPRAND_RNG_PSEUDO_MRG32K3A;
    case 141: return HIPRAND_RNG_PSEUDO_MTGP32;
    case 142: return HIPRAND_RNG_PSEUDO_MT19937;
    case 161: return HIPRAND_RNG_PSEUDO_PHILOX4_32_10;
    case 200: return HIPRAND_RNG_QUASI_DEFAULT;
    case 201: return HIPRAND_RNG_QUASI_SOBOL32;
    case 202: return HIPRAND_RNG_QUASI_SCRAMBLED_SOBOL32;
    case 203: return HIPRAND_RNG_QUASI_SOBOL64;
    case 204: return HIPRAND_RNG_QUASI_SCRAMBLED_SOBOL64;
    }
    return HIPRAND_RNG_TEST;
}

// curandGenerator_t
curandStatus_t curandCreateGenerator(curandGenerator_t *generator, curandRngType_t rng_type) {
    rng_type = convert_hiprandRngType(rng_type);
    return hiprandCreateGenerator(generator, rng_type);
}

curandStatus_t curandDestroyGenerator(curandGenerator_t generator) {
    return hiprandDestroyGenerator(generator);
}

curandStatus_t curandGetVersion(int *version) {
    return hiprandGetVersion(version);
}


// Stream
curandStatus_t curandSetStream(curandGenerator_t generator, cudaStream_t stream) {
    return hiprandSetStream(generator, stream);
}

curandStatus_t curandSetPseudoRandomGeneratorSeed(curandGenerator_t generator, unsigned long long seed) {
    return hiprandSetPseudoRandomGeneratorSeed(generator, seed);
}

curandStatus_t curandSetGeneratorOffset(curandGenerator_t generator, unsigned long long offset) {
    return hiprandSetGeneratorOffset(generator, offset);
}

curandStatus_t curandSetGeneratorOrdering(...) {
    return HIPRAND_STATUS_NOT_IMPLEMENTED;
}


// Generation functions
curandStatus_t curandGenerate(curandGenerator_t generator, unsigned int *output_data, size_t n) {
    return hiprandGenerate(generator, output_data, n);
}

curandStatus_t curandGenerateLongLong(...) {
    return HIPRAND_STATUS_NOT_IMPLEMENTED;
}

curandStatus_t curandGenerateUniform(curandGenerator_t generator, float *output_data, size_t n) {
    return hiprandGenerateUniform(generator, output_data, n);
}

curandStatus_t curandGenerateUniformDouble(curandGenerator_t generator, double *output_data, size_t n) {
    return hiprandGenerateUniformDouble(generator, output_data, n);
}

curandStatus_t curandGenerateNormal(curandGenerator_t generator, float *output_data, size_t n, float mean, float stddev) {
    return hiprandGenerateNormal(generator, output_data, n, mean, stddev);
}

curandStatus_t curandGenerateNormalDouble(curandGenerator_t generator, double *output_data, size_t n, double mean, double stddev) {
    return hiprandGenerateNormalDouble(generator, output_data, n, mean, stddev);
}

curandStatus_t curandGenerateLogNormal(curandGenerator_t generator, float *output_data, size_t n, float mean, float stddev) {
    return hiprandGenerateLogNormal(generator, output_data, n, mean, stddev);
}

curandStatus_t curandGenerateLogNormalDouble(curandGenerator_t generator, double *output_data, size_t n, double mean, double stddev) {
    return hiprandGenerateLogNormalDouble(generator, output_data, n, mean, stddev);
}

curandStatus_t curandGeneratePoisson(curandGenerator_t generator, unsigned int *output_data, size_t n, double lambda) {
    return hiprandGeneratePoisson(generator, output_data, n, lambda);
}

///////////////////////////////////////////////////////////////////////////////
// cuda_profiler_api.h
///////////////////////////////////////////////////////////////////////////////

typedef enum {} cudaOutputMode_t;

cudaError_t cudaProfilerInitialize(...) {
  return cudaSuccess;
}

cudaError_t cudaProfilerStart() {
  return hipProfilerStart();
}

cudaError_t cudaProfilerStop() {
  return hipProfilerStop();
}


///////////////////////////////////////////////////////////////////////////////
// roctx
///////////////////////////////////////////////////////////////////////////////

void nvtxMarkA(const char* message) {
    roctxMarkA(message);
}

int nvtxRangePushA(const char* message) {
    return roctxRangePushA(message);
}

int nvtxRangePop() {
    return roctxRangePop();
}

} // extern "C"

#endif // #ifndef INCLUDE_GUARD_CUPY_HIP_H
