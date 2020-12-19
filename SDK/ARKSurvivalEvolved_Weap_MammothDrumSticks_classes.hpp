#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Weap_MammothDrumSticks_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weap_MammothDrumSticks.Weap_MammothDrumSticks_C
// 0x0010 (0x0D68 - 0x0D58)
class AWeap_MammothDrumSticks_C : public AWeapFists_C
{
public:
	class UStaticMeshComponent*                        RightStick_TPV;                                           // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        LeftStick_TPV;                                            // 0x0D60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weap_MammothDrumSticks.Weap_MammothDrumSticks_C");
		return ptr;
	}


	void ReceiveDestroyed();
	void ClearDrumSticks();
	void BPStartEquippedNotify();
	void StartUnequipEvent();
	void UserConstructionScript();
	void ExecuteUbergraph_Weap_MammothDrumSticks(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
