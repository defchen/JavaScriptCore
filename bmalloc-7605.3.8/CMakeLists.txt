set_property(DIRECTORY . PROPERTY FOLDER "bmalloc")

set(bmalloc_INCLUDE_DIRECTORIES
    "${BMALLOC_DIR}"
)

set(bmalloc_SOURCES
    bmalloc/AllIsoHeaps.cpp
    bmalloc/Allocator.cpp
    bmalloc/AvailableMemory.cpp
    bmalloc/Cache.cpp
    bmalloc/CryptoRandom.cpp
    bmalloc/Deallocator.cpp
    bmalloc/DebugHeap.cpp
    bmalloc/Environment.cpp
    bmalloc/FreeList.cpp
    bmalloc/Gigacage.cpp
    bmalloc/Heap.cpp
    bmalloc/HeapKind.cpp
    bmalloc/IsoHeapImpl.cpp
    bmalloc/IsoPage.cpp
    bmalloc/IsoTLS.cpp
    bmalloc/IsoTLSEntry.cpp
    bmalloc/IsoTLSLayout.cpp
    bmalloc/LargeMap.cpp
    bmalloc/Logging.cpp
    bmalloc/ObjectType.cpp
    bmalloc/Scavenger.cpp
    bmalloc/StaticMutex.cpp
    bmalloc/VMHeap.cpp
    bmalloc/bmalloc.cpp
    bmalloc/mbmalloc.cpp
)

if (CMAKE_SYSTEM_NAME MATCHES "Darwin")
    list(APPEND bmalloc_SOURCES
        bmalloc/ProcessCheck.mm
        bmalloc/Zone.cpp
    )
endif ()

set(bmalloc_LIBRARIES
    ${CMAKE_DL_LIBS}
)

WEBKIT_WRAP_SOURCELIST(${bmalloc_SOURCES})
include_directories(${bmalloc_INCLUDE_DIRECTORIES})
add_library(bmalloc STATIC ${bmalloc_SOURCES})
target_link_libraries(bmalloc ${bmalloc_LIBRARIES})
set_target_properties(bmalloc PROPERTIES COMPILE_DEFINITIONS "BUILDING_bmalloc")

add_library(mbmalloc SHARED bmalloc/mbmalloc.cpp)
target_link_libraries(mbmalloc bmalloc ${CMAKE_THREAD_LIBS_INIT} ${bmalloc_LIBRARIES})
set_target_properties(mbmalloc PROPERTIES COMPILE_DEFINITIONS "BUILDING_mbmalloc")
