#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekTransmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TekTransmitter.PrimalItemStructure_TekTransmitter_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemStructure_TekTransmitter_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TekTransmitter.PrimalItemStructure_TekTransmitter_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TekTransmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
