#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_CompoundBow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_CompoundBow.EngramEntry_CompoundBow_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_CompoundBow_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_CompoundBow.EngramEntry_CompoundBow_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_CompoundBow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
