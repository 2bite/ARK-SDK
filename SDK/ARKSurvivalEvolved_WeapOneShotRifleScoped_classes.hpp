#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapOneShotRifleScoped_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapOneShotRifleScoped.WeapOneShotRifleScoped_C
// 0x0010 (0x0DD8 - 0x0DC8)
class AWeapOneShotRifleScoped_C : public AWeapOneShotRifle_C
{
public:
	class UStaticMeshComponent*                        ThirdPersonAttachment;                                    // 0x0DC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FirstPersonAttachment;                                    // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapOneShotRifleScoped.WeapOneShotRifleScoped_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapOneShotRifleScoped(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
