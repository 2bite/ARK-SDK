#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Amargasaurus_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Amargasaurus_AnimBP.Amargasaurus_AnimBP_C
// 0x0000 (0x1B78 - 0x1B78)
class UAmargasaurus_AnimBP_C : public UDinoBlueprintBase_RootBoneName_SwimmerTurn_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Amargasaurus_AnimBP.Amargasaurus_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Amargasaurus_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
