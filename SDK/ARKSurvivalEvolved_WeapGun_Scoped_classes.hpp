#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapGun_Scoped_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapGun_Scoped.WeapGun_Scoped_C
// 0x0010 (0x0DD0 - 0x0DC0)
class AWeapGun_Scoped_C : public AWeapGun_C
{
public:
	class UStaticMeshComponent*                        ThirdPersonAttachment;                                    // 0x0DC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FirstPersonAttachment;                                    // 0x0DC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapGun_Scoped.WeapGun_Scoped_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapGun_Scoped(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
