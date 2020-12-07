#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_GrapplingHook_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemAmmo_GrapplingHook.PrimalItemAmmo_GrapplingHook_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemAmmo_GrapplingHook_C : public UPrimalItemAmmo_ArrowBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_GrapplingHook.PrimalItemAmmo_GrapplingHook_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemAmmo_GrapplingHook(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
