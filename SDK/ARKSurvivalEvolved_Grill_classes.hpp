#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Grill_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Grill.Grill_C
// 0x0010 (0x0E20 - 0x0E10)
class AGrill_C : public ABaseFuelBurner_GasOnly_C
{
public:
	class UPrimalInventoryBP_Grill_C*                  PrimalInventoryBP_Grill_C1;                               // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Grill.Grill_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Grill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
