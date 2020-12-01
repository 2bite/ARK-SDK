#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BeerBarrel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BeerBarrel.BeerBarrel_C
// 0x0010 (0x0EF8 - 0x0EE8)
class ABeerBarrel_C : public AWaterTankBaseBP_NoInv_C
{
public:
	class UParticleSystemComponent*                    BeerParticles;                                            // 0x0EE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_BeerBarrel_C*             PrimalInventoryBP_BeerBarrel_C1;                          // 0x0EF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BeerBarrel.BeerBarrel_C");
		return ptr;
	}


	void UserConstructionScript();
	void BPUpdateItemVisuals();
	void ExecuteUbergraph_BeerBarrel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
