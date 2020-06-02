#ifndef TYPE_H
#define TYPE_H

#include "stdint.h"

#define DE_Disable    (0)
#define DE_Enable    (1)

#define DE_Inline __inline

#ifndef __I
#define __I     volatile const       /*!< Defines 'read only' permissions */
#endif

#ifndef __O
#define __O     volatile             /*!< Defines 'write only' permissions */
#endif

#ifndef __IO
#define __IO    volatile             /*!< Defines 'read / write' permissions */
#endif

/* following defines should be used for structure members */
#ifndef __IM
#define __IM     volatile const      /*! Defines 'read only' structure member permissions */
#endif

#ifndef __OM
#define __OM     volatile            /*! Defines 'write only' structure member permissions */
#endif

#ifndef __IOM
#define __IOM    volatile            /*! Defines 'read / write' structure member permissions */
#endif


typedef int32_t  s32;
typedef int16_t s16;
typedef int8_t  s8;

typedef const int32_t sc32;  /*!< Read Only */
typedef const int16_t sc16;  /*!< Read Only */
typedef const int8_t sc8;   /*!< Read Only */

typedef __IO int32_t  vs32;
typedef __IO int16_t  vs16;
typedef __IO int8_t   vs8;

typedef __I int32_t vsc32;  /*!< Read Only */
typedef __I int16_t vsc16;  /*!< Read Only */
typedef __I int8_t vsc8;   /*!< Read Only */

typedef uint32_t  u32;
typedef uint16_t u16;
typedef uint8_t  u8;

typedef const uint32_t uc32;  /*!< Read Only */
typedef const uint16_t uc16;  /*!< Read Only */
typedef const uint8_t uc8;   /*!< Read Only */

typedef __IO uint32_t  vu32;
typedef __IO uint16_t vu16;
typedef __IO uint8_t  vu8;

typedef __I uint32_t vuc32;  /*!< Read Only */
typedef __I uint16_t vuc16;  /*!< Read Only */
typedef __I uint8_t vuc8;   /*!< Read Only */

typedef enum {FALSE = 0, TRUE = !FALSE} bool;

typedef enum {RESET = 0, SET = !RESET} FlagStatus, ITStatus;

typedef enum {DISABLE = 0, ENABLE = !DISABLE} FunctionalState;
#define IS_FUNCTIONAL_STATE(STATE) (((STATE) == DISABLE) || ((STATE) == ENABLE))

typedef enum {ERROR = 0, SUCCESS = !ERROR} ErrorStatus;



#endif
