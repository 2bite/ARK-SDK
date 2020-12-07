#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wyvern_AIController_BP_Corrupt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Wyvern_AIController_BP_Corrupt.Wyvern_AIController_BP_Corrupt_C
// 0x0000 (0x0919 - 0x0919)
class AWyvern_AIController_BP_Corrupt_C : public AWyvern_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wyvern_AIController_BP_Corrupt.Wyvern_AIController_BP_Corrupt_C");
		return ptr;
	}


	bool BPShouldNotifyAnyNeighbor(class APrimalDinoCharacter** neighbor);
	bool BPShouldNotifyNeighbor(class APrimalDinoCharacter** neighbor);
	void UserConstructionScript();
	void ExecuteUbergraph_Wyvern_AIController_BP_Corrupt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
