#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBow_Flame_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapBow_Flame.WeapBow_Flame_C
// 0x001B (0x0ECB - 0x0EB0)
class AWeapBow_Flame_C : public AWeapBow_C
{
public:
	class UAudioComponent*                             FlameSound;                                               // 0x0EB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Flame3P;                                                  // 0x0EB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Flame1P;                                                  // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0EC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0EC9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlaying_ReturnValue;                           // 0x0ECA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapBow_Flame.WeapBow_Flame_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnHideProjectile();
	void OnUnHideProjectile();
	void ExecuteUbergraph_WeapBow_Flame(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
