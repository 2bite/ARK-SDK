#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Procomptodon_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Procomptodon_AnimBP.Procomptodon_AnimBP_C
// 0x0000 (0x169C - 0x169C)
class UProcomptodon_AnimBP_C : public UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Procomptodon_AnimBP.Procomptodon_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Procomptodon_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
