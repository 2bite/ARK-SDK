#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdvancedRifleBullet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_AdvancedRifleBullet.EngramEntry_AdvancedRifleBullet_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_AdvancedRifleBullet_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_AdvancedRifleBullet.EngramEntry_AdvancedRifleBullet_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_AdvancedRifleBullet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
