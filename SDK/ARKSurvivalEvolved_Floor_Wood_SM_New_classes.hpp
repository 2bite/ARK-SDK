#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Floor_Wood_SM_New_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Floor_Wood_SM_New.Floor_Wood_SM_New_C
// 0x0000 (0x0AF8 - 0x0AF8)
class AFloor_Wood_SM_New_C : public AFloor_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Floor_Wood_SM_New.Floor_Wood_SM_New_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Floor_Wood_SM_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
