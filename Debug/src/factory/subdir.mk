################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/factory/MusicFactory.cpp 

OBJS += \
./src/factory/MusicFactory.o 

CPP_DEPS += \
./src/factory/MusicFactory.d 


# Each subdirectory must supply rules for building sources it contributes
src/factory/%.o: ../src/factory/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


