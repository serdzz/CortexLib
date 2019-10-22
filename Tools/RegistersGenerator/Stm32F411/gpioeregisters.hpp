/*******************************************************************************
* Filename      : gpioeregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(GPIOEREGISTERS_HPP)
#define GPIOEREGISTERS_HPP

#include "gpioefieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOE
{
  struct GPIOEMODERBase {} ;

  struct MODER : public RegisterBase<0x40021000, 32, ReadWriteMode>
  {
    using MODER15 = GPIOE_MODER_MODER_Values<GPIOE::MODER, 30, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER14 = GPIOE_MODER_MODER_Values<GPIOE::MODER, 28, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER13 = GPIOE_MODER_MODER_Values<GPIOE::MODER, 26, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER12 = GPIOE_MODER_MODER_Values<GPIOE::MODER, 24, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER11 = GPIOE_MODER_MODER_Values<GPIOE::MODER, 22, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER10 = GPIOE_MODER_MODER_Values<GPIOE::MODER, 20, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER9 = GPIOE_MODER_MODER_Values<GPIOE::MODER, 18, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER8 = GPIOE_MODER_MODER_Values<GPIOE::MODER, 16, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER7 = GPIOE_MODER_MODER_Values<GPIOE::MODER, 14, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER6 = GPIOE_MODER_MODER_Values<GPIOE::MODER, 12, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER5 = GPIOE_MODER_MODER_Values<GPIOE::MODER, 10, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER4 = GPIOE_MODER_MODER_Values<GPIOE::MODER, 8, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER3 = GPIOE_MODER_MODER_Values<GPIOE::MODER, 6, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER2 = GPIOE_MODER_MODER_Values<GPIOE::MODER, 4, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER1 = GPIOE_MODER_MODER_Values<GPIOE::MODER, 2, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER0 = GPIOE_MODER_MODER_Values<GPIOE::MODER, 0, 2, ReadWriteMode, GPIOEMODERBase> ;
    using FieldValues = GPIOE_MODER_MODER_Values<GPIOE::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x40021000, 32, ReadWriteMode, GPIOEMODERBase, T...> ;

  struct GPIOEOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x40021004, 32, ReadWriteMode>
  {
    using OT15 = GPIOE_OTYPER_OT_Values<GPIOE::OTYPER, 15, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT14 = GPIOE_OTYPER_OT_Values<GPIOE::OTYPER, 14, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT13 = GPIOE_OTYPER_OT_Values<GPIOE::OTYPER, 13, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT12 = GPIOE_OTYPER_OT_Values<GPIOE::OTYPER, 12, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT11 = GPIOE_OTYPER_OT_Values<GPIOE::OTYPER, 11, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT10 = GPIOE_OTYPER_OT_Values<GPIOE::OTYPER, 10, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT9 = GPIOE_OTYPER_OT_Values<GPIOE::OTYPER, 9, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT8 = GPIOE_OTYPER_OT_Values<GPIOE::OTYPER, 8, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT7 = GPIOE_OTYPER_OT_Values<GPIOE::OTYPER, 7, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT6 = GPIOE_OTYPER_OT_Values<GPIOE::OTYPER, 6, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT5 = GPIOE_OTYPER_OT_Values<GPIOE::OTYPER, 5, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT4 = GPIOE_OTYPER_OT_Values<GPIOE::OTYPER, 4, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT3 = GPIOE_OTYPER_OT_Values<GPIOE::OTYPER, 3, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT2 = GPIOE_OTYPER_OT_Values<GPIOE::OTYPER, 2, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT1 = GPIOE_OTYPER_OT_Values<GPIOE::OTYPER, 1, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT0 = GPIOE_OTYPER_OT_Values<GPIOE::OTYPER, 0, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using FieldValues = GPIOE_OTYPER_OT_Values<GPIOE::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x40021004, 32, ReadWriteMode, GPIOEOTYPERBase, T...> ;

  struct GPIOEOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x40021008, 32, ReadWriteMode>
  {
    using OSPEEDR15 = GPIOE_OSPEEDR_OSPEEDR_Values<GPIOE::OSPEEDR, 30, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR14 = GPIOE_OSPEEDR_OSPEEDR_Values<GPIOE::OSPEEDR, 28, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR13 = GPIOE_OSPEEDR_OSPEEDR_Values<GPIOE::OSPEEDR, 26, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR12 = GPIOE_OSPEEDR_OSPEEDR_Values<GPIOE::OSPEEDR, 24, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR11 = GPIOE_OSPEEDR_OSPEEDR_Values<GPIOE::OSPEEDR, 22, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR10 = GPIOE_OSPEEDR_OSPEEDR_Values<GPIOE::OSPEEDR, 20, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR9 = GPIOE_OSPEEDR_OSPEEDR_Values<GPIOE::OSPEEDR, 18, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR8 = GPIOE_OSPEEDR_OSPEEDR_Values<GPIOE::OSPEEDR, 16, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR7 = GPIOE_OSPEEDR_OSPEEDR_Values<GPIOE::OSPEEDR, 14, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR6 = GPIOE_OSPEEDR_OSPEEDR_Values<GPIOE::OSPEEDR, 12, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR5 = GPIOE_OSPEEDR_OSPEEDR_Values<GPIOE::OSPEEDR, 10, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR4 = GPIOE_OSPEEDR_OSPEEDR_Values<GPIOE::OSPEEDR, 8, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR3 = GPIOE_OSPEEDR_OSPEEDR_Values<GPIOE::OSPEEDR, 6, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR2 = GPIOE_OSPEEDR_OSPEEDR_Values<GPIOE::OSPEEDR, 4, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR1 = GPIOE_OSPEEDR_OSPEEDR_Values<GPIOE::OSPEEDR, 2, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR0 = GPIOE_OSPEEDR_OSPEEDR_Values<GPIOE::OSPEEDR, 0, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using FieldValues = GPIOE_OSPEEDR_OSPEEDR_Values<GPIOE::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x40021008, 32, ReadWriteMode, GPIOEOSPEEDRBase, T...> ;

  struct GPIOEPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x4002100C, 32, ReadWriteMode>
  {
    using PUPDR15 = GPIOE_PUPDR_PUPDR_Values<GPIOE::PUPDR, 30, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR14 = GPIOE_PUPDR_PUPDR_Values<GPIOE::PUPDR, 28, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR13 = GPIOE_PUPDR_PUPDR_Values<GPIOE::PUPDR, 26, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR12 = GPIOE_PUPDR_PUPDR_Values<GPIOE::PUPDR, 24, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR11 = GPIOE_PUPDR_PUPDR_Values<GPIOE::PUPDR, 22, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR10 = GPIOE_PUPDR_PUPDR_Values<GPIOE::PUPDR, 20, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR9 = GPIOE_PUPDR_PUPDR_Values<GPIOE::PUPDR, 18, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR8 = GPIOE_PUPDR_PUPDR_Values<GPIOE::PUPDR, 16, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR7 = GPIOE_PUPDR_PUPDR_Values<GPIOE::PUPDR, 14, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR6 = GPIOE_PUPDR_PUPDR_Values<GPIOE::PUPDR, 12, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR5 = GPIOE_PUPDR_PUPDR_Values<GPIOE::PUPDR, 10, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR4 = GPIOE_PUPDR_PUPDR_Values<GPIOE::PUPDR, 8, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR3 = GPIOE_PUPDR_PUPDR_Values<GPIOE::PUPDR, 6, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR2 = GPIOE_PUPDR_PUPDR_Values<GPIOE::PUPDR, 4, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR1 = GPIOE_PUPDR_PUPDR_Values<GPIOE::PUPDR, 2, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR0 = GPIOE_PUPDR_PUPDR_Values<GPIOE::PUPDR, 0, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using FieldValues = GPIOE_PUPDR_PUPDR_Values<GPIOE::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x4002100C, 32, ReadWriteMode, GPIOEPUPDRBase, T...> ;

  struct GPIOEIDRBase {} ;

  struct IDR : public RegisterBase<0x40021010, 32, ReadMode>
  {
    using IDR15 = GPIOE_IDR_IDR_Values<GPIOE::IDR, 15, 1, ReadMode, GPIOEIDRBase> ;
    using IDR14 = GPIOE_IDR_IDR_Values<GPIOE::IDR, 14, 1, ReadMode, GPIOEIDRBase> ;
    using IDR13 = GPIOE_IDR_IDR_Values<GPIOE::IDR, 13, 1, ReadMode, GPIOEIDRBase> ;
    using IDR12 = GPIOE_IDR_IDR_Values<GPIOE::IDR, 12, 1, ReadMode, GPIOEIDRBase> ;
    using IDR11 = GPIOE_IDR_IDR_Values<GPIOE::IDR, 11, 1, ReadMode, GPIOEIDRBase> ;
    using IDR10 = GPIOE_IDR_IDR_Values<GPIOE::IDR, 10, 1, ReadMode, GPIOEIDRBase> ;
    using IDR9 = GPIOE_IDR_IDR_Values<GPIOE::IDR, 9, 1, ReadMode, GPIOEIDRBase> ;
    using IDR8 = GPIOE_IDR_IDR_Values<GPIOE::IDR, 8, 1, ReadMode, GPIOEIDRBase> ;
    using IDR7 = GPIOE_IDR_IDR_Values<GPIOE::IDR, 7, 1, ReadMode, GPIOEIDRBase> ;
    using IDR6 = GPIOE_IDR_IDR_Values<GPIOE::IDR, 6, 1, ReadMode, GPIOEIDRBase> ;
    using IDR5 = GPIOE_IDR_IDR_Values<GPIOE::IDR, 5, 1, ReadMode, GPIOEIDRBase> ;
    using IDR4 = GPIOE_IDR_IDR_Values<GPIOE::IDR, 4, 1, ReadMode, GPIOEIDRBase> ;
    using IDR3 = GPIOE_IDR_IDR_Values<GPIOE::IDR, 3, 1, ReadMode, GPIOEIDRBase> ;
    using IDR2 = GPIOE_IDR_IDR_Values<GPIOE::IDR, 2, 1, ReadMode, GPIOEIDRBase> ;
    using IDR1 = GPIOE_IDR_IDR_Values<GPIOE::IDR, 1, 1, ReadMode, GPIOEIDRBase> ;
    using IDR0 = GPIOE_IDR_IDR_Values<GPIOE::IDR, 0, 1, ReadMode, GPIOEIDRBase> ;
    using FieldValues = GPIOE_IDR_IDR_Values<GPIOE::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x40021010, 32, ReadMode, GPIOEIDRBase, T...> ;

  struct GPIOEODRBase {} ;

  struct ODR : public RegisterBase<0x40021014, 32, ReadWriteMode>
  {
    using ODR15 = GPIOE_ODR_ODR_Values<GPIOE::ODR, 15, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR14 = GPIOE_ODR_ODR_Values<GPIOE::ODR, 14, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR13 = GPIOE_ODR_ODR_Values<GPIOE::ODR, 13, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR12 = GPIOE_ODR_ODR_Values<GPIOE::ODR, 12, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR11 = GPIOE_ODR_ODR_Values<GPIOE::ODR, 11, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR10 = GPIOE_ODR_ODR_Values<GPIOE::ODR, 10, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR9 = GPIOE_ODR_ODR_Values<GPIOE::ODR, 9, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR8 = GPIOE_ODR_ODR_Values<GPIOE::ODR, 8, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR7 = GPIOE_ODR_ODR_Values<GPIOE::ODR, 7, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR6 = GPIOE_ODR_ODR_Values<GPIOE::ODR, 6, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR5 = GPIOE_ODR_ODR_Values<GPIOE::ODR, 5, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR4 = GPIOE_ODR_ODR_Values<GPIOE::ODR, 4, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR3 = GPIOE_ODR_ODR_Values<GPIOE::ODR, 3, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR2 = GPIOE_ODR_ODR_Values<GPIOE::ODR, 2, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR1 = GPIOE_ODR_ODR_Values<GPIOE::ODR, 1, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR0 = GPIOE_ODR_ODR_Values<GPIOE::ODR, 0, 1, ReadWriteMode, GPIOEODRBase> ;
    using FieldValues = GPIOE_ODR_ODR_Values<GPIOE::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x40021014, 32, ReadWriteMode, GPIOEODRBase, T...> ;

  struct GPIOEBSRRBase {} ;

  struct BSRR : public RegisterBase<0x40021018, 32, WriteMode>
  {
    using BR15 = GPIOE_BSRR_BR_Values<GPIOE::BSRR, 31, 1, WriteMode, GPIOEBSRRBase> ;
    using BR14 = GPIOE_BSRR_BR_Values<GPIOE::BSRR, 30, 1, WriteMode, GPIOEBSRRBase> ;
    using BR13 = GPIOE_BSRR_BR_Values<GPIOE::BSRR, 29, 1, WriteMode, GPIOEBSRRBase> ;
    using BR12 = GPIOE_BSRR_BR_Values<GPIOE::BSRR, 28, 1, WriteMode, GPIOEBSRRBase> ;
    using BR11 = GPIOE_BSRR_BR_Values<GPIOE::BSRR, 27, 1, WriteMode, GPIOEBSRRBase> ;
    using BR10 = GPIOE_BSRR_BR_Values<GPIOE::BSRR, 26, 1, WriteMode, GPIOEBSRRBase> ;
    using BR9 = GPIOE_BSRR_BR_Values<GPIOE::BSRR, 25, 1, WriteMode, GPIOEBSRRBase> ;
    using BR8 = GPIOE_BSRR_BR_Values<GPIOE::BSRR, 24, 1, WriteMode, GPIOEBSRRBase> ;
    using BR7 = GPIOE_BSRR_BR_Values<GPIOE::BSRR, 23, 1, WriteMode, GPIOEBSRRBase> ;
    using BR6 = GPIOE_BSRR_BR_Values<GPIOE::BSRR, 22, 1, WriteMode, GPIOEBSRRBase> ;
    using BR5 = GPIOE_BSRR_BR_Values<GPIOE::BSRR, 21, 1, WriteMode, GPIOEBSRRBase> ;
    using BR4 = GPIOE_BSRR_BR_Values<GPIOE::BSRR, 20, 1, WriteMode, GPIOEBSRRBase> ;
    using BR3 = GPIOE_BSRR_BR_Values<GPIOE::BSRR, 19, 1, WriteMode, GPIOEBSRRBase> ;
    using BR2 = GPIOE_BSRR_BR_Values<GPIOE::BSRR, 18, 1, WriteMode, GPIOEBSRRBase> ;
    using BR1 = GPIOE_BSRR_BR_Values<GPIOE::BSRR, 17, 1, WriteMode, GPIOEBSRRBase> ;
    using BR0 = GPIOE_BSRR_BR_Values<GPIOE::BSRR, 16, 1, WriteMode, GPIOEBSRRBase> ;
    using BS15 = GPIOE_BSRR_BS_Values<GPIOE::BSRR, 15, 1, WriteMode, GPIOEBSRRBase> ;
    using BS14 = GPIOE_BSRR_BS_Values<GPIOE::BSRR, 14, 1, WriteMode, GPIOEBSRRBase> ;
    using BS13 = GPIOE_BSRR_BS_Values<GPIOE::BSRR, 13, 1, WriteMode, GPIOEBSRRBase> ;
    using BS12 = GPIOE_BSRR_BS_Values<GPIOE::BSRR, 12, 1, WriteMode, GPIOEBSRRBase> ;
    using BS11 = GPIOE_BSRR_BS_Values<GPIOE::BSRR, 11, 1, WriteMode, GPIOEBSRRBase> ;
    using BS10 = GPIOE_BSRR_BS_Values<GPIOE::BSRR, 10, 1, WriteMode, GPIOEBSRRBase> ;
    using BS9 = GPIOE_BSRR_BS_Values<GPIOE::BSRR, 9, 1, WriteMode, GPIOEBSRRBase> ;
    using BS8 = GPIOE_BSRR_BS_Values<GPIOE::BSRR, 8, 1, WriteMode, GPIOEBSRRBase> ;
    using BS7 = GPIOE_BSRR_BS_Values<GPIOE::BSRR, 7, 1, WriteMode, GPIOEBSRRBase> ;
    using BS6 = GPIOE_BSRR_BS_Values<GPIOE::BSRR, 6, 1, WriteMode, GPIOEBSRRBase> ;
    using BS5 = GPIOE_BSRR_BS_Values<GPIOE::BSRR, 5, 1, WriteMode, GPIOEBSRRBase> ;
    using BS4 = GPIOE_BSRR_BS_Values<GPIOE::BSRR, 4, 1, WriteMode, GPIOEBSRRBase> ;
    using BS3 = GPIOE_BSRR_BS_Values<GPIOE::BSRR, 3, 1, WriteMode, GPIOEBSRRBase> ;
    using BS2 = GPIOE_BSRR_BS_Values<GPIOE::BSRR, 2, 1, WriteMode, GPIOEBSRRBase> ;
    using BS1 = GPIOE_BSRR_BS_Values<GPIOE::BSRR, 1, 1, WriteMode, GPIOEBSRRBase> ;
    using BS0 = GPIOE_BSRR_BS_Values<GPIOE::BSRR, 0, 1, WriteMode, GPIOEBSRRBase> ;
    using FieldValues = GPIOE_BSRR_BS_Values<GPIOE::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x40021018, 32, WriteMode, GPIOEBSRRBase, T...> ;

  struct GPIOELCKRBase {} ;

  struct LCKR : public RegisterBase<0x4002101C, 32, ReadWriteMode>
  {
    using LCKK = GPIOE_LCKR_LCKK_Values<GPIOE::LCKR, 16, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK15 = GPIOE_LCKR_LCK_Values<GPIOE::LCKR, 15, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK14 = GPIOE_LCKR_LCK_Values<GPIOE::LCKR, 14, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK13 = GPIOE_LCKR_LCK_Values<GPIOE::LCKR, 13, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK12 = GPIOE_LCKR_LCK_Values<GPIOE::LCKR, 12, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK11 = GPIOE_LCKR_LCK_Values<GPIOE::LCKR, 11, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK10 = GPIOE_LCKR_LCK_Values<GPIOE::LCKR, 10, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK9 = GPIOE_LCKR_LCK_Values<GPIOE::LCKR, 9, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK8 = GPIOE_LCKR_LCK_Values<GPIOE::LCKR, 8, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK7 = GPIOE_LCKR_LCK_Values<GPIOE::LCKR, 7, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK6 = GPIOE_LCKR_LCK_Values<GPIOE::LCKR, 6, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK5 = GPIOE_LCKR_LCK_Values<GPIOE::LCKR, 5, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK4 = GPIOE_LCKR_LCK_Values<GPIOE::LCKR, 4, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK3 = GPIOE_LCKR_LCK_Values<GPIOE::LCKR, 3, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK2 = GPIOE_LCKR_LCK_Values<GPIOE::LCKR, 2, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK1 = GPIOE_LCKR_LCK_Values<GPIOE::LCKR, 1, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK0 = GPIOE_LCKR_LCK_Values<GPIOE::LCKR, 0, 1, ReadWriteMode, GPIOELCKRBase> ;
    using FieldValues = GPIOE_LCKR_LCK_Values<GPIOE::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x4002101C, 32, ReadWriteMode, GPIOELCKRBase, T...> ;

  struct GPIOEAFRLBase {} ;

  struct AFRL : public RegisterBase<0x40021020, 32, ReadWriteMode>
  {
    using AFRL7 = GPIOE_AFRL_AFRL_Values<GPIOE::AFRL, 28, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using AFRL6 = GPIOE_AFRL_AFRL_Values<GPIOE::AFRL, 24, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using AFRL5 = GPIOE_AFRL_AFRL_Values<GPIOE::AFRL, 20, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using AFRL4 = GPIOE_AFRL_AFRL_Values<GPIOE::AFRL, 16, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using AFRL3 = GPIOE_AFRL_AFRL_Values<GPIOE::AFRL, 12, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using AFRL2 = GPIOE_AFRL_AFRL_Values<GPIOE::AFRL, 8, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using AFRL1 = GPIOE_AFRL_AFRL_Values<GPIOE::AFRL, 4, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using AFRL0 = GPIOE_AFRL_AFRL_Values<GPIOE::AFRL, 0, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using FieldValues = GPIOE_AFRL_AFRL_Values<GPIOE::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x40021020, 32, ReadWriteMode, GPIOEAFRLBase, T...> ;

  struct GPIOEAFRHBase {} ;

  struct AFRH : public RegisterBase<0x40021024, 32, ReadWriteMode>
  {
    using AFRH15 = GPIOE_AFRH_AFRH_Values<GPIOE::AFRH, 28, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFRH14 = GPIOE_AFRH_AFRH_Values<GPIOE::AFRH, 24, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFRH13 = GPIOE_AFRH_AFRH_Values<GPIOE::AFRH, 20, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFRH12 = GPIOE_AFRH_AFRH_Values<GPIOE::AFRH, 16, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFRH11 = GPIOE_AFRH_AFRH_Values<GPIOE::AFRH, 12, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFRH10 = GPIOE_AFRH_AFRH_Values<GPIOE::AFRH, 8, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFRH9 = GPIOE_AFRH_AFRH_Values<GPIOE::AFRH, 4, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFRH8 = GPIOE_AFRH_AFRH_Values<GPIOE::AFRH, 0, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using FieldValues = GPIOE_AFRH_AFRH_Values<GPIOE::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x40021024, 32, ReadWriteMode, GPIOEAFRHBase, T...> ;

} ;

#endif //#if !defined(GPIOEREGISTERS_HPP)
