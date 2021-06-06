#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NotifyHoversailFollow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C
// 0x01D4 (0x0B34 - 0x0960)
class ABuff_NotifyHoversailFollow_C : public ABuff_Base_C
{
public:
	class APrimalCharacter*                            Hoversail;                                                // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Lastpassedlocation;                                       // 0x0968(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               hoversail_has_been_set;                                   // 0x0974(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0975(0x0003) MISSED OFFSET
	class FString                                      follow_string;                                            // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      follow_string_stasis_d;                                   // 0x0988(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   TeleWorldHUDElementSize;                                  // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeleWorldIndicatorSizeMult;                               // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAnchors                                    TeleWorldHUDElementAnchor;                                // 0x09A4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               has_stasis_d;                                             // 0x09B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09B5(0x0003) MISSED OFFSET
	struct FHUDElement                                 LocationIndicatorHUDElementTemplate;                      // 0x09B8(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     MaxHUDIndicatorWorldOffset;                               // 0x0B08(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistanceForHUDLocationIndicatorScaling;                // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MinHUDIndicatorWorldOffset;                               // 0x0B18(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHUDLocationIndicatorScale;                             // 0x0B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinHUDLocationIndicatorScale;                             // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   InterpedScreenPos;                                        // 0x0B2C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C");
		return ptr;
	}


	void STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void Set_and_Pass_Loc();
	void BuffTickServer(float* DeltaTime);
	void BuffTickClient(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_NotifyHoversailFollow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
