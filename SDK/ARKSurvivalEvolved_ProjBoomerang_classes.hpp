#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjBoomerang_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjBoomerang.ProjBoomerang_C
// 0x001C (0x072C - 0x0710)
class AProjBoomerang_C : public APrimalProjectileBoomerang
{
public:
	class UAudioComponent*                             Projectile_SFX;                                           // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             RotationPoint;                                            // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CallFunc_GetWorldLocation_ReturnValue;                    // 0x0720(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjBoomerang.ProjBoomerang_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__Projectile_SFX_K2Node_ComponentBoundEvent_111_OnAudioFinished__DelegateSignature();
	void ExecuteUbergraph_ProjBoomerang(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
