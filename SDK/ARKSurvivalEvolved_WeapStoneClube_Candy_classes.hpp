#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapStoneClube_Candy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapStoneClube_Candy.WeapStoneClube_Candy_C
// 0x0008 (0x0D60 - 0x0D58)
class AWeapStoneClube_Candy_C : public AWeapStoneClub_C
{
public:
	class USkeletalMeshComponent*                      MeshFPVAdditional;                                        // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapStoneClube_Candy.WeapStoneClube_Candy_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapStoneClube_Candy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
