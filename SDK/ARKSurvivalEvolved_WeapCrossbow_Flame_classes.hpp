#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCrossbow_Flame_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapCrossbow_Flame.WeapCrossbow_Flame_C
// 0x001B (0x0E6B - 0x0E50)
class AWeapCrossbow_Flame_C : public AWeapCrossbow_C
{
public:
	class UAudioComponent*                             FlameSound;                                               // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Flame3P;                                                  // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Flame1P;                                                  // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0E68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0E69(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlaying_ReturnValue;                           // 0x0E6A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapCrossbow_Flame.WeapCrossbow_Flame_C");
		return ptr;
	}


	void SetActive_3PArrow_Flame(bool Active);
	void UserConstructionScript();
	void OnHideProjectile();
	void OnUnHideProjectile();
	void ExecuteUbergraph_WeapCrossbow_Flame(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
