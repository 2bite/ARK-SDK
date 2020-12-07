#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FishingNetXrayVision_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C
// 0x0140 (0x0AC8 - 0x0988)
class ABuff_FishingNetXrayVision_C : public ABuff_XRay_Base_C
{
public:
	class UMaterialInstanceDynamic*                    OverlayMaterial;                                          // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              caught_animals;                                           // 0x0990(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      net_ref;                                                  // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 FishCountHUDElement;                                      // 0x09A8(0x00F8) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               is_casted;                                                // 0x0AA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AA1(0x0007) MISSED OFFSET
	TArray<class UClass*>                              allowed_catchable_fish;                                   // 0x0AA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              catchable_fish_that_will_break_the_net;                   // 0x0AB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FishingNetXrayVision.Buff_FishingNetXrayVision_C");
		return ptr;
	}


	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void clear_caught_animals();
	void Set_All_Components_Render_Custom_Depth(class AActor* Actor, bool render_custom_depth);
	void set_all_components_custom_depth_stencil_value(int stencil_Value, class AActor* Actor);
	void BuffTickClient(float* DeltaTime);
	void BuffTickServer(float* DeltaTime);
	void ReceiveBeginPlay();
	void BPDeactivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_FishingNetXrayVision(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
