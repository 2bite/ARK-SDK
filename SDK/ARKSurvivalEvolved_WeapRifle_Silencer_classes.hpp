#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapRifle_Silencer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapRifle_Silencer.WeapRifle_Silencer_C
// 0x0010 (0x0DA0 - 0x0D90)
class AWeapRifle_Silencer_C : public AWeapRifle_C
{
public:
	class UStaticMeshComponent*                        ThirdPersonAttachment;                                    // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FirstPersonAttachment;                                    // 0x0D98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapRifle_Silencer.WeapRifle_Silencer_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapRifle_Silencer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
