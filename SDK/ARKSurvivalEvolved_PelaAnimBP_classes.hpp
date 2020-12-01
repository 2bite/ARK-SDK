#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PelaAnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass PelaAnimBP.PelaAnimBP_C
// 0x0000 (0x1308 - 0x1308)
class UPelaAnimBP_C : public UDinoBlueprintBase_RootTransform_FlySwimming_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PelaAnimBP.PelaAnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_PelaAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
