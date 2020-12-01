#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_NPCZoneManagerBlueprint_Land_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NPCZoneManagerBlueprint_Land.NPCZoneManagerBlueprint_Land_C
// 0x0000 (0x05E8 - 0x05E8)
class ANPCZoneManagerBlueprint_Land_C : public ANPCZoneManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NPCZoneManagerBlueprint_Land.NPCZoneManagerBlueprint_Land_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_NPCZoneManagerBlueprint_Land(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
