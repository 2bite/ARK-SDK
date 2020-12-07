#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_DoubleDoorframe_Wood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DoubleDoorframe_Wood.BP_DoubleDoorframe_Wood_C
// 0x0000 (0x0AD8 - 0x0AD8)
class ABP_DoubleDoorframe_Wood_C : public ABase_DoubleDoorframe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DoubleDoorframe_Wood.BP_DoubleDoorframe_Wood_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_DoubleDoorframe_Wood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
