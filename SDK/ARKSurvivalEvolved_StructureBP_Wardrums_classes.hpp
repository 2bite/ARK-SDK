#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureBP_Wardrums_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureBP_Wardrums.StructureBP_Wardrums_C
// 0x0000 (0x0F00 - 0x0F00)
class AStructureBP_Wardrums_C : public AStructureSeatingMusicBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureBP_Wardrums.StructureBP_Wardrums_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StructureBP_Wardrums(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
