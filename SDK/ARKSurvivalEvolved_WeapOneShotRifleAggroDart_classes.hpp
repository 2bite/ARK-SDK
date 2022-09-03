#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapOneShotRifleAggroDart_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapOneShotRifleAggroDart.WeapOneShotRifleAggroDart_C
// 0x005B (0x0E8B - 0x0E30)
class AWeapOneShotRifleAggroDart_C : public AWeapRocketLauncher_C
{
public:
	class UStaticMeshComponent*                        DartMesh1P;                                               // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0E38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E39(0x0003) MISSED OFFSET
	struct FName                                       K2Node_Event_CustomEventName2;                            // 0x0E3C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0E44(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      K2Node_Event_MeshComp2;                                   // 0x0E48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimSequenceBase*                           K2Node_Event_Animation2;                                  // 0x0E50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_TotalDuration;                               // 0x0E58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0E5C(0x0004) MISSED OFFSET
	class UAnimNotifyState*                            K2Node_Event_AnimNotifyObject2;                           // 0x0E60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_CustomEventName;                             // 0x0E68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USkeletalMeshComponent*                      K2Node_Event_MeshComp;                                    // 0x0E70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimSequenceBase*                           K2Node_Event_Animation;                                   // 0x0E78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimNotifyState*                            K2Node_Event_AnimNotifyObject;                            // 0x0E80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x0E88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue2;                // 0x0E89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue3;                // 0x0E8A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapOneShotRifleAggroDart.WeapOneShotRifleAggroDart_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BPAnimNotifyCustomState_Begin(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration, class UAnimNotifyState** AnimNotifyObject);
	void BPAnimNotifyCustomState_End(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotifyState** AnimNotifyObject);
	void ExecuteUbergraph_WeapOneShotRifleAggroDart(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
