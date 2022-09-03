#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ceiling_Doorway_Wood_SM_New_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ceiling_Doorway_Wood_SM_New.Ceiling_Doorway_Wood_SM_New_C
// 0x0000 (0x0AF8 - 0x0AF8)
class ACeiling_Doorway_Wood_SM_New_C : public ACeiling_Doorway_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ceiling_Doorway_Wood_SM_New.Ceiling_Doorway_Wood_SM_New_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ceiling_Doorway_Wood_SM_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
