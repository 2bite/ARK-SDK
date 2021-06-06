#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeCeilingWithDoorWay_Giant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_AdobeCeilingWithDoorWay_Giant.PrimalItemStructure_AdobeCeilingWithDoorWay_Giant_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemStructure_AdobeCeilingWithDoorWay_Giant_C : public UPrimalItemStructure_BaseCeilingWithTrapdoor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_AdobeCeilingWithDoorWay_Giant.PrimalItemStructure_AdobeCeilingWithDoorWay_Giant_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_AdobeCeilingWithDoorWay_Giant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
