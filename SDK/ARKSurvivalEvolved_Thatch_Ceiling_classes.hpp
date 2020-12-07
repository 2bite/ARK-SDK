#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Thatch_Ceiling_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Thatch_Ceiling.Thatch_Ceiling_C
// 0x0000 (0x0AD0 - 0x0AD0)
class AThatch_Ceiling_C : public ACeiling_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Thatch_Ceiling.Thatch_Ceiling_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Thatch_Ceiling(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
