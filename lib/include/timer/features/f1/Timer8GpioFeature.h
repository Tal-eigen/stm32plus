/*
 * This file is a part of the open source stm32plus library.
 * Copyright (c) 2011,2012 Andy Brown <www.andybrown.me.uk>
 * Please see website for licensing terms.
 *
 * THIS IS AN AUTOMATICALLY GENERATED FILE - DO NOT EDIT!
 */

#pragma once

// ensure the MCU series is correct
#ifndef STM32PLUS_F1
#error This class can only be used with the STM32F1 series
#endif

namespace stm32plus {

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM8_ETR {

    /**
     * Initialise GPIO pins for this timer GPIO mode
     * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
     */
 
    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOA,nullptr,nullptr,nullptr };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_0,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::INPUT,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER8>::GPIO_SPEED,Gpio::PUPD_NONE); 
    }
  };

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM8_BKIN {

    /**
     * Initialise GPIO pins for this timer GPIO mode
     * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
     */
 
    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOA,nullptr,nullptr,nullptr };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_6,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::INPUT,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER8>::GPIO_SPEED,Gpio::PUPD_NONE); 
    }
  };

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM8_CH1N {

    /**
     * Initialise GPIO pins for this timer GPIO mode
     * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
     */
 
    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOA,nullptr,nullptr,nullptr };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_7,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER8>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER8,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF); 
    }
  };

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM8_CH2N {

    /**
     * Initialise GPIO pins for this timer GPIO mode
     * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
     */
 
    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOB,nullptr,nullptr,nullptr };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_0,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER8>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER8,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF); 
    }
  };

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM8_CH3N {

    /**
     * Initialise GPIO pins for this timer GPIO mode
     * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
     */
 
    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOB,nullptr,nullptr,nullptr };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_1,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER8>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER8,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF); 
    }
  };

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM8_CH1_IN {

    /**
     * Initialise GPIO pins for this timer GPIO mode
     * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
     */
 
    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOC,nullptr,nullptr,nullptr };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_6,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::INPUT,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER8>::GPIO_SPEED,Gpio::PUPD_NONE); 
    }
  };

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM8_CH1_OUT {

    /**
     * Initialise GPIO pins for this timer GPIO mode
     * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
     */
 
    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOC,nullptr,nullptr,nullptr };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_6,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER8>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER8,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF); 
    }
  };

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM8_CH2_IN {

    /**
     * Initialise GPIO pins for this timer GPIO mode
     * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
     */
 
    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOC,nullptr,nullptr,nullptr };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_7,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::INPUT,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER8>::GPIO_SPEED,Gpio::PUPD_NONE); 
    }
  };

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM8_CH2_OUT {

    /**
     * Initialise GPIO pins for this timer GPIO mode
     * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
     */
 
    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOC,nullptr,nullptr,nullptr };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_7,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER8>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER8,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF); 
    }
  };

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM8_CH3_IN {

    /**
     * Initialise GPIO pins for this timer GPIO mode
     * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
     */
 
    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOC,nullptr,nullptr,nullptr };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_8,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::INPUT,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER8>::GPIO_SPEED,Gpio::PUPD_NONE); 
    }
  };

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM8_CH3_OUT {

    /**
     * Initialise GPIO pins for this timer GPIO mode
     * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
     */
 
    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOC,nullptr,nullptr,nullptr };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_8,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER8>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER8,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF); 
    }
  };

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM8_CH4_IN {

    /**
     * Initialise GPIO pins for this timer GPIO mode
     * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
     */
 
    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOC,nullptr,nullptr,nullptr };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_9,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::INPUT,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER8>::GPIO_SPEED,Gpio::PUPD_NONE); 
    }
  };

  template<TimerGpioRemapLevel TRemapLevel>
  struct TIM8_CH4_OUT {

    /**
     * Initialise GPIO pins for this timer GPIO mode
     * @tparam TRemapLevel The remap level (none, partial1, partial2, full)
     */
 
    static void initialise() {

      static constexpr GPIO_TypeDef *const ports[4]={ GPIOC,nullptr,nullptr,nullptr };
      static constexpr const uint16_t pins[4]={ GPIO_Pin_9,0,0,0 };

      GpioPinInitialiser::initialise(ports[TRemapLevel],pins[TRemapLevel],Gpio::ALTERNATE_FUNCTION,(GPIOSpeed_TypeDef)PeripheralTraits<PERIPHERAL_TIMER8>::GPIO_SPEED,Gpio::PUPD_NONE,Gpio::PUSH_PULL,GpioAlternateFunctionMapper<PERIPHERAL_TIMER8,(uint32_t)ports[TRemapLevel],pins[TRemapLevel]>::GPIO_AF); 
    }
  };

  /**
   * Timer feature to enable any number of the GPIO alternate function outputs.
   * All remap levels are supported. An example declaration could be:
   *
   * Timer8GpioFeature<REMAP_NONE,TIM8_CH1_OUT>
   */

  template<TimerGpioRemapLevel TRemapLevel,template<TimerGpioRemapLevel> class TF0=NullTimerGpio,template<TimerGpioRemapLevel> class TF1=NullTimerGpio,template<TimerGpioRemapLevel> class TF2=NullTimerGpio,template<TimerGpioRemapLevel> class TF3=NullTimerGpio,template<TimerGpioRemapLevel> class TF4=NullTimerGpio,template<TimerGpioRemapLevel> class TF5=NullTimerGpio,template<TimerGpioRemapLevel> class TF6=NullTimerGpio,template<TimerGpioRemapLevel> class TF7=NullTimerGpio,template<TimerGpioRemapLevel> class TF8=NullTimerGpio>
  struct Timer8GpioFeature;


  template<template<TimerGpioRemapLevel> class TF0,template<TimerGpioRemapLevel> class TF1,template<TimerGpioRemapLevel> class TF2,template<TimerGpioRemapLevel> class TF3,template<TimerGpioRemapLevel> class TF4,template<TimerGpioRemapLevel> class TF5,template<TimerGpioRemapLevel> class TF6,template<TimerGpioRemapLevel> class TF7,template<TimerGpioRemapLevel> class TF8>
  struct Timer8GpioFeature<TIMER_REMAP_NONE,TF0,TF1,TF2,TF3,TF4,TF5,TF6,TF7,TF8> : public TimerFeatureBase {
    Timer8GpioFeature(Timer& timer) : TimerFeatureBase(timer) {
      RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO,ENABLE);
      TF0<TIMER_REMAP_NONE>::initialise();
      TF1<TIMER_REMAP_NONE>::initialise();
      TF2<TIMER_REMAP_NONE>::initialise();
      TF3<TIMER_REMAP_NONE>::initialise();
      TF4<TIMER_REMAP_NONE>::initialise();
      TF5<TIMER_REMAP_NONE>::initialise();
      TF6<TIMER_REMAP_NONE>::initialise();
      TF7<TIMER_REMAP_NONE>::initialise();
      TF8<TIMER_REMAP_NONE>::initialise();
    }
  };
}
