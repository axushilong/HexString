#ifndef __HEXTRING_H
#define __HEXTRING_H
 
#include "stdint.h"
#include "type.h"


/**
  * @brief  Hex数据转换到String数据,比如0x31 对应就是 0x33 0x31
  * @note   转出后的字母ABCDEF是大写的
  * @param  [in] pucHex 要转换的Hex数据块指针
  * @param  [in] usLength 要转换的Hex数据块大小
  * @param  [out] pcDesStr 要保存的String数据的位置
  * @retval None
  */
void vNHexToString(uint8_t * pucHex,uint16_t usLength,char * pcDesStr);

/**
  * @brief  String数据转换到Hex数据，比如0x33 0x31 对应就 0x31
  * @note   传入的String字母ABCDEF必须大写
  * @param  [in] pcString 要转换的String数据块指针
  * @param  [in] usLength 要转换的String数据块大小
  * @param  [out] pucDesHex 要保存的Hex数据的位置
  * @retval None
  */
void vStringToNHex(char * pcString,uint16_t usLength,uint8_t * pucDesHex);

/**
  * @brief  Hex数据转换到String数据比如传入0x31返回0x33 0x31
  * @note   转出后的字母ABCDEF是大写的；注意：返回的String数据末尾不会加\0
  * @param  [in] ucHex 要转换的Hex数据
  * @param  [in] pcString 返回转换后的String值,返回的String数据末尾不会加\0
  * @retval None
  */
void vHexToString(uint8_t ucHex,uint8_t * pucString);

/**
  * @brief  String数据转换到Hex数据，比如传入"31"返回0x31
  * @note   传入的String字母ABCDEF必须大写
  * @param  [in] pcString 要转换的String数据指针
  * @retval 返回转换后的Hex值
  */
uint8_t ucStringToHex(char * pcString);

#endif

/*-------------------(C) COPYRIGHT 2020 头条@单片机嵌入式爱好者 ----------------*/
