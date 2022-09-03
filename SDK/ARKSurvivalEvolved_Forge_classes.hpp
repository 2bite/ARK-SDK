#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Forge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Forge.Forge_C
// 0x0010 (0x0E20 - 0x0E10)
class AForge_C : public ABaseFuelBurner_C
{
public:
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_Forge_C*                  PrimalInventoryBP_Forge_C1;                               // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Forge.Forge_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Forge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
