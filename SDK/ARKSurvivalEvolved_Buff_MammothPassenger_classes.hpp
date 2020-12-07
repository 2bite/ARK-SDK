#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MammothPassenger_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_MammothPassenger.Buff_MammothPassenger_C
// 0x0000 (0x0950 - 0x0950)
class ABuff_MammothPassenger_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MammothPassenger.Buff_MammothPassenger_C");
		return ptr;
	}


	TEnumAsByte<ECameraStyle> BPForceCameraStyle(class APrimalCharacter** ForViewTarget);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_MammothPassenger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
