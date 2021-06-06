#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ammonite_AIController_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ammonite_AIController.Ammonite_AIController_C
// 0x0002 (0x091B - 0x0919)
class AAmmonite_AIController_C : public ADino_AIController_BP_C
{
public:
	bool                                               onlyNotifyWaterAndAmphibiousNeighbors;                    // 0x0919(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               onlyNotifyCarnivoreNeighbors;                             // 0x091A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ammonite_AIController.Ammonite_AIController_C");
		return ptr;
	}


	bool BPShouldNotifyNeighbor(class APrimalDinoCharacter** neighbor);
	void UserConstructionScript();
	void ExecuteUbergraph_Ammonite_AIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
