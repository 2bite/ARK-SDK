#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureBP_WoodBench_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureBP_WoodBench.StructureBP_WoodBench_C
// 0x0000 (0x0EF1 - 0x0EF1)
class AStructureBP_WoodBench_C : public AStructureSeatingBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureBP_WoodBench.StructureBP_WoodBench_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StructureBP_WoodBench(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
