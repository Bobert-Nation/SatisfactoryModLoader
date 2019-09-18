#pragma once

#include <Lib.h>

#include "UStruct.h"

namespace SML {
	namespace Objects {
		/**
		* UField containg information about a function of a UClass like the function pointer it self
		*
		* @author Panakotta00
		*/
		SML_API class UFunction : public UStruct {
		public:
			uint32_t flags;
			uint16_t repOff;
			uint8_t parmNum;
			uint16_t parmsSize;
			uint16_t retValOff;
			uint16_t RPCId;
			uint16_t RPCRespID;
			class UProperty* prop2int;
			void* func;

			/**
			* Returns the UClass instace of UFunctions
			*
			* @author Panakotta00
			*/
			SML_API static UClass* staticClass() {
				static auto ptr = UObject::findClass("Class CoreUObject.Function");
				return ptr;
			}

			/**
			* prints useful information about this UFunction
			*
			* @author Panakotta00
			*/
			SML_API void debug();

			/**
			* Executes the referd UFunction on the given object with the given parameter/return structure.
			*
			* @author Panakotta00
			*/
			SML_API void invoke(UObject* obj, void* parameters = nullptr);
		};
	}
}