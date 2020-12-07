#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapChainsaw_Impacts_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapChainsaw_Impacts.WeapChainsaw_Impacts_C
// 0x0000 (0x0850 - 0x0850)
class AWeapChainsaw_Impacts_C : public AMeleeFist_Impacts_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapChainsaw_Impacts.WeapChainsaw_Impacts_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapChainsaw_Impacts(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
