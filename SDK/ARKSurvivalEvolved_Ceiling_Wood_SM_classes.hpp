#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ceiling_Wood_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ceiling_Wood_SM.Ceiling_Wood_SM_C
// 0x0000 (0x0AD0 - 0x0AD0)
class ACeiling_Wood_SM_C : public ACeiling_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ceiling_Wood_SM.Ceiling_Wood_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ceiling_Wood_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
