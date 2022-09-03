#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedShotgun_HoloScope_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapMachinedShotgun_HoloScope.WeapMachinedShotgun_HoloScope_C
// 0x0010 (0x0DD0 - 0x0DC0)
class AWeapMachinedShotgun_HoloScope_C : public AWeapMachinedShotgun_C
{
public:
	class UStaticMeshComponent*                        FirstPersonAttachment;                                    // 0x0DC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ThirdPersonAttachment;                                    // 0x0DC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapMachinedShotgun_HoloScope.WeapMachinedShotgun_HoloScope_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapMachinedShotgun_HoloScope(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
