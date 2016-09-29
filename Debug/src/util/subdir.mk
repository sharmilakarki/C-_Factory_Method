################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/util/Music.cpp \
../src/util/Pop.cpp \
../src/util/Reggae.cpp \
../src/util/Rock.cpp 

OBJS += \
./src/util/Music.o \
./src/util/Pop.o \
./src/util/Reggae.o \
./src/util/Rock.o 

CPP_DEPS += \
./src/util/Music.d \
./src/util/Pop.d \
./src/util/Reggae.d \
./src/util/Rock.d 


# Each subdirectory must supply rules for building sources it contributes
src/util/%.o: ../src/util/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


