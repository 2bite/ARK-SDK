#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PreservingBin_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PreservingBin.PreservingBin_C
// 0x0010 (0x0DE0 - 0x0DD0)
class APreservingBin_C : public ABaseFuelBurner_C
{
public:
	class UPrimalInventoryBP_PreservingBin_C*          PrimalInventoryBP_PreservingBin_C1;                       // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PreservingBin.PreservingBin_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_PreservingBin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
