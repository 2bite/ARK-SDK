#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MekRocketPod_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_MekRocketPod.EngramEntry_MekRocketPod_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_MekRocketPod_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_MekRocketPod.EngramEntry_MekRocketPod_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_MekRocketPod(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
