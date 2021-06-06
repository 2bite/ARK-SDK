#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_ShipCombinedParentBase_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipCombinedParentBase.BP_ShipCombinedParentBase_C
// 0x0000 (0x0478 - 0x0478)
class ABP_ShipCombinedParentBase_C : public AStaticMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShipCombinedParentBase.BP_ShipCombinedParentBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_ShipCombinedParentBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
