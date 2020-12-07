#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Base_Horde_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrate_Base_Horde_Medium.SupplyCrate_Base_Horde_Medium_C
// 0x0060 (0x2050 - 0x1FF0)
class ASupplyCrate_Base_Horde_Medium_C : public ASupplyCrate_Horde_MeteorBase_C
{
public:
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x1FF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1FF1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x1FF4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2000(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2001(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x2004(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x2010(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x2040(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AStorageBox_HordeShield_Medium_C*            CallFunc_FinishSpawningActor_ReturnValue;                 // 0x2048(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrate_Base_Horde_Medium.SupplyCrate_Base_Horde_Medium_C");
		return ptr;
	}


	void OnRep_bHasLanded();
	void UserConstructionScript();
	void OnRep_bStartingNewWave();
	void SpawnColoredShield();
	void ExecuteUbergraph_SupplyCrate_Base_Horde_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
