#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoobyTrapHumanAnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BoobyTrapHumanAnimBP.BoobyTrapHumanAnimBP_C
// 0x0000 (0x37A5 - 0x37A5)
class UBoobyTrapHumanAnimBP_C : public UBaseHumanAnimBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BoobyTrapHumanAnimBP.BoobyTrapHumanAnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_BoobyTrapHumanAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif