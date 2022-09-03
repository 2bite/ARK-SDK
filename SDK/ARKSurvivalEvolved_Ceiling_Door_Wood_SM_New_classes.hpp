#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ceiling_Door_Wood_SM_New_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ceiling_Door_Wood_SM_New.Ceiling_Door_Wood_SM_New_C
// 0x0000 (0x0B78 - 0x0B78)
class ACeiling_Door_Wood_SM_New_C : public ACeiling_Door_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ceiling_Door_Wood_SM_New.Ceiling_Door_Wood_SM_New_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ceiling_Door_Wood_SM_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
