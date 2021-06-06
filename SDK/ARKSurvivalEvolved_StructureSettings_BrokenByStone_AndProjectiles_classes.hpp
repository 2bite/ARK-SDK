#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_BrokenByStone_AndProjectiles_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureSettings_BrokenByStone_AndProjectiles.StructureSettings_BrokenByStone_AndProjectiles_C
// 0x0000 (0x0050 - 0x0050)
class UStructureSettings_BrokenByStone_AndProjectiles_C : public UStructureSettings_BrokenByStone_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_BrokenByStone_AndProjectiles.StructureSettings_BrokenByStone_AndProjectiles_C");
		return ptr;
	}


	void ExecuteUbergraph_StructureSettings_BrokenByStone_AndProjectiles(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
