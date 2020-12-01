#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemHorde_Base_Ramshackle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemHorde_Base_Ramshackle.DroppedItemHorde_Base_Ramshackle_C
// 0x000C (0x0718 - 0x070C)
class ADroppedItemHorde_Base_Ramshackle_C : public ADroppedItemHorde_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x070C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    glow;                                                     // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemHorde_Base_Ramshackle.DroppedItemHorde_Base_Ramshackle_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemHorde_Base_Ramshackle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif