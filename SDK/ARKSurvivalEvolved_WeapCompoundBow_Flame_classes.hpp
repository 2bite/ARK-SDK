#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCompoundBow_Flame_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapCompoundBow_Flame.WeapCompoundBow_Flame_C
// 0x001B (0x0E9B - 0x0E80)
class AWeapCompoundBow_Flame_C : public AWeapCompoundBow_C
{
public:
	class UAudioComponent*                             FlameSound;                                               // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Flame3P;                                                  // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Flame1P;                                                  // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0E98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0E99(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlaying_ReturnValue;                           // 0x0E9A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapCompoundBow_Flame.WeapCompoundBow_Flame_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnHideProjectile();
	void OnUnHideProjectile();
	void ExecuteUbergraph_WeapCompoundBow_Flame(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
