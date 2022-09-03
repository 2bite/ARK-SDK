#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_PressurePlate_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Structure_PressurePlate.Structure_PressurePlate_C
// 0x0000 (0x11A0 - 0x11A0)
class AStructure_PressurePlate_C : public AStructure_TekAlarm_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Structure_PressurePlate.Structure_PressurePlate_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_Structure_PressurePlate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
