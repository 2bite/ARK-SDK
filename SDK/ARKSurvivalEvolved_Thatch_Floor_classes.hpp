#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Thatch_Floor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Thatch_Floor.Thatch_Floor_C
// 0x0000 (0x0AF8 - 0x0AF8)
class AThatch_Floor_C : public AFloor_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Thatch_Floor.Thatch_Floor_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Thatch_Floor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
