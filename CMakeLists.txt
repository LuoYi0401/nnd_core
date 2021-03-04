project(nndCore)

aux_source_directory(. CORE_SRCS)

add_library(${PROJECT_NAME} SHARED
	${CORE_SRCS})
