#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_Scarecrow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Structure_Scarecrow.Structure_Scarecrow_C
// 0x0000 (0x0AA0 - 0x0AA0)
class AStructure_Scarecrow_C : public AStructureBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Structure_Scarecrow.Structure_Scarecrow_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Structure_Scarecrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
