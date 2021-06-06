#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPaintbrush_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapPaintbrush.WeapPaintbrush_C
// 0x0008 (0x0D98 - 0x0D90)
class AWeapPaintbrush_C : public AShooterWeapon_Melee
{
public:
	class AShooterCharacter*                           ShooterCharRef;                                           // 0x0D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapPaintbrush.WeapPaintbrush_C");
		return ptr;
	}


	struct FWeaponAnim BPGetSelectedMeleeAttackAnim();
	void BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void UserConstructionScript();
	void ExecuteUbergraph_WeapPaintbrush(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
