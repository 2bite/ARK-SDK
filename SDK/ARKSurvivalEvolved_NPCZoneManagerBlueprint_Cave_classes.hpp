#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_NPCZoneManagerBlueprint_Cave_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NPCZoneManagerBlueprint_Cave.NPCZoneManagerBlueprint_Cave_C
// 0x0000 (0x05F0 - 0x05F0)
class ANPCZoneManagerBlueprint_Cave_C : public ANPCZoneManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NPCZoneManagerBlueprint_Cave.NPCZoneManagerBlueprint_Cave_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_NPCZoneManagerBlueprint_Cave(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
