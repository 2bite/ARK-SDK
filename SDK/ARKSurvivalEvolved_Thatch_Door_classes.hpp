#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Thatch_Door_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Thatch_Door.Thatch_Door_C
// 0x0008 (0x0B78 - 0x0B70)
class AThatch_Door_C : public ADoor_Base_SM_C
{
public:
	class USphereComponent*                            StasisComponent_1;                                        // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Thatch_Door.Thatch_Door_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Thatch_Door(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
