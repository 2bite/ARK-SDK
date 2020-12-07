#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemRadio_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemRadio.PrimalItemRadio_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemRadio_C : public UPrimalItem_Radio
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemRadio.PrimalItemRadio_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemRadio(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
