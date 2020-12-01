#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AnimNotify_PlayParticleEffect_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C
// 0x0078 (0x00B0 - 0x0038)
class UAnimNotify_PlayParticleEffect_C : public UAnimNotify
{
public:
	class UParticleSystem*                             PSTemplate;                                               // 0x0038(0x0008) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      SocketName;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Attached;                                                 // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FVector                                     LocationOffset;                                           // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnIfMeshNotVisible;                                   // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	TArray<TEnumAsByte<EPhysicalSurface>>              PhysicalSurfaceArray;                                     // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bUsePhysicalSurfaceArray;                                 // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	TArray<class UParticleSystem*>                     PhysicalSurfacePSTemplates;                               // 0x0088(0x0010) (Edit, ConstParm, BlueprintVisible, ZeroConstructor)
	float                                              MaxSpawnDistanceFromCamera;                               // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNotAttachedUseSocketRotation;                            // 0x009C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDontSpawnOutOfView;                                      // 0x009D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlySpawnIfFirstPersonMeshVisible;                       // 0x009E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x009F(0x0001) MISSED OFFSET
	struct FVector                                     particleScale;                                            // 0x00A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseComponentTransform;                                   // 0x00AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOnlySpawnInThirdPerson;                                  // 0x00AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOnlySpawnInFirstPerson;                                  // 0x00AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOnlyOwnerSee;                                            // 0x00AF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C");
		return ptr;
	}


	class FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation);
	void ExecuteUbergraph_AnimNotify_PlayParticleEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
