#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemHorde_Base_Journeyman_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemHorde_Base_Journeyman.DroppedItemHorde_Base_Journeyman_C
// 0x000C (0x0728 - 0x071C)
class ADroppedItemHorde_Base_Journeyman_C : public ADroppedItemHorde_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    glow;                                                     // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemHorde_Base_Journeyman.DroppedItemHorde_Base_Journeyman_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemHorde_Base_Journeyman(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
