#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H

#define RCC_BASE_ADD   (volatile u32*)(0x40023800)

#define RCC_CR         *( (volatile u32*)( (RCC_BASE_ADD) + 0x00) )
#define RCC_PLLCFGR    *( (volatile u32*)( (RCC_BASE_ADD) + 0x04) )
#define RCC_CFGR       *( (volatile u32*)( (RCC_BASE_ADD) + 0x08) )
#define RCC_CIR        *( (volatile u32*)( (RCC_BASE_ADD) + 0x0C) )

#define RCC_AHB1RSTR   *( (volatile u32*)( (RCC_BASE_ADD) + 0x10) )
#define RCC_AHB2RSTR   *( (volatile u32*)( (RCC_BASE_ADD) + 0x14) )
#define RCC_APB1RSTR   *( (volatile u32*)( (RCC_BASE_ADD) + 0x20) )
#define RCC_APB2RSTR   *( (volatile u32*)( (RCC_BASE_ADD) + 0x24) )

#define RCC_AHB1ENR    *( (volatile u32*)( (RCC_BASE_ADD) + 0x30) )
#define RCC_AHB2ENR    *( (volatile u32*)( (RCC_BASE_ADD) + 0x34) )
#define RCC_APB1ENR    *( (volatile u32*)( (RCC_BASE_ADD) + 0x40) )
#define RCC_APB2ENR    *( (volatile u32*)( (RCC_BASE_ADD) + 0x44) )

#define RCC_AHB1LPENR  *( (volatile u32*)( (RCC_BASE_ADD) + 0x50) )
#define RCC_AHB2LPENR  *( (volatile u32*)( (RCC_BASE_ADD) + 0x54) )
#define RCC_APB1LPENR  *( (volatile u32*)( (RCC_BASE_ADD) + 0x60) )
#define RCC_APB2LPENR  *( (volatile u32*)( (RCC_BASE_ADD) + 0x64) )

#define RCC_BDCR       *( (volatile u32*)( (RCC_BASE_ADD) + 0x70) )
#define RCC_CSR        *( (volatile u32*)( (RCC_BASE_ADD) + 0x74) )
#define RCC_SSCGR      *( (volatile u32*)( (RCC_BASE_ADD) + 0x80) )
#define RCC_PLLI2SCFGR *( (volatile u32*)( (RCC_BASE_ADD) + 0x84) )
#define RCC_DCKCFGR    *( (volatile u32*)( (RCC_BASE_ADD) + 0x8C) )

#define RCC_HSEBYP     18
#define RCC_HSEON      16
#define RCC_HSION      0
#define RCC_LSEBYP     2
#define RCC_LSEON      0  
#define RCC_LSION      0  

#endif
