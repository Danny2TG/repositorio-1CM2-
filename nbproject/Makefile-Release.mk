#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Hola_mundo.o \
	${OBJECTDIR}/Mayor_de_3_números.o \
	${OBJECTDIR}/Mayor_de_4_números.o \
	${OBJECTDIR}/Precedencia_de_operadores.o \
	${OBJECTDIR}/Serie_Fibonacci.o \
	${OBJECTDIR}/Tablas_de_multiplicar_for.o \
	${OBJECTDIR}/Tablas_de_multiplicar_while.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/repositorio_1cm2.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/repositorio_1cm2.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/repositorio_1cm2 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Hola_mundo.o: Hola_mundo.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Hola_mundo.o Hola_mundo.c

${OBJECTDIR}/Mayor_de_3_números.o: Mayor_de_3_números.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Mayor_de_3_números.o Mayor_de_3_números.c

${OBJECTDIR}/Mayor_de_4_números.o: Mayor_de_4_números.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Mayor_de_4_números.o Mayor_de_4_números.c

${OBJECTDIR}/Precedencia_de_operadores.o: Precedencia_de_operadores.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Precedencia_de_operadores.o Precedencia_de_operadores.c

${OBJECTDIR}/Serie_Fibonacci.o: Serie_Fibonacci.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Serie_Fibonacci.o Serie_Fibonacci.c

${OBJECTDIR}/Tablas_de_multiplicar_for.o: Tablas_de_multiplicar_for.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tablas_de_multiplicar_for.o Tablas_de_multiplicar_for.c

${OBJECTDIR}/Tablas_de_multiplicar_while.o: Tablas_de_multiplicar_while.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tablas_de_multiplicar_while.o Tablas_de_multiplicar_while.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
