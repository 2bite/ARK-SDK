#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapStoneClube_ChocolateRabbit_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapStoneClube_ChocolateRabbit.WeapStoneClube_ChocolateRabbit_C
// 0x0008 (0x0D90 - 0x0D88)
class AWeapStoneClube_ChocolateRabbit_C : public AWeapStoneClub_C
{
public:
	class USkeletalMeshComponent*                      MeshFPVAdditional;                                        // 0x0D88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapStoneClube_ChocolateRabbit.WeapStoneClube_ChocolateRabbit_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapStoneClube_ChocolateRabbit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
