#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_Attachment_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C
// 0x002F (0x09A7 - 0x0978)
class ABuff_TekStrider_Attachment_Base_C : public APrimalBuff
{
public:
	TEnumAsByte<EPrimalEquipmentType>                  equipmentType;                                            // 0x0978(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequiresAiming_;                                         // 0x0979(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x097A(0x0002) MISSED OFFSET
	float                                              Attachment_Charge_Usage;                                  // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsesAttachmentHUDSlot;                                   // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0981(0x0007) MISSED OFFSET
	class UTexture2D*                                  InstigatorItemIcon;                                       // 0x0988(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentCharge;                                            // 0x0990(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxCharge;                                                // 0x0994(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowTrackingItemDurability;                             // 0x0998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0999(0x0003) MISSED OFFSET
	float                                              CurrentDurability;                                        // 0x099C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDurability;                                            // 0x09A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     trace_channel;                                            // 0x09A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       debug_draw_neck_trace;                                    // 0x09A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Ai_can_use_attachment;                                    // 0x09A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C");
		return ptr;
	}


	void get_socket_loc(const struct FVector& fallback_loc, const struct FName& socket_name, class APrimalCharacter* Character, struct FVector* Loc, bool* could_get_socket_loc);
	void STATIC_is_head_clear(const struct FName& extra_socket, bool from_animbp, bool* head_is_clear, bool* could_find_socket);
	bool trace_check_for_blockers_between_locations(const struct FVector& Start, const struct FVector& End, bool ignore_foliage, struct FHitResult* OutHit);
	void BuffTickServer(float* DeltaTime);
	void clear_rider(class AShooterCharacter* prev_rider);
	void set_rider();
	void TriggerDoubletapped();
	void TriggerReleased();
	void BPDeactivated(class AActor** ForInstigator);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void Trigger();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekStrider_Attachment_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
