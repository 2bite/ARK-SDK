#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCrossbow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapCrossbow.WeapCrossbow_C
// 0x0020 (0x0E20 - 0x0E00)
class AWeapCrossbow_C : public AShooterWeapon_Projectile
{
public:
	struct FName                                       K2Node_Event_CustomEventName;                             // 0x0E00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USkeletalMeshComponent*                      K2Node_Event_MeshComp;                                    // 0x0E08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimSequenceBase*                           K2Node_Event_Animation;                                   // 0x0E10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimNotify*                                 K2Node_Event_AnimNotifyObject;                            // 0x0E18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapCrossbow.WeapCrossbow_C");
		return ptr;
	}


	void UserConstructionScript();
	void BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void ExecuteUbergraph_WeapCrossbow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
