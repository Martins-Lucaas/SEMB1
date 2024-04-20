################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../App/PWM.c \
../App/digital_io.c \
../App/timer.c 

OBJS += \
./App/PWM.o \
./App/digital_io.o \
./App/timer.o 

C_DEPS += \
./App/PWM.d \
./App/digital_io.d \
./App/timer.d 


# Each subdirectory must supply rules for building sources it contributes
App/%.o App/%.su App/%.cyclo: ../App/%.c App/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../App -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-App

clean-App:
	-$(RM) ./App/PWM.cyclo ./App/PWM.d ./App/PWM.o ./App/PWM.su ./App/digital_io.cyclo ./App/digital_io.d ./App/digital_io.o ./App/digital_io.su ./App/timer.cyclo ./App/timer.d ./App/timer.o ./App/timer.su

.PHONY: clean-App

